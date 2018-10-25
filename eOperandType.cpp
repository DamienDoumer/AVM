#pragma once

enum eOperandType
{
    Int8,
    Int16,
    Int32,
    Float,
    Double,
    BigDecimal
};

typedef enum IntOperandType
{
    _Int8,
    _Int16,
    _Int32,
} EInt;

typedef enum FloatOperandType
{
    _Float
} EFloat;

typedef enum DoubleOperandType
{
    _Double
} EDouble;

typedef enum BigDecimalOperandType
{
    _BigDecimal
} EBigDecimal;