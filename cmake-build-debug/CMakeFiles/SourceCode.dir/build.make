# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\SourceCode.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\SourceCode.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\SourceCode.dir\flags.make

CMakeFiles\SourceCode.dir\main.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SourceCode.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\main.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\main.cpp
<<

CMakeFiles\SourceCode.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\main.cpp
<<

CMakeFiles\SourceCode.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\main.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\main.cpp
<<

CMakeFiles\SourceCode.dir\includer.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\includer.cpp.obj: ..\includer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SourceCode.dir/includer.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\includer.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\includer.cpp
<<

CMakeFiles\SourceCode.dir\includer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/includer.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\includer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\includer.cpp
<<

CMakeFiles\SourceCode.dir\includer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/includer.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\includer.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\includer.cpp
<<

CMakeFiles\SourceCode.dir\CPU\IOperand.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\CPU\IOperand.cpp.obj: ..\CPU\IOperand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\CPU\IOperand.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\IOperand.cpp
<<

CMakeFiles\SourceCode.dir\CPU\IOperand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\CPU\IOperand.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\IOperand.cpp
<<

CMakeFiles\SourceCode.dir\CPU\IOperand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\CPU\IOperand.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\IOperand.cpp
<<

CMakeFiles\SourceCode.dir\eOperandType.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\eOperandType.cpp.obj: ..\eOperandType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SourceCode.dir/eOperandType.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\eOperandType.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\eOperandType.cpp
<<

CMakeFiles\SourceCode.dir\eOperandType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/eOperandType.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\eOperandType.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\eOperandType.cpp
<<

CMakeFiles\SourceCode.dir\eOperandType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/eOperandType.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\eOperandType.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\eOperandType.cpp
<<

CMakeFiles\SourceCode.dir\CPU\Factory.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\CPU\Factory.cpp.obj: ..\CPU\Factory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SourceCode.dir/CPU/Factory.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\CPU\Factory.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\Factory.cpp
<<

CMakeFiles\SourceCode.dir\CPU\Factory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/Factory.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\CPU\Factory.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\Factory.cpp
<<

CMakeFiles\SourceCode.dir\CPU\Factory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/Factory.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\CPU\Factory.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\Factory.cpp
<<

CMakeFiles\SourceCode.dir\CPU\Controller.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\CPU\Controller.cpp.obj: ..\CPU\Controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SourceCode.dir/CPU/Controller.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\CPU\Controller.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\Controller.cpp
<<

CMakeFiles\SourceCode.dir\CPU\Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/Controller.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\CPU\Controller.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\Controller.cpp
<<

CMakeFiles\SourceCode.dir\CPU\Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/Controller.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\CPU\Controller.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\Controller.cpp
<<

CMakeFiles\SourceCode.dir\RAM\MyStack.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\RAM\MyStack.cpp.obj: ..\RAM\MyStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\RAM\MyStack.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\RAM\MyStack.cpp
<<

CMakeFiles\SourceCode.dir\RAM\MyStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\RAM\MyStack.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\RAM\MyStack.cpp
<<

CMakeFiles\SourceCode.dir\RAM\MyStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\RAM\MyStack.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\RAM\MyStack.cpp
<<

CMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.obj: ..\RAM\MyRegister.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\RAM\MyRegister.cpp
<<

CMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\RAM\MyRegister.cpp
<<

CMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\RAM\MyRegister.cpp
<<

CMakeFiles\SourceCode.dir\IO\Parser.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\IO\Parser.cpp.obj: ..\IO\Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SourceCode.dir/IO/Parser.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\IO\Parser.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\IO\Parser.cpp
<<

CMakeFiles\SourceCode.dir\IO\Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/IO/Parser.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\IO\Parser.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\IO\Parser.cpp
<<

CMakeFiles\SourceCode.dir\IO\Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/IO/Parser.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\IO\Parser.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\IO\Parser.cpp
<<

CMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.obj: CMakeFiles\SourceCode.dir\flags.make
CMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.obj: ..\CPU\TypedOperand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.obj /FdCMakeFiles\SourceCode.dir\ /FS -c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\TypedOperand.cpp
<<

CMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\TypedOperand.cpp
<<

CMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.s /c C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\CPU\TypedOperand.cpp
<<

# Object files for target SourceCode
SourceCode_OBJECTS = \
"CMakeFiles\SourceCode.dir\main.cpp.obj" \
"CMakeFiles\SourceCode.dir\includer.cpp.obj" \
"CMakeFiles\SourceCode.dir\CPU\IOperand.cpp.obj" \
"CMakeFiles\SourceCode.dir\eOperandType.cpp.obj" \
"CMakeFiles\SourceCode.dir\CPU\Factory.cpp.obj" \
"CMakeFiles\SourceCode.dir\CPU\Controller.cpp.obj" \
"CMakeFiles\SourceCode.dir\RAM\MyStack.cpp.obj" \
"CMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.obj" \
"CMakeFiles\SourceCode.dir\IO\Parser.cpp.obj" \
"CMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.obj"

# External object files for target SourceCode
SourceCode_EXTERNAL_OBJECTS =

SourceCode.exe: CMakeFiles\SourceCode.dir\main.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\includer.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\CPU\IOperand.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\eOperandType.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\CPU\Factory.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\CPU\Controller.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\RAM\MyStack.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\RAM\MyRegister.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\IO\Parser.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\CPU\TypedOperand.cpp.obj
SourceCode.exe: CMakeFiles\SourceCode.dir\build.make
SourceCode.exe: CMakeFiles\SourceCode.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable SourceCode.exe"
	"C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\SourceCode.dir --manifests  -- C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\SourceCode.dir\objects1.rsp @<<
 /out:SourceCode.exe /implib:SourceCode.lib /pdb:C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\SourceCode.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\SourceCode.dir\build: SourceCode.exe

.PHONY : CMakeFiles\SourceCode.dir\build

CMakeFiles\SourceCode.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SourceCode.dir\cmake_clean.cmake
.PHONY : CMakeFiles\SourceCode.dir\clean

CMakeFiles\SourceCode.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug C:\Users\dtohi\Desktop\Epitech\AbstractVM\SourceCode\cmake-build-debug\CMakeFiles\SourceCode.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\SourceCode.dir\depend

