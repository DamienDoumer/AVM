//
// Created by damien on 23/10/18.
//

#ifndef SOURCECODE_CONVERTER_H
#define SOURCECODE_CONVERTER_H

#include "../../AVMException.cpp"
#include "../../eOperandType.cpp"

class Converter
{
public:
    template <typename T>
    static T convertValue(eOperandType type,
                             const std::string &value, T &v)
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
                    return std::stod(value);
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
};


#endif //SOURCECODE_CONVERTER_H
