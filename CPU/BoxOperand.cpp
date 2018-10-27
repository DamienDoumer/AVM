//
// Created by damien on 23/10/18.
//

#include "Headers/BoxOperand.h"
#include "Headers/Converter.h"

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

    long double vrhs = 0;
    long double vlhs = 0;
    long double res = 0;

    Converter::convertValue<long double>(eOperandType::BigDecimal, rhs.toString(), BigDecimalOperandType::_BigDecimal, vrhs);
    Converter::convertValue<long double>(eOperandType::BigDecimal, value, BigDecimalOperandType::_BigDecimal, vlhs);
    res = vlhs + vrhs;
    string stringRes = std::to_string(res);
    if(rhs.getType() == eOperandType::Int8 ||
            rhs.getType() == eOperandType::Int16 ||
            rhs.getType() ==  eOperandType::Int32)
    {
        auto result = Converter::conv(type, stringRes);
        return std::unique_ptr<IOperand>(new BoxOperand(result.value, type));
    }
    else if (rhs.getType() == eOperandType::Float)
    {
        auto result = Converter::conv(rhs.getType(), stringRes);
        return std::unique_ptr<IOperand>(new BoxOperand(stringRes, rhs.getType()));
    }
    else if (rhs.getType() == eOperandType::Double)
    {
        auto result = Converter::conv(rhs.getType(), stringRes);
        return std::unique_ptr<IOperand>(new BoxOperand(stringRes, rhs.getType()));
    }
    else if (rhs.getType() == eOperandType::BigDecimal)
    {
        auto result = Converter::conv(rhs.getType(), stringRes);
        return std::unique_ptr<IOperand>(new BoxOperand(stringRes, rhs.getType()));
    }
}