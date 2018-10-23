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

template<typename T>
class MyStack {
private:
    static MyStack *instance;
    MyStack();
    std::stack<TypedOperand<T>> _stack;

public:
    static MyStack *getInstance();
    std::unique_ptr<IOperand> pop();
    void push(std::unique_ptr<IOperand> value);
    void clear();
    void dup();
    void swap();
    void dump();
    bool assert();
    void add();
    void sub();
    void mul();
    void div();
    void mod();
    void load();
    void store();
    void print();
    void exit();
};

#endif //SOURCECODE_MYSTACK_H
