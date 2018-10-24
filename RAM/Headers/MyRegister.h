//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_MYREGISTER_H
#define SOURCECODE_MYREGISTER_H


#include "../../CPU/Headers/BoxOperand.h"

class MyRegister
{
private:
    static MyRegister* instance;
    MyRegister();
    BoxOperand opRegister;

public:
    static MyRegister* getInstance();
    void save(BoxOperand op);
    BoxOperand getopRegister();
};


#endif //SOURCECODE_MYREGISTER_H
