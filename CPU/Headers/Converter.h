//
// Created by damien on 23/10/18.
//

#ifndef SOURCECODE_CONVERTER_H
#define SOURCECODE_CONVERTER_H

#include "../../AVMWarnException.cpp"
#include "../../AVMException.cpp"
#include "../../eOperandType.cpp"

class Converter
{
    template <typename T>
    static T convertValue(eOperandType type, const std::string &value, IntOperandType typeDeterminer)
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

            return std::stoi(value);
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
    template <typename T>
    static T convertValue(eOperandType type, const std::string &value, FloatOperandType typeDeterminer)
    {
        try
        {
            return std::stof(value);
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
    template <typename T>
    static T convertValue(eOperandType type, const std::string &value, DoubleOperandType typeDeterminer)
    {
        try
        {
            return std::stof(value);
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
    template <typename T>
    static T convertValue(eOperandType type, const std::string &value, BigDecimalOperandType typeDeterminer)
    {
        try
        {
            return  std::stold(value);
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
