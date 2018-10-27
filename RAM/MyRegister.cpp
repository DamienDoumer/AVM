//
// Created by dtohi on 10/20/2018.
//

#include "Headers/MyRegister.h"

/*
 * Singleton design of my register
 */
MyRegister *MyRegister::instance = 0;
MyRegister *MyRegister::getInstance()
{
    if (instance == 0)
    {
        instance = new MyRegister();
    }
    return instance;
}

MyRegister::MyRegister(){}

void MyRegister::save(BoxOperand op)
{
    this->opRegister = op;
}

BoxOperand MyRegister::getopRegister()
{
    return opRegister;
}

BoxOperand MyRegister::getIVal(int index)
{
    return arrOpRegister[index];
}

void MyRegister::saveIVal(BoxOperand val, int index)
{
    arrOpRegister[index] = val;
}
