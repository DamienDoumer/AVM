//
// Created by damien on 23/10/18.
//

#include "Headers/BoxOperand.h"

string BoxOperand::toString() const {
    return value;
}

eOperandType BoxOperand::getType() const {
    return type;
}

std::unique_ptr<IOperand> BoxOperand::operator-(const IOperand &rhs) const {
    return std::unique_ptr<IOperand>();
}

std::unique_ptr<IOperand> BoxOperand::operator*(const IOperand &rhs) const {
    return std::unique_ptr<IOperand>();
}

std::unique_ptr<IOperand> BoxOperand::operator/(const IOperand &rhs) const {
    return std::unique_ptr<IOperand>();
}

std::unique_ptr<IOperand> BoxOperand::operator%(const IOperand &rhs) const {
    return std::unique_ptr<IOperand>();
}

std::unique_ptr<IOperand> BoxOperand::operator+(const IOperand &rhs) const
{
    if(rhs.getType() == eOperandType::Int8 ||
            rhs.getType() == eOperandType::Int16 ||
            rhs.getType() ==  eOperandType::Int32)
    {
        BoxOperand *op = new BoxOperand(rhs.toString(), rhs.getType());
        int v = std::stoi(op->toString());
        string sum = std::to_string((v + std::stold(value)));
        return std::unique_ptr<IOperand>( new BoxOperand(sum, type));
    }
    else if (rhs.getType() == eOperandType::Float)
    {
        BoxOperand *op = new BoxOperand(rhs.toString(), rhs.getType());
        float v = std::stof(op->toString());
        string sum = std::to_string((v + std::stold(value)));
        return std::unique_ptr<IOperand>( new BoxOperand(sum, type));
    }
}