# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rosia/Programming/Cpp/BlogParser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rosia/Programming/Cpp/BlogParser

# Include any dependencies generated for this target.
include Src/CMakeFiles/Program.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Src/CMakeFiles/Program.dir/compiler_depend.make

# Include the progress variables for this target.
include Src/CMakeFiles/Program.dir/progress.make

# Include the compile flags for this target's objects.
include Src/CMakeFiles/Program.dir/flags.make

Src/CMakeFiles/Program.dir/Program.cpp.o: Src/CMakeFiles/Program.dir/flags.make
Src/CMakeFiles/Program.dir/Program.cpp.o: Src/Program.cpp
Src/CMakeFiles/Program.dir/Program.cpp.o: Src/CMakeFiles/Program.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rosia/Programming/Cpp/BlogParser/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Src/CMakeFiles/Program.dir/Program.cpp.o"
	cd /home/rosia/Programming/Cpp/BlogParser/Src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Src/CMakeFiles/Program.dir/Program.cpp.o -MF CMakeFiles/Program.dir/Program.cpp.o.d -o CMakeFiles/Program.dir/Program.cpp.o -c /home/rosia/Programming/Cpp/BlogParser/Src/Program.cpp

Src/CMakeFiles/Program.dir/Program.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program.dir/Program.cpp.i"
	cd /home/rosia/Programming/Cpp/BlogParser/Src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rosia/Programming/Cpp/BlogParser/Src/Program.cpp > CMakeFiles/Program.dir/Program.cpp.i

Src/CMakeFiles/Program.dir/Program.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program.dir/Program.cpp.s"
	cd /home/rosia/Programming/Cpp/BlogParser/Src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rosia/Programming/Cpp/BlogParser/Src/Program.cpp -o CMakeFiles/Program.dir/Program.cpp.s

# Object files for target Program
Program_OBJECTS = \
"CMakeFiles/Program.dir/Program.cpp.o"

# External object files for target Program
Program_EXTERNAL_OBJECTS =

Src/libProgram.a: Src/CMakeFiles/Program.dir/Program.cpp.o
Src/libProgram.a: Src/CMakeFiles/Program.dir/build.make
Src/libProgram.a: Src/CMakeFiles/Program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rosia/Programming/Cpp/BlogParser/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libProgram.a"
	cd /home/rosia/Programming/Cpp/BlogParser/Src && $(CMAKE_COMMAND) -P CMakeFiles/Program.dir/cmake_clean_target.cmake
	cd /home/rosia/Programming/Cpp/BlogParser/Src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Src/CMakeFiles/Program.dir/build: Src/libProgram.a
.PHONY : Src/CMakeFiles/Program.dir/build

Src/CMakeFiles/Program.dir/clean:
	cd /home/rosia/Programming/Cpp/BlogParser/Src && $(CMAKE_COMMAND) -P CMakeFiles/Program.dir/cmake_clean.cmake
.PHONY : Src/CMakeFiles/Program.dir/clean

Src/CMakeFiles/Program.dir/depend:
	cd /home/rosia/Programming/Cpp/BlogParser && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rosia/Programming/Cpp/BlogParser /home/rosia/Programming/Cpp/BlogParser/Src /home/rosia/Programming/Cpp/BlogParser /home/rosia/Programming/Cpp/BlogParser/Src /home/rosia/Programming/Cpp/BlogParser/Src/CMakeFiles/Program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Src/CMakeFiles/Program.dir/depend

