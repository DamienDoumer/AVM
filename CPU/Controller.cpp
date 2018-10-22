//
// Created by dtohi on 10/20/2018.
//

#include "Headers/Controller.h"

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

void Controller::makeOperand(string type, string value)
{

}