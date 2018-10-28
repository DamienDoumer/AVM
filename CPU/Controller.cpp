//
// Created by dtohi on 10/20/2018.
//

#include "Headers/Controller.h"
#include "Headers/Factory.h"
#include "Headers/BFactory.h"
#include "../AVMException.cpp"
#include "../RAM/Headers/MyStack.h"
#include <algorithm>
#include <regex>
#include "../AVMWarnException.cpp"
#include "../RAM/Headers/MyRegister.h"
#include <fstream>

using namespace std::regex_constants;

Controller::Controller()
{}

/*
 * Listen to commands from a file, and
 * return a non 0 digit when error occures.
 */
int Controller::listenToCommands(string filePath)
{
    string line;
    //std::ifstream myfile (filePath);
    int returnVal = 0;
    std::tuple<string, string, string> parsedCommand;
    std::ifstream inFile;

    inFile.open(filePath);
    if(!inFile.is_open())
    {
        cout << "Unable to read file";
        return -1;
    }
    while(inFile.good())
    {
        try
        {
            getline(inFile, line);
            parsedCommand = parser.parseCommand(line);
            returnVal = performInstructions(std::get<0>(parsedCommand));
            if(returnVal == -1)
            {
                cout << "Program exited\n";
                inFile.close();
                return 0;
            }
            performInstructions(std::get<0>(parsedCommand), std::get<1>(parsedCommand),
                                std::get<2>(parsedCommand));
            performInstructions(std::get<0>(parsedCommand), std::get<2>(parsedCommand));
        }
        catch (exception &e)
        {
            cout << "An error occured while processing" <<
                 " your command. Program will exit. :: " <<
                 e.what() << "\n";
            returnVal = -1;
        }
    }
    inFile.close();
    cout << "You have not precised an exit point for this settings file, program will exit!.\n";
//    {
//
//    }
//    if (myfile.is_open())
//    {
//        while ( myfile.good() )
//        {
//            getline(myfile, line);
//            try
//            {
//                parsedCommand = parser.parseCommand(line);
//                returnVal = performInstructions(std::get<0>(parsedCommand));
//                if(returnVal == -1)
//                {
//                    cout << "Program exited\n";
//                    myfile.close();
//                    return 0;
//                }
//                performInstructions(std::get<0>(parsedCommand), std::get<1>(parsedCommand),
//                        std::get<2>(parsedCommand));
//                performInstructions(std::get<0>(parsedCommand), std::get<2>(parsedCommand));
//            }
//            catch (exception &e)
//            {
//                cout << "An error occured while processing" <<
//                     " your command. Program will exit. :: " <<
//                     e.what() << "\n";
//                returnVal = -1;
//            }
//        }
//        myfile.close();
//        cout << "You have not precised an exit point for this settings file, program will exit!.";
//    }
//    else
//        cout << "Unable to read from this file,";
}

/*
 * Listen to user's command
 * Return non 0 digit if error occures.
 */
int Controller::listenToCommands()
{
    string command;
    int returnVal = 0;
    std::tuple<string, string, string> parsedCommand;

    while (true)
    {
        try
        {
            cout << "Please enter a command for the VM to exexute.\n";
            getline(cin, command);
            parsedCommand = parser.parseCommand(command);
            returnVal = performInstructions(std::get<0>(parsedCommand));
            if(returnVal == -1)
            {
                cout << "Program exited\n";
                return 0;
            }
            performInstructions(std::get<0>(parsedCommand), std::get<1>(parsedCommand), std::get<2>(parsedCommand));
            performInstructions(std::get<0>(parsedCommand), std::get<2>(parsedCommand));
        }
        catch (exception &e)
        {
            cout << "An error occured while processing" <<
                 " your command. Program will exit. :: " <<
                 e.what() << "\n";
            returnVal = -1;
        }
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
            //bo = BFactory<BoxOperand>::createOperand(eOperandType::Int8, value).get();
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int8, value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "Int16")
        {
            //bo = BFactory<BoxOperand>::createOperand(eOperandType::Int16, value).get();
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int16, value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "Int32")
        {
            //bo = BFactory<BoxOperand>::createOperand(eOperandType::Int32, value).get();
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int32, value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "Float")
        {
            //bo = BFactory<BoxOperand>::createOperand(eOperandType::Float, value).get();
            std::unique_ptr<TypedOperand<float>> op = Factory<float>::createFloat(value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "Double")
        {
            //bo = BFactory<BoxOperand>::createOperand(eOperandType::Double, value).get();
            std::unique_ptr<TypedOperand<double>> op = Factory<double>::createDouble(value);
            bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
        }
        else if(type == "BigDecimal")
        {
            //bo = BFactory<BoxOperand>::createOperand(eOperandType::BigDecimal, value).get();
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
int Controller::performInstructions(string command, string operandType, string value)
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
        cout << "Assertion passed, operands are equal\n";
}

void Controller::push(string type, string value)
{
    eOperandType t = eOperandType::Double;
    makeOperand(type, value, t).get();
    BoxOperand *op = new BoxOperand(value, t);
    MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(op));
    cout << "Operand added to stack successfully\n";
}

int Controller::performInstructions(string command)
{
    std::smatch cmdMatch;
    std::map<std::string, simpleCommandPerformer>::iterator iterator;
    simpleCommandActionMap actionMap;
    string exit = "Exit";

    actionMap["Add"] = &Controller::add;
    actionMap["Swap"] = &Controller::swap;
    actionMap["Sub"] = &Controller::sub;
    actionMap["Mul"] = &Controller::mul;
    actionMap["Div"] = &Controller::div;
    actionMap["Mod"] = &Controller::mod;
    actionMap["Print"] = &Controller::print;
    actionMap["Exit"] = &Controller::exit;
    actionMap["Pop"] = &Controller::pop;
    actionMap["Dump"] = &Controller::dump;
    actionMap["Dup"] = &Controller::dup;
    actionMap["Clear"] = &Controller::clear;
    for(iterator = actionMap.begin(); iterator != actionMap.end(); iterator++)
    {
        std::regex caseInsensitiveRegex(iterator->first, ECMAScript | icase );
        std::regex exitInsensitiveRegex(iterator->first, ECMAScript | icase );
        if(std::regex_search(command, cmdMatch, exitInsensitiveRegex))
            return -1;
        if(std::regex_search(command, cmdMatch, caseInsensitiveRegex))
        {
            Controller c;
            (this->*(iterator->second))();
            return 0;
        }
    }
}

/*
 * Perform string commands and instructions,
 * which require an index.
 */
int Controller::performInstructions(string command, string index)
{
    int i = std::stoi(index);

    std::smatch cmdMatch;
    std::map<std::string, indexedCommandPerformer>::iterator iterator;
    indexedCommandMap actionMap;
    actionMap["Load"] = &Controller::load;
    actionMap["Store"] = &Controller::store;
    for(iterator = actionMap.begin(); iterator != actionMap.end(); iterator++)
    {
        std::regex caseInsensitiveRegex(iterator->first, ECMAScript | icase );
        if(std::regex_search(command, cmdMatch, caseInsensitiveRegex))
        {
            Controller c;
            (this->*(iterator->second))(i);
        }
    }
}

void Controller::add()
{
    BoxOperand *poped = MyStack::getInstance()->pop();
    BoxOperand *poped2 = MyStack::getInstance()->pop();
    std::unique_ptr<IOperand> result = poped2->operator+(*poped);
    string s = result.get()->toString();
    eOperandType t = result.get()->getType();
    BoxOperand *myOp = new BoxOperand(s, t);
    MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(myOp));
    cout << "Finished adding values, result yields: " << s << "\n";
}

