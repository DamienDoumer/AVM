//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_CONTROLLER_H
#define SOURCECODE_CONTROLLER_H

#include <map>
#include "../../IO/Headers/Parser.h"
#include "../../Headers/includer.h"
#include "../../eOperandType.cpp"
#include "BoxOperand.h"

class Controller
{
    Parser parser;

    typedef void (Controller::*commandPerformer)(string, string);
    typedef void (Controller::*simpleCommandPerformer)();
    typedef std::map<std::string, commandPerformer> commandActionMap;
    typedef std::map<std::string, simpleCommandPerformer> simpleCommandActionMap;
public:
    int listenToCommands();
    std::unique_ptr<BoxOperand> makeOperand(string type, string value, eOperandType &t);
    void performInstructions(string command);
    void performInstructions(string command, string operandType, string value);
    void push(string type, string value);
    void assert(string type, string value);
    void add();
    void swap();
    void sub();
    void mul();
    void div();
    void mod();
    void load();
    void store();
    void print();
    void pop();
    void exit();
    void dup();
    void dump();
    void clear();
    Controller();
};


#endif //SOURCECODE_CONTROLLER_H
