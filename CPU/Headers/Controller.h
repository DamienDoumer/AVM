//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_CONTROLLER_H
#define SOURCECODE_CONTROLLER_H

#include "../../IO/Headers/Parser.h"
#include "../../Headers/includer.h"
#include "../../eOperandType.cpp"
#include "BoxOperand.h"

class Controller
{
    Parser parser;
public:
    int listenToCommands();
    BoxOperand makeOperand(string type, string value);
    void performInstructions(string command);
    void performInstructions(string command, string operandType, string value);
    void push(string type, string value);
    void assert(string type, string value);
    void add();
    void sub();
    void mul();
    void div();
    void mod();
    void load();
    void store();
    void print();
    void exit();
    Controller();
};


#endif //SOURCECODE_CONTROLLER_H
