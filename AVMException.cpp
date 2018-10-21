//
// Created by dtohi on 10/21/2018.
//

#include <math.h>
#include "Headers/includer.h"

class AVMException : public _exception
{
    string message;
public:
    AVMException(string message) : message(message){};
    const string what() const throw()
    {
        return message;
    }
};

