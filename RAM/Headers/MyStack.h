//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_STACK_H
#define SOURCECODE_STACK_H

#include <stack>
using std::stack;
#include "../../CPU/Headers/IOperand.h"

class MyStack
{
    stack<IOperand> _stack;
public:
    std::unique_ptr<IOperand> pop();
    void push(IOperand value);
    void clear();
    void dup(IOperand value);
    void Swap();
};


#endif //SOURCECODE_STACK_H
