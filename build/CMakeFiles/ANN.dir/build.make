# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\win\privateProgram\vs\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\win\privateProgram\vs\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\win\code\contest\projects\ANN_CPP_IMPL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\win\code\contest\projects\ANN_CPP_IMPL\build

# Include any dependencies generated for this target.
include CMakeFiles/ANN.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ANN.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ANN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ANN.dir/flags.make

CMakeFiles/ANN.dir/src/ANNLayer.cpp.obj: CMakeFiles/ANN.dir/flags.make
CMakeFiles/ANN.dir/src/ANNLayer.cpp.obj: ../src/ANNLayer.cpp
CMakeFiles/ANN.dir/src/ANNLayer.cpp.obj: CMakeFiles/ANN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\win\code\contest\projects\ANN_CPP_IMPL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ANN.dir/src/ANNLayer.cpp.obj"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ANN.dir/src/ANNLayer.cpp.obj -MF CMakeFiles\ANN.dir\src\ANNLayer.cpp.obj.d -o CMakeFiles\ANN.dir\src\ANNLayer.cpp.obj -c D:\win\code\contest\projects\ANN_CPP_IMPL\src\ANNLayer.cpp

CMakeFiles/ANN.dir/src/ANNLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ANN.dir/src/ANNLayer.cpp.i"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\win\code\contest\projects\ANN_CPP_IMPL\src\ANNLayer.cpp > CMakeFiles\ANN.dir\src\ANNLayer.cpp.i

CMakeFiles/ANN.dir/src/ANNLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ANN.dir/src/ANNLayer.cpp.s"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\win\code\contest\projects\ANN_CPP_IMPL\src\ANNLayer.cpp -o CMakeFiles\ANN.dir\src\ANNLayer.cpp.s

CMakeFiles/ANN.dir/src/ANNModel.cpp.obj: CMakeFiles/ANN.dir/flags.make
CMakeFiles/ANN.dir/src/ANNModel.cpp.obj: ../src/ANNModel.cpp
CMakeFiles/ANN.dir/src/ANNModel.cpp.obj: CMakeFiles/ANN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\win\code\contest\projects\ANN_CPP_IMPL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ANN.dir/src/ANNModel.cpp.obj"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ANN.dir/src/ANNModel.cpp.obj -MF CMakeFiles\ANN.dir\src\ANNModel.cpp.obj.d -o CMakeFiles\ANN.dir\src\ANNModel.cpp.obj -c D:\win\code\contest\projects\ANN_CPP_IMPL\src\ANNModel.cpp

CMakeFiles/ANN.dir/src/ANNModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ANN.dir/src/ANNModel.cpp.i"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\win\code\contest\projects\ANN_CPP_IMPL\src\ANNModel.cpp > CMakeFiles\ANN.dir\src\ANNModel.cpp.i

CMakeFiles/ANN.dir/src/ANNModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ANN.dir/src/ANNModel.cpp.s"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\win\code\contest\projects\ANN_CPP_IMPL\src\ANNModel.cpp -o CMakeFiles\ANN.dir\src\ANNModel.cpp.s

CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.obj: CMakeFiles/ANN.dir/flags.make
CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.obj: ../src/Compiled_ANNModel.cpp
CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.obj: CMakeFiles/ANN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\win\code\contest\projects\ANN_CPP_IMPL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.obj"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.obj -MF CMakeFiles\ANN.dir\src\Compiled_ANNModel.cpp.obj.d -o CMakeFiles\ANN.dir\src\Compiled_ANNModel.cpp.obj -c D:\win\code\contest\projects\ANN_CPP_IMPL\src\Compiled_ANNModel.cpp

CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.i"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\win\code\contest\projects\ANN_CPP_IMPL\src\Compiled_ANNModel.cpp > CMakeFiles\ANN.dir\src\Compiled_ANNModel.cpp.i

CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.s"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\win\code\contest\projects\ANN_CPP_IMPL\src\Compiled_ANNModel.cpp -o CMakeFiles\ANN.dir\src\Compiled_ANNModel.cpp.s

CMakeFiles/ANN.dir/src/main.cpp.obj: CMakeFiles/ANN.dir/flags.make
CMakeFiles/ANN.dir/src/main.cpp.obj: ../src/main.cpp
CMakeFiles/ANN.dir/src/main.cpp.obj: CMakeFiles/ANN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\win\code\contest\projects\ANN_CPP_IMPL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ANN.dir/src/main.cpp.obj"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ANN.dir/src/main.cpp.obj -MF CMakeFiles\ANN.dir\src\main.cpp.obj.d -o CMakeFiles\ANN.dir\src\main.cpp.obj -c D:\win\code\contest\projects\ANN_CPP_IMPL\src\main.cpp

CMakeFiles/ANN.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ANN.dir/src/main.cpp.i"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\win\code\contest\projects\ANN_CPP_IMPL\src\main.cpp > CMakeFiles\ANN.dir\src\main.cpp.i

CMakeFiles/ANN.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ANN.dir/src/main.cpp.s"
	C:\MinGW\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\win\code\contest\projects\ANN_CPP_IMPL\src\main.cpp -o CMakeFiles\ANN.dir\src\main.cpp.s

# Object files for target ANN
ANN_OBJECTS = \
"CMakeFiles/ANN.dir/src/ANNLayer.cpp.obj" \
"CMakeFiles/ANN.dir/src/ANNModel.cpp.obj" \
"CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.obj" \
"CMakeFiles/ANN.dir/src/main.cpp.obj"

# External object files for target ANN
ANN_EXTERNAL_OBJECTS =

ANN.exe: CMakeFiles/ANN.dir/src/ANNLayer.cpp.obj
ANN.exe: CMakeFiles/ANN.dir/src/ANNModel.cpp.obj
ANN.exe: CMakeFiles/ANN.dir/src/Compiled_ANNModel.cpp.obj
ANN.exe: CMakeFiles/ANN.dir/src/main.cpp.obj
ANN.exe: CMakeFiles/ANN.dir/build.make
ANN.exe: libFUNC_LIB.a
ANN.exe: libTOOLS_LIB.a
ANN.exe: libDEBUG_LIB.a
ANN.exe: CMakeFiles/ANN.dir/linklibs.rsp
ANN.exe: CMakeFiles/ANN.dir/objects1.rsp
ANN.exe: CMakeFiles/ANN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\win\code\contest\projects\ANN_CPP_IMPL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ANN.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ANN.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ANN.dir/build: ANN.exe
.PHONY : CMakeFiles/ANN.dir/build

CMakeFiles/ANN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ANN.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ANN.dir/clean

CMakeFiles/ANN.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\win\code\contest\projects\ANN_CPP_IMPL D:\win\code\contest\projects\ANN_CPP_IMPL D:\win\code\contest\projects\ANN_CPP_IMPL\build D:\win\code\contest\projects\ANN_CPP_IMPL\build D:\win\code\contest\projects\ANN_CPP_IMPL\build\CMakeFiles\ANN.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ANN.dir/depend

