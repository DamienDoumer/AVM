//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_IOPERAND_H
#define SOURCECODE_IOPERAND_H

#include "../Headers/Includers.h"
#include "../eOperandType.cpp"

class IOperand {
public:
    virtual string toString() const  = 0;
    virtual eOperandType getType() const  = 0;
    virtual std::unique_ptr<IOperand> operator+(const IOperand &rhs) const = 0;
    virtual std::unique_ptr<IOperand> operator-(const IOperand &rhs) const = 0;
    virtual std::unique_ptr<IOperand> operator*(const IOperand &rhs) const = 0;
    virtual std::unique_ptr<IOperand> operator/(const IOperand &rhs) const = 0;
    virtual std::unique_ptr<IOperand> operator%(const IOperand &rhs) const = 0;
    virtual ~IOperand(){};
};


#endif //SOURCECODE_IOPERAND_H
