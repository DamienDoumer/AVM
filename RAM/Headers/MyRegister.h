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
    BoxOperand arrOpRegister[16];
    int index;

public:
    static MyRegister* getInstance();
    void save(BoxOperand op);
    BoxOperand getopRegister();
    BoxOperand getIVal(int index);
    void saveIVal(BoxOperand val, int index);
};


#endif //SOURCECODE_MYREGISTER_H
