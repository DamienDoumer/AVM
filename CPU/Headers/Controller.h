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
#include "Converter.h"

class Controller
{
    Parser parser;

    typedef void (Controller::*commandPerformer)(string, string);
    typedef void (Controller::*simpleCommandPerformer)();
    typedef void (Controller::*indexedCommandPerformer)(int);
    typedef std::map<std::string, commandPerformer> commandActionMap;
    typedef std::map<std::string, indexedCommandPerformer> indexedCommandMap;
    typedef std::map<std::string, simpleCommandPerformer> simpleCommandActionMap;

public:
    int listenToCommands();
    std::unique_ptr<BoxOperand> makeOperand(string type, string value, eOperandType &t);
    int performInstructions(string command);
    int performInstructions(string command, string index);
    int performInstructions(string command, string operandType, string value);
    void push(string type, string value);
    void assert(string type, string value);
    void add();
    void swap();
    void sub();
    void mul();
    void div();
    void mod();
    void load(int index);
    void store(int index);
    void print();
    void pop();
    void exit();
    void dup();
    void dump();
    void clear();
    Controller();
};


#endif //SOURCECODE_CONTROLLER_H
