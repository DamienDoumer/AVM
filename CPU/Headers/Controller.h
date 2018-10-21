//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_CONTROLLER_H
#define SOURCECODE_CONTROLLER_H

#include "../../IO/Headers/Parser.h"
#include "../../Headers/includer.h"

class Controller
{
    Parser parser;
public:
    int listenToCommands();
    Controller();
};


#endif //SOURCECODE_CONTROLLER_H
