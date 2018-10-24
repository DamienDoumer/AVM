//
// Created by dtohi on 10/20/2018.
//

#include "Headers/Controller.h"
#include "Headers/Factory.h"
#include "../AVMException.cpp"
#include "../RAM/Headers/MyStack.h"
#include <algorithm>
#include <regex>
using namespace std::regex_constants;

Controller::Controller()
{}

/*
 * Listen to user's command
 * Return non 0 digit if error occures.
 */
int Controller::listenToCommands()
{
    string command;
    int returnVal = 0;
    std::tuple<string, string, string> parsedCommand;

    try
    {
        while (true)
        {
            cout << "Please enter a command for the VM to exexute.\n";
            getline(cin, command);
            parsedCommand = parser.parseCommand(command);
            performInstructions(std::get<0>(parsedCommand));
            performInstructions(std::get<0>(parsedCommand), std::get<1>(parsedCommand), std::get<2>(parsedCommand));
        }
    }
    catch (exception& e)
    {
        cout << "An error occured while processing" <<
             "your command. Program will exit. :: " <<
             e.what() << "\n";
        returnVal = -1;
    }
    return returnVal;
}

/*
 * Use the factory to make a new operand of coresponding type
 */
std::unique_ptr<BoxOperand> Controller::makeOperand(string type, string value, eOperandType &t)
{
    BoxOperand *bo = NULL;

    try
    {
        if(type == "Int8")
        {
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int8, value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "Int16")
        {
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int16, value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "Int32")
        {
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int32, value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "Float") {
            std::unique_ptr<TypedOperand<float>> op = Factory<float>::createFloat(value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "Double")
        {
            std::unique_ptr<TypedOperand<double>> op = Factory<double>::createDouble(value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "BigDecimal")
        {
            std::unique_ptr<TypedOperand<long double>> op = Factory<long double>::createBigDecimal(value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
    }
    catch (std::invalid_argument e) {
        throw AVMException("The value passed as number is not valid");
    }
    catch (std::out_of_range e) {
        char *msg = "The value passed is out of the range of the type passed";
        throw AVMException(msg);
    }
    t = bo->getType();
    return std::unique_ptr<BoxOperand>(bo);
}

/*
 * Execute parameterized commands using Command to Delegate Match
 */
void Controller::performInstructions(string command, string operandType, string value)
{
    std::smatch cmdMatch;
    std::map<std::string, commandPerformer>::iterator iterator;
    commandActionMap actionMap;

    actionMap["Push"] = &Controller::push;
    actionMap["Assert"] = &Controller::assert;
    for(iterator = actionMap.begin(); iterator != actionMap.end(); iterator++)
    {
        std::regex caseInsensitiveRegex(iterator->first, ECMAScript | icase );
        if(std::regex_search(command, cmdMatch, caseInsensitiveRegex))
        {
            Controller c;
            (this->*(iterator->second))(operandType, value);
        }
    }
}

void Controller::assert(string type, string value)
{
    eOperandType t = eOperandType::Double;
    makeOperand(type, value, t);
    BoxOperand *op = new BoxOperand(value, t);
    bool eq = MyStack::getInstance()->assert(*op);
    if(eq)
        cout << "Assertion passed, operands are equal";
}

void Controller::push(string type, string value)
{
    eOperandType t = eOperandType::Double;
    makeOperand(type, value, t).get();
    BoxOperand *op = new BoxOperand(value, t);
    MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(op));
}

void Controller::performInstructions(string command) {

    string commands[] = { "Push", "Pop", "Clear", "Dup", "Swap", "Dump",
                          "Assert", "Add", "Sub", "Mul", "Div", "Mod",
                          "Load", "Store", "Print", "Exit" };
}


