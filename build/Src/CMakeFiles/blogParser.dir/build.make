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
CMAKE_BINARY_DIR = /home/rosia/Programming/Cpp/BlogParser/build

# Include any dependencies generated for this target.
include Src/CMakeFiles/blogParser.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Src/CMakeFiles/blogParser.dir/compiler_depend.make

# Include the progress variables for this target.
include Src/CMakeFiles/blogParser.dir/progress.make

# Include the compile flags for this target's objects.
include Src/CMakeFiles/blogParser.dir/flags.make

Src/CMakeFiles/blogParser.dir/blog.cpp.o: Src/CMakeFiles/blogParser.dir/flags.make
Src/CMakeFiles/blogParser.dir/blog.cpp.o: ../Src/blog.cpp
Src/CMakeFiles/blogParser.dir/blog.cpp.o: Src/CMakeFiles/blogParser.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rosia/Programming/Cpp/BlogParser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Src/CMakeFiles/blogParser.dir/blog.cpp.o"
	cd /home/rosia/Programming/Cpp/BlogParser/build/Src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Src/CMakeFiles/blogParser.dir/blog.cpp.o -MF CMakeFiles/blogParser.dir/blog.cpp.o.d -o CMakeFiles/blogParser.dir/blog.cpp.o -c /home/rosia/Programming/Cpp/BlogParser/Src/blog.cpp

Src/CMakeFiles/blogParser.dir/blog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/blogParser.dir/blog.cpp.i"
	cd /home/rosia/Programming/Cpp/BlogParser/build/Src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rosia/Programming/Cpp/BlogParser/Src/blog.cpp > CMakeFiles/blogParser.dir/blog.cpp.i

Src/CMakeFiles/blogParser.dir/blog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/blogParser.dir/blog.cpp.s"
	cd /home/rosia/Programming/Cpp/BlogParser/build/Src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rosia/Programming/Cpp/BlogParser/Src/blog.cpp -o CMakeFiles/blogParser.dir/blog.cpp.s

# Object files for target blogParser
blogParser_OBJECTS = \
"CMakeFiles/blogParser.dir/blog.cpp.o"

# External object files for target blogParser
blogParser_EXTERNAL_OBJECTS =

Src/blogParser: Src/CMakeFiles/blogParser.dir/blog.cpp.o
Src/blogParser: Src/CMakeFiles/blogParser.dir/build.make
Src/blogParser: Src/Libs/libmd4c.a
Src/blogParser: Src/Libs/libmd4c-html.a
Src/blogParser: Src/CMakeFiles/blogParser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rosia/Programming/Cpp/BlogParser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable blogParser"
	cd /home/rosia/Programming/Cpp/BlogParser/build/Src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/blogParser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Src/CMakeFiles/blogParser.dir/build: Src/blogParser
.PHONY : Src/CMakeFiles/blogParser.dir/build

Src/CMakeFiles/blogParser.dir/clean:
	cd /home/rosia/Programming/Cpp/BlogParser/build/Src && $(CMAKE_COMMAND) -P CMakeFiles/blogParser.dir/cmake_clean.cmake
.PHONY : Src/CMakeFiles/blogParser.dir/clean

Src/CMakeFiles/blogParser.dir/depend:
	cd /home/rosia/Programming/Cpp/BlogParser/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rosia/Programming/Cpp/BlogParser /home/rosia/Programming/Cpp/BlogParser/Src /home/rosia/Programming/Cpp/BlogParser/build /home/rosia/Programming/Cpp/BlogParser/build/Src /home/rosia/Programming/Cpp/BlogParser/build/Src/CMakeFiles/blogParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Src/CMakeFiles/blogParser.dir/depend

