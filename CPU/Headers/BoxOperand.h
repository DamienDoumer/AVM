//
// Created by damien on 23/10/18.
//

#ifndef SOURCECODE_BOXOPERAND_H
#define SOURCECODE_BOXOPERAND_H


#include <sstream>
#include "IOperand.h"
#include "../../Headers/includer.h"
#include "../../AVMException.cpp"

class BoxOperand : public IOperand
{
    eOperandType type;
    string value;

public:
    BoxOperand (string value, eOperandType type):value(value), type(type){};
    BoxOperand(){}
    template<class T>
    T convert(eOperandType type, string value)
    {
        try
        {
            switch (type)
            {
                case eOperandType::Int8:
                case eOperandType::Int16:
                case eOperandType::Int32:
                    return std::stoi(value);
                case eOperandType::Float :
                    return std::stof(value);
                case eOperandType::Double :
                    return std::stof(value);
                case eOperandType::BigDecimal :
                    return std::stold(value);
            }
        }
        catch (std::invalid_argument e)
        {
            throw AVMException("The value passed as number is not valid");
        }
        catch (std::out_of_range e)
        {
            char *msg = "The value passed is out of the range of the typed passed";
            throw AVMException(msg);
        }
        catch (exception& e)
        {
            throw AVMException("An unexpected error occured when converting value types");
        }
    }
    virtual string toString() const;
    virtual eOperandType getType() const;
    virtual std::unique_ptr<IOperand> operator+(const IOperand &rhs) const ;
    virtual std::unique_ptr<IOperand> operator-(const IOperand &rhs) const;
    virtual std::unique_ptr<IOperand> operator*(const IOperand &rhs) const;
    virtual std::unique_ptr<IOperand> operator/(const IOperand &rhs) const;
    virtual std::unique_ptr<IOperand> operator%(const IOperand &rhs) const;
};

#endif //SOURCECODE_BOXOPERAND_H