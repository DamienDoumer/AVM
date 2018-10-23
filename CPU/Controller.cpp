//
// Created by dtohi on 10/20/2018.
//

#include "Headers/Controller.h"
#include "Headers/Factory.h"
#include "../AVMException.cpp"
#include "../RAM/Headers/MyStack.h"

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
            makeOperand(std::get<1>(parsedCommand), std::get<2>(parsedCommand));
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
void Controller::makeOperand(string type, string value)
{
    try
    {
        if(type == "Int8")
        {
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int8, value);
            BoxOperand *bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
            MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(bo));
        }
        else if(type == "Int16")
        {
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int16, value);
            BoxOperand *bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
            MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(bo));
        }
        else if(type == "Int32")
        {
            std::unique_ptr<TypedOperand<int>> op = Factory<int>::createIntOperand(eOperandType::Int32, value);
            BoxOperand *bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
            MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(bo));
        }
        else if(type == "Float") {
            std::unique_ptr<TypedOperand<float>> op = Factory<float>::createFloat(value);
            BoxOperand *bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
            MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(bo));
        }
        else if(type == "Double")
        {
            std::unique_ptr<TypedOperand<double>> op = Factory<double>::createDouble(value);
            BoxOperand *bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
            MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(bo));
        }
        else if(type == "BigDecimal")
        {
            std::unique_ptr<TypedOperand<long double>> op = Factory<long double>::createBigDecimal(value);
            BoxOperand *bo = new BoxOperand((*op.get()).toString(), (*op.get()).getType());
            MyStack::getInstance()->push(std::unique_ptr<BoxOperand>(bo));
        }
    }
    catch (std::invalid_argument e) {
        throw AVMException("The value passed as number is not valid");
    }
    catch (std::out_of_range e) {
        char *msg = "The value passed is out of the range of the type passed";
        throw AVMException(msg);
    }
}