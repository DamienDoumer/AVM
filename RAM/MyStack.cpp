//
// Created by dtohi on 10/20/2018.
//

#include "Headers/MyStack.h"

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

MyStack::MyStack(){}