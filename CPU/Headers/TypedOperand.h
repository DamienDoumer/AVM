//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_ITYPEDOPERAND_H
#define SOURCECODE_ITYPEDOPERAND_H

#include "../../Headers/includer.h"
#include "IOperand.h"

/*
 * Templated class T to be polymorphic on any type passed to it
 *  NOTE:::: Implementation of templated classe's functions was done in .h due to
 *  compiler constraints.
 */
template <typename T>
class TypedOperand : public IOperand{

    //The value of the operand.
    T value;
    eOperandType type;
public:
    TypedOperand (T value, eOperandType type):value(value), type(type){};
     virtual string toString() const
    {
        return std::to_string(value);
    }
    virtual eOperandType getType() const
    {
       return type;
    }
    virtual std::unique_ptr<IOperand> operator+(const IOperand &rhs) const
    {
        return std::unique_ptr<IOperand>();
    }
    virtual std::unique_ptr<IOperand> operator-(const IOperand &rhs) const
    {
        return std::unique_ptr<IOperand>();
    }
    virtual std::unique_ptr<IOperand> operator*(const IOperand &rhs) const
    {
        return std::unique_ptr<IOperand>();
    }
    virtual std::unique_ptr<IOperand> operator/(const IOperand &rhs) const
    {
        return std::unique_ptr<IOperand>();
    }
    virtual std::unique_ptr<IOperand> operator%(const IOperand &rhs) const
    {
        return std::unique_ptr<IOperand>();
    }

    ~TypedOperand() override {};
    std::unique_ptr<T> getValue()
    {
        return value;
    }
};

#endif //SOURCECODE_ITYPEDOPERAND_H
