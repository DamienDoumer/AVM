//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_FACTORY_H
#define SOURCECODE_FACTORY_H

#include <memory>
#include "../Headers/Includers.h"
#include "../eOperandType.cpp"
#include "IOperand.h"

class Factory {
    static std::unique_ptr<IOperand> createOperand(eOperandType type, const std::string& value);
};


#endif //SOURCECODE_FACTORY_H
