//
// Created by dtohi on 10/20/2018.
//

#include "Headers/TypedOperand.h"
#include "../Headers/includer.h"

template<typename T>
std::unique_ptr<IOperand> TypedOperand<T>::operator%(const IOperand &rhs)
{

}

template<typename T>
std::unique_ptr<IOperand> TypedOperand<T>::operator/(const IOperand &rhs) {
    return std::unique_ptr<IOperand>();
}

template<typename T>
std::unique_ptr<IOperand> TypedOperand<T>::operator-(const IOperand &rhs) {
    return std::unique_ptr<IOperand>();
}

template<typename T>
std::unique_ptr<IOperand> TypedOperand<T>::operator*(const IOperand &rhs) {
    return std::unique_ptr<IOperand>();
}

template<typename T>
std::unique_ptr<IOperand> TypedOperand<T>::operator+(const IOperand &rhs) {
    return std::unique_ptr<IOperand>();
}

template<typename T>
eOperandType TypedOperand<T>::getType() {
    return Int32;
}

template<typename T>
string TypedOperand<T>::toString() {
    return std::__cxx11::string();
}
