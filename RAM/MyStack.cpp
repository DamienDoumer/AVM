//
// Created by dtohi on 10/20/2018.
//

#include "Headers/MyStack.h"
#include "../AVMException.cpp"
#include "../CPU/Headers/TypedOperand.h"

/*
 * Singleton design of my stack
 */
MyStack *MyStack::instance = 0;
MyStack *MyStack::getInstance()
{
    if(instance == 0)
    {
        instance = new MyStack();
    }
    return  instance;
}

/*
 * Pushes value inside the stack
 */
void MyStack::push(std::unique_ptr<IOperand> value)
{
    (*this)._stack.push(*value.get());
}

/*
 * clears data contained in the stack
 */
void MyStack::clear()
{
    while(_stack.size() != 0)
    {
        _stack.pop();
    }
}

std::unique_ptr<IOperand> MyStack::pop()
{
    TypedOperand<int> *val = (*this)._stack.top();
    //return std::unique_ptr<IOperand>(_stack.pop());
}

void MyStack::dup()
{
    IOperand buffer = _stack.pop();

}