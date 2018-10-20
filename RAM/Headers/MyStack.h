//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_MYSTACK_H
#define SOURCECODE_MYSTACK_H


#include <sys/stat.h>

class MyStack {
private:
    static MyStack *instance;
    MyStack();

public:
    static MyStack *getInstance();
};

#endif //SOURCECODE_MYSTACK_H
