# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2018.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SourceCode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SourceCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SourceCode.dir/flags.make

CMakeFiles/SourceCode.dir/main.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SourceCode.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/main.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/main.cpp

CMakeFiles/SourceCode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/main.cpp > CMakeFiles/SourceCode.dir/main.cpp.i

CMakeFiles/SourceCode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/main.cpp -o CMakeFiles/SourceCode.dir/main.cpp.s

CMakeFiles/SourceCode.dir/includer.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/includer.cpp.o: ../includer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SourceCode.dir/includer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/includer.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/includer.cpp

CMakeFiles/SourceCode.dir/includer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/includer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/includer.cpp > CMakeFiles/SourceCode.dir/includer.cpp.i

CMakeFiles/SourceCode.dir/includer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/includer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/includer.cpp -o CMakeFiles/SourceCode.dir/includer.cpp.s

CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.o: ../CPU/IOperand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/IOperand.cpp

CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/IOperand.cpp > CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.i

CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/IOperand.cpp -o CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.s

CMakeFiles/SourceCode.dir/eOperandType.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/eOperandType.cpp.o: ../eOperandType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SourceCode.dir/eOperandType.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/eOperandType.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/eOperandType.cpp

CMakeFiles/SourceCode.dir/eOperandType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/eOperandType.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/eOperandType.cpp > CMakeFiles/SourceCode.dir/eOperandType.cpp.i

CMakeFiles/SourceCode.dir/eOperandType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/eOperandType.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/eOperandType.cpp -o CMakeFiles/SourceCode.dir/eOperandType.cpp.s

CMakeFiles/SourceCode.dir/CPU/Controller.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/CPU/Controller.cpp.o: ../CPU/Controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SourceCode.dir/CPU/Controller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/CPU/Controller.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/Controller.cpp

CMakeFiles/SourceCode.dir/CPU/Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/Controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/Controller.cpp > CMakeFiles/SourceCode.dir/CPU/Controller.cpp.i

CMakeFiles/SourceCode.dir/CPU/Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/Controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/Controller.cpp -o CMakeFiles/SourceCode.dir/CPU/Controller.cpp.s

CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.o: ../RAM/MyStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/RAM/MyStack.cpp

CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/RAM/MyStack.cpp > CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.i

CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/RAM/MyStack.cpp -o CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.s

CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.o: ../RAM/MyRegister.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/RAM/MyRegister.cpp

CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/RAM/MyRegister.cpp > CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.i

CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/RAM/MyRegister.cpp -o CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.s

CMakeFiles/SourceCode.dir/IO/Parser.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/IO/Parser.cpp.o: ../IO/Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SourceCode.dir/IO/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/IO/Parser.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/IO/Parser.cpp

CMakeFiles/SourceCode.dir/IO/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/IO/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/IO/Parser.cpp > CMakeFiles/SourceCode.dir/IO/Parser.cpp.i

CMakeFiles/SourceCode.dir/IO/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/IO/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/IO/Parser.cpp -o CMakeFiles/SourceCode.dir/IO/Parser.cpp.s

CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.o: ../CPU/TypedOperand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/TypedOperand.cpp

CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/TypedOperand.cpp > CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.i

CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/TypedOperand.cpp -o CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.s

CMakeFiles/SourceCode.dir/IO/Periferal.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/IO/Periferal.cpp.o: ../IO/Periferal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/SourceCode.dir/IO/Periferal.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/IO/Periferal.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/IO/Periferal.cpp

CMakeFiles/SourceCode.dir/IO/Periferal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/IO/Periferal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/IO/Periferal.cpp > CMakeFiles/SourceCode.dir/IO/Periferal.cpp.i

CMakeFiles/SourceCode.dir/IO/Periferal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/IO/Periferal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/IO/Periferal.cpp -o CMakeFiles/SourceCode.dir/IO/Periferal.cpp.s

CMakeFiles/SourceCode.dir/AVMException.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/AVMException.cpp.o: ../AVMException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/SourceCode.dir/AVMException.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/AVMException.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/AVMException.cpp

