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
    while(!_stack.empty())
    {
        _stack.pop();
    }
}

/*
 * Pop and returns the first item on the stack
 */
BoxOperand *MyStack::pop()
{
    if(_stack.empty())
        throw AVMException("The stack is empty, pop operation cannot be performed");
    BoxOperand val = (*this)._stack.top();
    _stack.pop();
    return &val;
}

/*
 * Duplicates the first item on the stack
 */
void MyStack::dup()
{
    if(_stack.empty())
        throw AVMWarnException("The stack is empty, dup operation cannot be performed");
    BoxOperand buffer = _stack.top();
    _stack.push(buffer);
}

/*
 * Interchanges the position of the
 * Top most items on the stack
 */
void MyStack::swap()
{
    if(_stack.size() < 2)
        throw AVMWarnException("The stack does not contain up to 2 elements");
    BoxOperand b1 = _stack.top();
    _stack.pop();
    BoxOperand b2 = _stack.top();
    _stack.pop();
    _stack.push(b1);
    _stack.push(b2);
}

/*
 * Traverses the stack and displays its items.
 */
void MyStack::dump()
{
    std::stack<BoxOperand> _bufferStack;
    string enums[] = {"Int8", "Int16", "Int32", "Float", "Double", "BigDecimal"};

    if(_stack.size() < 1)
        throw AVMWarnException("Your stack is empty");
    while(!_stack.empty())
    {
        cout << _stack.top().toString() << " " << enums[_stack.top().getType()] <<"\n";
        _bufferStack.push(_stack.top());
        _stack.pop();
    }
    while (!_bufferStack.empty())
    {
        _stack.push(_bufferStack.top());
        _bufferStack.pop();
    }
}

/*
 * Assert that the element passed is equal to the top most element
 */
bool MyStack::assert(BoxOperand operand)
{
    if(_stack.size() < 1)
        throw AVMWarnException("Your stack is empty");
    if(operand.getType() == _stack.top().getType() &&
        operand.toString() == _stack.top().toString())
        return true;
    throw AVMWarnException("Assertion failed.");
}

void MyStack::print()
{
    if(_stack.empty())
        throw AVMWarnException("Your stack is empty");

    BoxOperand bo = _stack.top();
    if (bo.getType() == eOperandType::Int8)
        cout << bo.toString() << " Int8";
    else
        cout << "Top operand is not an Int8";
}
