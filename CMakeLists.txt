cmake_minimum_required(VERSION 3.12)
project(SourceCode)

set(CMAKE_CXX_STANDARD 17)

add_executable(SourceCode main.cpp includer.cpp Headers/includer.h CPU/IOperand.cpp CPU/Headers/IOperand.h eOperandType.cpp CPU/Headers/Factory.h CPU/Controller.cpp CPU/Headers/Controller.h RAM/MyStack.cpp RAM/Headers/MyStack.h RAM/MyRegister.cpp RAM/Headers/MyRegister.h IO/Parser.cpp IO/Headers/Parser.h CPU/TypedOperand.cpp CPU/Headers/TypedOperand.h IO/Periferal.cpp IO/Headers/Periferal.h AVMException.cpp CPU/BoxOperand.cpp CPU/Headers/BoxOperand.h CPU/ValueConverter.cpp CPU/Converter.cpp CPU/Headers/Converter.h)