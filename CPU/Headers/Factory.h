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

template<class T>
class Factory {

    /*
     * Get the value of the operand to be created
     * This value will be of type T
     */
    static T getOperandValue(string &value) {

    }

public:
    static std::unique_ptr<TypedOperand<T>> createOperand(eOperandType type,
                                                          const std::string &value) {
        try {

            switch (type) {
                case eOperandType::Int8:
                case eOperandType::Int16:
                case eOperandType::Int32:
                    int numVal = std::stoi(value);

                    return std::unique_ptr<TypedOperand<int>>(new TypedOperand<int>(numVal, type));
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