//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_CONTROLLER_H
#define SOURCECODE_CONTROLLER_H


#include "Headers/IOperand.h"

class Controller
{
public:
    void dump();
    bool assert(IOperand value);
    bool Add();
    bool Sub();
    bool mul();
    bool div();
    bool mod();
    bool load();
    bool store();
    bool print();
    bool exit();
};


#endif //SOURCECODE_CONTROLLER_H
