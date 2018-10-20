//
// Created by dtohi on 10/20/2018.
//

#include "Headers/MyStack.h"

MyStack *MyStack::getInstance()
{
    if(instance == 0)
    {
        instance = new MyStack();
    }
    return  instance;
}

MyStack::MyStack(){}