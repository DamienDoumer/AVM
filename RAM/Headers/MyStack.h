//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_MYSTACK_H
#define SOURCECODE_MYSTACK_H

#include <sys/stat.h>
#include <stack>
using std::stack;
#include "../../CPU/Headers/IOperand.h"
#include "../../CPU/Headers/TypedOperand.h"
#include "../../CPU/Headers/BoxOperand.h"

class MyStack
{
private:
    static MyStack *instance;
    MyStack(){};
    std::stack<BoxOperand> _stack;

public:
    static MyStack *getInstance();
    BoxOperand *pop();
    void push(std::unique_ptr<BoxOperand> value);
    void clear();
    void dup();
    void swap();
    void dump();
    bool assert(BoxOperand operand);
    void print();
};

#endif //SOURCECODE_MYSTACK_H
