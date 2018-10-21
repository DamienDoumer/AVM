//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_MYREGISTER_H
#define SOURCECODE_MYREGISTER_H


class MyRegister
{
private:
    static MyRegister* instance;
    MyRegister();

public:
    static MyRegister* getInstance();
};


#endif //SOURCECODE_MYREGISTER_H
