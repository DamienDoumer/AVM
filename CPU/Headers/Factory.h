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
#include "../ValueConverter.cpp"
#include "Converter.h"
#include "BoxOperand.h"

template<class T>
class Factory {

public:
    template <typename P>
    static void convertValue(eOperandType type, const std::string &value, T &v)
    {
        try {
            switch (type) {
                case eOperandType::Int8:
                case eOperandType::Int16:
                case eOperandType::Int32:
                    v = std::stoi(value);
                case eOperandType::Float :
                    v = std::stof(value);
                case eOperandType::Double :
                    v = std::stod(value);
                case eOperandType::BigDecimal :
                    v = std::stold(value);
            }
        }
        catch (std::invalid_argument e) {
            throw AVMException("The value passed as number is not valid");
        }
        catch (std::out_of_range e) {
            char *msg = "The value passed is out of the range of the typed passed";
            throw AVMException(msg);
        }
        catch (exception& e)
        {
            throw AVMException("An unexpected error occured when converting value types");
        }
    }

    static std::unique_ptr<TypedOperand<int>> createInt8(const string &value)
    {
        int v = 0;

        return createIntOperand(eOperandType::Int32, value);
    }

    static std::unique_ptr<TypedOperand<int>> createInt16(const string &value)
    {
        return createIntOperand(eOperandType::Int16, value);
    }

    static std::unique_ptr<TypedOperand<int>> createInt32(const string &value)
    {
        return createIntOperand(eOperandType::Int32, value);
    }

    static std::unique_ptr<TypedOperand<float>> createFloat(const string &value)
    {
        float numVal = std::stod(value);

        return std::unique_ptr<TypedOperand<float>>(new TypedOperand<float>(numVal, eOperandType::Float));
    }

    static std::unique_ptr<TypedOperand<double>> createDouble(const string &value)
    {
        double numVal = std::stod(value);

        return std::unique_ptr<TypedOperand<double>>(new TypedOperand<double>(numVal, eOperandType::Double));
    }

    static std::unique_ptr<TypedOperand<long double>> createBigDecimal(const string &value)
    {
        long double numVal = std::stold(value);

        return std::unique_ptr<TypedOperand<long double >>(new TypedOperand<long double>(numVal, eOperandType::BigDecimal));
    }

    static std::unique_ptr<TypedOperand<int>> createIntOperand(eOperandType type, const string &value)
    {
        int numVal = std::stoi(value);

        return std::unique_ptr<TypedOperand<int>>(new TypedOperand<int>(numVal, type));
    }

public:
    static std::unique_ptr<TypedOperand<T>> createOperand(eOperandType type,
                                                          const std::string &value) {
        try {

            switch (type) {
                case eOperandType::Int8:
                case eOperandType::Int16:
                case eOperandType::Int32:
                    return createIntOperand(type, value);
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