void Controller::swap()
{
    MyStack::getInstance()->swap();
    cout << "Swap completed\n";
}

void Controller::sub()
{
    BoxOperand *poped = MyStack::getInstance()->pop();
    BoxOperand *poped2 = MyStack::getInstance()->pop();
    std::unique_ptr<IOperand> result = poped2->operator-(*poped);
    string s = result.get()->toString();
    eOperandType t = result.get()->getType();
    BoxOperand *myOp = new BoxOperand(s, t);
    MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(myOp));
    cout << " Finished subtracting values, result yields: " << s << "\n";
}

void Controller::mul()
{
    BoxOperand *poped = MyStack::getInstance()->pop();
    BoxOperand *poped2 = MyStack::getInstance()->pop();
    std::unique_ptr<IOperand> result = poped2->operator*(*poped);
    string s = result.get()->toString();
    eOperandType t = result.get()->getType();
    BoxOperand *myOp = new BoxOperand(s, t);
    MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(myOp));
    cout << " Finished subtracting values, result yields: " << s << "\n";
}

void Controller::div()
{
    BoxOperand *poped = MyStack::getInstance()->pop();
    BoxOperand *poped2 = MyStack::getInstance()->pop();
    std::unique_ptr<IOperand> result = poped2->operator/(*poped);
    string s = result.get()->toString();
    eOperandType t = result.get()->getType();
    BoxOperand *myOp = new BoxOperand(s, t);
    MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(myOp));
    cout << " Finished Dividing values, result yields: " << s << "\n";
}

void Controller::mod()
{
    BoxOperand *poped = MyStack::getInstance()->pop();
    BoxOperand *poped2 = MyStack::getInstance()->pop();
    std::unique_ptr<IOperand> result = poped2->operator%(*poped);
    string s = result.get()->toString();
    eOperandType t = result.get()->getType();
    BoxOperand *myOp = new BoxOperand(s, t);
    MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(myOp));
    cout << " Finished Modulus, result yields: " << s << "\n";
}

void Controller::load(int index)
{
    BoxOperand *regOp;
    *regOp = MyRegister::getInstance()->getIVal(index);
    if(regOp)
    {
        MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(regOp));
    }
    else
    {
        throw AVMException("This register's index is empty, or NULL");
    }
    cout << "Load operation completed.";
}

void Controller::store(int index)
{
    BoxOperand *bo = MyStack::getInstance()->pop();
    MyRegister::getInstance()->saveIVal(*bo, index);
    cout << "Store operation completed.";
}

void Controller::print()
{
    MyStack::getInstance()->print();
}

void Controller::pop()
{
    BoxOperand *poped = MyStack::getInstance()->pop();
    string enums[] = {"Int8", "Int16", "Int32", "Float", "Double", "BigDecimal"};
    cout << poped->toString() << " Was poped" << " with type: " <<
    enums[poped->getType()] << "\n";
}

void Controller::exit()
{
}

void Controller::dump()
{
    MyStack::getInstance()->dump();
}

void Controller::dup()
{
    MyStack::getInstance()->dup();
    cout << "Duplication Funished\n";
}

void Controller::clear()
{
    MyStack::getInstance()->clear();
    cout << "Stack cleared\n";
}