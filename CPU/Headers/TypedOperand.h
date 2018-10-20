//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_ITYPEDOPERAND_H
#define SOURCECODE_ITYPEDOPERAND_H

#include "../Headers/includer.h"
#include "IOperand.h"

/*
 * Templated class T to be polymorphic on any type passed to it
 */
template <class T>
class TypedOperand : public IOperand{

    //The value of the operand.
    T value;
public:
    TypedOperand (T value):value(value);
    std::unique_ptr<T> getValue()
    {
        return value;
    }
};


#endif //SOURCECODE_ITYPEDOPERAND_H
