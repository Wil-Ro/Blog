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
include Src/Libs/CMakeFiles/md4c-html.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Src/Libs/CMakeFiles/md4c-html.dir/compiler_depend.make

# Include the progress variables for this target.
include Src/Libs/CMakeFiles/md4c-html.dir/progress.make

# Include the compile flags for this target's objects.
include Src/Libs/CMakeFiles/md4c-html.dir/flags.make

Src/Libs/CMakeFiles/md4c-html.dir/md4c-html.c.o: Src/Libs/CMakeFiles/md4c-html.dir/flags.make
Src/Libs/CMakeFiles/md4c-html.dir/md4c-html.c.o: Src/Libs/md4c-html.c
Src/Libs/CMakeFiles/md4c-html.dir/md4c-html.c.o: Src/Libs/CMakeFiles/md4c-html.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rosia/Programming/Cpp/BlogParser/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Src/Libs/CMakeFiles/md4c-html.dir/md4c-html.c.o"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Src/Libs/CMakeFiles/md4c-html.dir/md4c-html.c.o -MF CMakeFiles/md4c-html.dir/md4c-html.c.o.d -o CMakeFiles/md4c-html.dir/md4c-html.c.o -c /home/rosia/Programming/Cpp/BlogParser/Src/Libs/md4c-html.c

Src/Libs/CMakeFiles/md4c-html.dir/md4c-html.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/md4c-html.dir/md4c-html.c.i"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rosia/Programming/Cpp/BlogParser/Src/Libs/md4c-html.c > CMakeFiles/md4c-html.dir/md4c-html.c.i

Src/Libs/CMakeFiles/md4c-html.dir/md4c-html.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/md4c-html.dir/md4c-html.c.s"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rosia/Programming/Cpp/BlogParser/Src/Libs/md4c-html.c -o CMakeFiles/md4c-html.dir/md4c-html.c.s

Src/Libs/CMakeFiles/md4c-html.dir/entity.c.o: Src/Libs/CMakeFiles/md4c-html.dir/flags.make
Src/Libs/CMakeFiles/md4c-html.dir/entity.c.o: Src/Libs/entity.c
Src/Libs/CMakeFiles/md4c-html.dir/entity.c.o: Src/Libs/CMakeFiles/md4c-html.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rosia/Programming/Cpp/BlogParser/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object Src/Libs/CMakeFiles/md4c-html.dir/entity.c.o"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Src/Libs/CMakeFiles/md4c-html.dir/entity.c.o -MF CMakeFiles/md4c-html.dir/entity.c.o.d -o CMakeFiles/md4c-html.dir/entity.c.o -c /home/rosia/Programming/Cpp/BlogParser/Src/Libs/entity.c

Src/Libs/CMakeFiles/md4c-html.dir/entity.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/md4c-html.dir/entity.c.i"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rosia/Programming/Cpp/BlogParser/Src/Libs/entity.c > CMakeFiles/md4c-html.dir/entity.c.i

Src/Libs/CMakeFiles/md4c-html.dir/entity.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/md4c-html.dir/entity.c.s"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rosia/Programming/Cpp/BlogParser/Src/Libs/entity.c -o CMakeFiles/md4c-html.dir/entity.c.s

Src/Libs/CMakeFiles/md4c-html.dir/md4c.c.o: Src/Libs/CMakeFiles/md4c-html.dir/flags.make
Src/Libs/CMakeFiles/md4c-html.dir/md4c.c.o: Src/Libs/md4c.c
Src/Libs/CMakeFiles/md4c-html.dir/md4c.c.o: Src/Libs/CMakeFiles/md4c-html.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rosia/Programming/Cpp/BlogParser/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object Src/Libs/CMakeFiles/md4c-html.dir/md4c.c.o"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Src/Libs/CMakeFiles/md4c-html.dir/md4c.c.o -MF CMakeFiles/md4c-html.dir/md4c.c.o.d -o CMakeFiles/md4c-html.dir/md4c.c.o -c /home/rosia/Programming/Cpp/BlogParser/Src/Libs/md4c.c

Src/Libs/CMakeFiles/md4c-html.dir/md4c.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/md4c-html.dir/md4c.c.i"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rosia/Programming/Cpp/BlogParser/Src/Libs/md4c.c > CMakeFiles/md4c-html.dir/md4c.c.i

Src/Libs/CMakeFiles/md4c-html.dir/md4c.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/md4c-html.dir/md4c.c.s"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rosia/Programming/Cpp/BlogParser/Src/Libs/md4c.c -o CMakeFiles/md4c-html.dir/md4c.c.s

# Object files for target md4c-html
md4c__html_OBJECTS = \
"CMakeFiles/md4c-html.dir/md4c-html.c.o" \
"CMakeFiles/md4c-html.dir/entity.c.o" \
"CMakeFiles/md4c-html.dir/md4c.c.o"

# External object files for target md4c-html
md4c__html_EXTERNAL_OBJECTS =

Src/Libs/libmd4c-html.a: Src/Libs/CMakeFiles/md4c-html.dir/md4c-html.c.o
Src/Libs/libmd4c-html.a: Src/Libs/CMakeFiles/md4c-html.dir/entity.c.o
Src/Libs/libmd4c-html.a: Src/Libs/CMakeFiles/md4c-html.dir/md4c.c.o
Src/Libs/libmd4c-html.a: Src/Libs/CMakeFiles/md4c-html.dir/build.make
Src/Libs/libmd4c-html.a: Src/Libs/CMakeFiles/md4c-html.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rosia/Programming/Cpp/BlogParser/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library libmd4c-html.a"
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && $(CMAKE_COMMAND) -P CMakeFiles/md4c-html.dir/cmake_clean_target.cmake
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/md4c-html.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Src/Libs/CMakeFiles/md4c-html.dir/build: Src/Libs/libmd4c-html.a
.PHONY : Src/Libs/CMakeFiles/md4c-html.dir/build

Src/Libs/CMakeFiles/md4c-html.dir/clean:
	cd /home/rosia/Programming/Cpp/BlogParser/Src/Libs && $(CMAKE_COMMAND) -P CMakeFiles/md4c-html.dir/cmake_clean.cmake
.PHONY : Src/Libs/CMakeFiles/md4c-html.dir/clean

Src/Libs/CMakeFiles/md4c-html.dir/depend:
	cd /home/rosia/Programming/Cpp/BlogParser && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rosia/Programming/Cpp/BlogParser /home/rosia/Programming/Cpp/BlogParser/Src/Libs /home/rosia/Programming/Cpp/BlogParser /home/rosia/Programming/Cpp/BlogParser/Src/Libs /home/rosia/Programming/Cpp/BlogParser/Src/Libs/CMakeFiles/md4c-html.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Src/Libs/CMakeFiles/md4c-html.dir/depend

