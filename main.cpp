#include "Headers/includer.h"
#include "CPU/Headers/Controller.h"

int main(int argc, char *argv[])
{
    Controller controller;
    int returnValue = 0;

    if(argc == 2)
    {
        controller.listenToCommands(argv[1]);
    }
    else if(argc > 2)
    {
        cout << "Please enter the correct number of arguements";
    }
    else
    {
        returnValue = controller.listenToCommands();
    }
    return returnValue;
}
