//
// Created by dtohi on 10/20/2018.
//

#include "Headers/MyRegister.h"

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