CMakeFiles/SourceCode.dir/AVMException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/AVMException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/AVMException.cpp > CMakeFiles/SourceCode.dir/AVMException.cpp.i

CMakeFiles/SourceCode.dir/AVMException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/AVMException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/AVMException.cpp -o CMakeFiles/SourceCode.dir/AVMException.cpp.s

CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.o: ../CPU/BoxOperand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/BoxOperand.cpp

CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/BoxOperand.cpp > CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.i

CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/BoxOperand.cpp -o CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.s

CMakeFiles/SourceCode.dir/CPU/Converter.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/CPU/Converter.cpp.o: ../CPU/Converter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/SourceCode.dir/CPU/Converter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/CPU/Converter.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/Converter.cpp

CMakeFiles/SourceCode.dir/CPU/Converter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/CPU/Converter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/Converter.cpp > CMakeFiles/SourceCode.dir/CPU/Converter.cpp.i

CMakeFiles/SourceCode.dir/CPU/Converter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/CPU/Converter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/CPU/Converter.cpp -o CMakeFiles/SourceCode.dir/CPU/Converter.cpp.s

CMakeFiles/SourceCode.dir/AVMWarnException.cpp.o: CMakeFiles/SourceCode.dir/flags.make
CMakeFiles/SourceCode.dir/AVMWarnException.cpp.o: ../AVMWarnException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/SourceCode.dir/AVMWarnException.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SourceCode.dir/AVMWarnException.cpp.o -c /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/AVMWarnException.cpp

CMakeFiles/SourceCode.dir/AVMWarnException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SourceCode.dir/AVMWarnException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/AVMWarnException.cpp > CMakeFiles/SourceCode.dir/AVMWarnException.cpp.i

CMakeFiles/SourceCode.dir/AVMWarnException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SourceCode.dir/AVMWarnException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/AVMWarnException.cpp -o CMakeFiles/SourceCode.dir/AVMWarnException.cpp.s

# Object files for target SourceCode
SourceCode_OBJECTS = \
"CMakeFiles/SourceCode.dir/main.cpp.o" \
"CMakeFiles/SourceCode.dir/includer.cpp.o" \
"CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.o" \
"CMakeFiles/SourceCode.dir/eOperandType.cpp.o" \
"CMakeFiles/SourceCode.dir/CPU/Controller.cpp.o" \
"CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.o" \
"CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.o" \
"CMakeFiles/SourceCode.dir/IO/Parser.cpp.o" \
"CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.o" \
"CMakeFiles/SourceCode.dir/IO/Periferal.cpp.o" \
"CMakeFiles/SourceCode.dir/AVMException.cpp.o" \
"CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.o" \
"CMakeFiles/SourceCode.dir/CPU/Converter.cpp.o" \
"CMakeFiles/SourceCode.dir/AVMWarnException.cpp.o"

# External object files for target SourceCode
SourceCode_EXTERNAL_OBJECTS =

SourceCode: CMakeFiles/SourceCode.dir/main.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/includer.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/CPU/IOperand.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/eOperandType.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/CPU/Controller.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/RAM/MyStack.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/RAM/MyRegister.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/IO/Parser.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/CPU/TypedOperand.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/IO/Periferal.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/AVMException.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/CPU/BoxOperand.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/CPU/Converter.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/AVMWarnException.cpp.o
SourceCode: CMakeFiles/SourceCode.dir/build.make
SourceCode: CMakeFiles/SourceCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable SourceCode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SourceCode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SourceCode.dir/build: SourceCode

.PHONY : CMakeFiles/SourceCode.dir/build

CMakeFiles/SourceCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SourceCode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SourceCode.dir/clean

CMakeFiles/SourceCode.dir/depend:
	cd /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug /home/damien/Desktop/Epitech/Exos/AbstractVM/SourceCode/cmake-build-debug/CMakeFiles/SourceCode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SourceCode.dir/depend

