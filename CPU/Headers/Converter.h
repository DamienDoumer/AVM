//
// Created by damien on 23/10/18.
//

#ifndef SOURCECODE_CONVERTER_H
#define SOURCECODE_CONVERTER_H

#include "../../AVMWarnException.cpp"
#include "../../AVMException.cpp"
#include "../../eOperandType.cpp"

/// Performs seamless convertions between every required type passed
class Converter
{

public:

    /// Single structure for T type return
    template<typename T1>
    struct single
    {
        typedef T1 result_type;
        T1 value;

        single(const T1& value)
                : value(value) {}
    };
    /// Convert any numeric value from string
    /// \tparam T1 The type of the value required for conversion
    /// \param type The operand's type
    /// \param value The numeric value in its string form
    /// \return The Value converted
    template<typename T1>
    static single<T1> conv(eOperandType type, const T1& value)
    {
        if(type == eOperandType::Int32 || type == eOperandType::Int8
           || type == eOperandType::Int16)
        {
            return single<T1>(std::to_string(std::stoi(value)));
        }
        else if(type == eOperandType::Float)
        {
            return single<T1>(std::to_string(std::stof(value)));
        }
        else if (type == eOperandType::Double)
        {
            return single<T1>(std::to_string(std::stod(value)));
        }
        else if (type == eOperandType::BigDecimal)
        {
            return single<T1>(std::to_string(std::stold(value)));
        }
    }

    /// Convert value with referenced parameter.
    /// \tparam T The type of the refernce parameter container
    /// \param type The type of the operand
    /// \param value The string version of the numeric value to be converted.
    /// \param typeDeterminer The determiner enum overiding
    /// \param container The refernce parameter container
    template <typename T>
    static void convertValue(eOperandType type, const std::string &value, IntOperandType typeDeterminer, T &container)
    {
        int val = 0;

        try
        {
            val = std::stoi(value);
            switch(type)
            {
                case eOperandType::Int8:
                    if(val < -128 || val > 127)
                        throw AVMWarnException("Overflow for type Int8");
                case eOperandType::Int16:
                    if(val < -32768 || val > 32,767)
                        throw AVMWarnException("Overflow for type Int16");
                case eOperandType::Int32:
                    if(val < -2147483648 || val > 2147483647)
                        throw AVMWarnException("Overflow for type Int32");
            }

            container = std::stoi(value);
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

    /// Convert value with referenced parameter.
    /// \tparam T The type of the refernce parameter container
    /// \param type The type of the operand
    /// \param value The string version of the numeric value to be converted.
    /// \param typeDeterminer The determiner enum overiding
    /// \param container The refernce parameter container
    template <typename T>
    static void convertValue(eOperandType type, const std::string &value, FloatOperandType typeDeterminer, T &container)
    {
        try
        {
            container = std::stof(value);
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

    /// Convert value with referenced parameter.
    /// \tparam T The type of the refernce parameter container
    /// \param type The type of the operand
    /// \param value The string version of the numeric value to be converted.
    /// \param typeDeterminer The determiner enum overiding
    /// \param container The refernce parameter container
    template <typename T>
    static void convertValue(eOperandType type, const std::string &value, DoubleOperandType typeDeterminer,  T &container)
    {
        try
        {
            container = std::stof(value);
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

    /// Convert value with referenced parameter.
    /// \tparam T The type of the refernce parameter container
    /// \param type The type of the operand
    /// \param value The string version of the numeric value to be converted.
    /// \param typeDeterminer The determiner enum overiding
    /// \param container The refernce parameter container
    template <typename T>
    static void convertValue(eOperandType type, const std::string &value, BigDecimalOperandType typeDeterminer,  T &container)
    {
        try
        {
            auto v = std::stold(value);
            container =  v;
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
};


#endif //SOURCECODE_CONVERTER_H
