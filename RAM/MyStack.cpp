//
// Created by dtohi on 10/20/2018.
//

#include "Headers/MyStack.h"
#include "../AVMException.cpp"
#include "../CPU/Headers/TypedOperand.h"
#include "../AVMWarnException.cpp"

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
void MyStack::push(std::unique_ptr<BoxOperand> value)
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

BoxOperand *MyStack::pop()
{
    if(_stack.empty())
        throw AVMException("The stack is empty, pop operation cannot be performed");
    BoxOperand val = (*this)._stack.top();
    _stack.pop();
    return &val;
}

void MyStack::dup()
{
    BoxOperand buffer = _stack.top();
    _stack.push(buffer);
}

void MyStack::swap()
{
    BoxOperand *b1;
    BoxOperand *b2;

    if(_stack.size() < 2)
        throw AVMWarnException("The stack does not contain up to 2 elements");
    *b1 = _stack.top();
    _stack.pop();
    *b2 = _stack.top();
    _stack.pop();
    _stack.push(*b1);
    _stack.push(*b2);
}

void MyStack::dump()
{
    std::stack<BoxOperand> _bufferStack;

    if(_stack.size() < 1)
        throw AVMWarnException("Your stack is empty");
    for(int i = 0; i < _stack.size(); i++)
    {
        cout << _stack.top().toString() << "\n";
        _bufferStack.push(_stack.top());
        _stack.pop();
    }
    for(int i = 0; i < _bufferStack.size(); i++)
    {
        _stack.push(_bufferStack.top());
        _bufferStack.pop();
    }
}

bool MyStack::assert(BoxOperand operand)
{
    if(_stack.size() < 1)
        throw AVMWarnException("Your stack is empty");
    if(operand.getType() == _stack.top().getType() &&
        operand.toString() == _stack.top().toString())
        return true;
    throw AVMWarnException("Assertion failed.");
}
