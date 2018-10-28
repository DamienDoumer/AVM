//
// Created by dtohi on 10/20/2018.
//

#ifndef SOURCECODE_FACTORY_H
#define SOURCECODE_FACTORY_H

#include <memory>
#include "../../Headers/includer.h"
#include "../../eOperandType.cpp"
#include "TypedOperand.h"
#include "IOperand.h"
#include "../../AVMException.cpp"
#include "Converter.h"
#include "BoxOperand.h"

template<class T>
class Factory
{

    static std::unique_ptr<BoxOperand> createInt8(const string &value)
    {
        int v = 0;

        Converter::convertValue<int>(eOperandType::Int8, value, IntOperandType::_Int8, v);
        BoxOperand *op;
        op = new BoxOperand(eOperandType::Int8, std::to_string(v);
        return std::unique_ptr<BoxOperand>(op);
    }

    static std::unique_ptr<BoxOperand> createInt16(const string &value)
    {
        int v = 0;

        Converter::convertValue<int>(eOperandType::Int16, value, IntOperandType::_Int16, v);
        BoxOperand *op;
        op = new BoxOperand(eOperandType::Int16, std::to_string(v);
        return std::unique_ptr<BoxOperand>(op);
    }

    static std::unique_ptr<BoxOperand> createInt32(const string &value)
    {
        int v = 0;

        Converter::convertValue<int>(eOperandType::Int32, value, IntOperandType::_Int32, v);
        BoxOperand *op;
        op = new BoxOperand(eOperandType::Int32, std::to_string(v);
        return std::unique_ptr<BoxOperand>(op);
    }

    static std::unique_ptr<BoxOperand> createFloat(const string &value)
    {
        float v = 0;

        Converter::convertValue<float>(eOperandType::Float, value, FloatOperandType::_Float, v);
        BoxOperand *op;
        op = new BoxOperand(eOperandType::Float, std::to_string(v);
        return std::unique_ptr<BoxOperand>(op);
    }

    static std::unique_ptr<BoxOperand> createDouble(const string &value)
    {
        double v = 0;

        Converter::convertValue<double>(eOperandType::Double, value, DoubleOperandType::_Double, v);
        BoxOperand *op;
        op = new BoxOperand(eOperandType::Double, std::to_string(v);
        return std::unique_ptr<BoxOperand>(op);
    }

    static std::unique_ptr<BoxOperand> createBigDecimal(const string &value)
    {
        long double v = 0;

        Converter::convertValue<long double>(eOperandType::BigDecimal, value, BigDecimalOperandType::_BigDecimal, v);
        BoxOperand *op;
        op = new BoxOperand(eOperandType::BigDecimal, std::to_string(v);
        return std::unique_ptr<BoxOperand>(op);
    }

public:
    static std::unique_ptr<BoxOperand> createOperand(eOperandType type,
                                                          const std::string &value) {
        try {

            switch (type) {
                case eOperandType::Int8:
                    return createInt8(value);
                case eOperandType::Int16:
                    return createInt16(value);
                case eOperandType::Int32:
                    return createInt32(value);
                case eOperandType::Float :
                    return createFloat(value);
                case eOperandType::Double :
                    return createDouble(value);
                case eOperandType::BigDecimal :
                    return createBigDecimal(value);
            }
        }
        catch (std::invalid_argument e) {
            throw AVMException("The value passed as number is not valid");
        }
        catch (std::out_of_range e) {
            char *msg = "The value passed is out of the range of the typed passed";
            throw AVMException(msg);
        }
    }
};

#endif //SOURCECODE_FACTORY_H