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

std::unique_ptr<IOperand> BoxOperand::operator+(const IOperand &rhs) const {
    return std::unique_ptr<IOperand>();
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
