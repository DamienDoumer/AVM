//
// Created by damien on 23/10/18.
//

#ifndef SOURCECODE_BOXOPERAND_H
#define SOURCECODE_BOXOPERAND_H


#include "IOperand.h"
#include "../../Headers/includer.h"

class BoxOperand : public IOperand
{
    eOperandType type;
    string value;

public:
    BoxOperand (string value, eOperandType type):value(value), type(type){};
    BoxOperand(){};
    virtual string toString() const;
    virtual eOperandType getType() const;
    virtual std::unique_ptr<IOperand> operator+(const IOperand &rhs) const;
    virtual std::unique_ptr<IOperand> operator-(const IOperand &rhs) const;
    virtual std::unique_ptr<IOperand> operator*(const IOperand &rhs) const;
    virtual std::unique_ptr<IOperand> operator/(const IOperand &rhs) const;
    virtual std::unique_ptr<IOperand> operator%(const IOperand &rhs) const;
};

#endif //SOURCECODE_BOXOPERAND_H