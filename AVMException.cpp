//
// Created by dtohi on 10/21/2018.
//

#pragma once
#include <math.h>
#include "Headers/includer.h"

class AVMException : public exception
{
    char *message;
public:
    AVMException(char *message) : message(message){};
    const char *what() const throw()
    {
        return message;
    }
};

