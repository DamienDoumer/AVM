//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_FACTORY_H
#define SOURCECODE_FACTORY_H

#include <memory>
#include "../../Headers/includer.h"
#include "../../eOperandType.cpp"
#include "IOperand.h"
#include "TypedOperand.h"

template <class T>
class Factory {
public:
    static std::unique_ptr<TypedOperand<T>> createOperand(eOperandType type,
            const std::string& value)
    {
        return nullptr;
    }
};

#endif //SOURCECODE_FACTORY_H