# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/rosia/Programming/Cpp/BlogParser/CMakeFiles /home/rosia/Programming/Cpp/BlogParser//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/rosia/Programming/Cpp/BlogParser/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named blog

# Build rule for target.
blog: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 blog
.PHONY : blog

# fast build rule for target.
blog/fast:
	$(MAKE) $(MAKESILENT) -f Src/CMakeFiles/blog.dir/build.make Src/CMakeFiles/blog.dir/build
.PHONY : blog/fast

#=============================================================================
# Target rules for targets named BlogParser

# Build rule for target.
BlogParser: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 BlogParser
.PHONY : BlogParser

# fast build rule for target.
BlogParser/fast:
	$(MAKE) $(MAKESILENT) -f Src/CMakeFiles/BlogParser.dir/build.make Src/CMakeFiles/BlogParser.dir/build
.PHONY : BlogParser/fast

#=============================================================================
# Target rules for targets named BlogPageBuilder

# Build rule for target.
BlogPageBuilder: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 BlogPageBuilder
.PHONY : BlogPageBuilder

# fast build rule for target.
BlogPageBuilder/fast:
	$(MAKE) $(MAKESILENT) -f Src/CMakeFiles/BlogPageBuilder.dir/build.make Src/CMakeFiles/BlogPageBuilder.dir/build
.PHONY : BlogPageBuilder/fast

#=============================================================================
# Target rules for targets named AtomBuilder

# Build rule for target.
AtomBuilder: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 AtomBuilder
.PHONY : AtomBuilder

# fast build rule for target.
AtomBuilder/fast:
	$(MAKE) $(MAKESILENT) -f Src/CMakeFiles/AtomBuilder.dir/build.make Src/CMakeFiles/AtomBuilder.dir/build
.PHONY : AtomBuilder/fast

#=============================================================================
# Target rules for targets named Program

# Build rule for target.
Program: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Program
.PHONY : Program

# fast build rule for target.
Program/fast:
	$(MAKE) $(MAKESILENT) -f Src/CMakeFiles/Program.dir/build.make Src/CMakeFiles/Program.dir/build
.PHONY : Program/fast

#=============================================================================
# Target rules for targets named md4c

# Build rule for target.
md4c: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 md4c
.PHONY : md4c

# fast build rule for target.
md4c/fast:
	$(MAKE) $(MAKESILENT) -f Src/Libs/CMakeFiles/md4c.dir/build.make Src/Libs/CMakeFiles/md4c.dir/build
.PHONY : md4c/fast

#=============================================================================
# Target rules for targets named md4c-html

# Build rule for target.
md4c-html: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 md4c-html
.PHONY : md4c-html

# fast build rule for target.
md4c-html/fast:
	$(MAKE) $(MAKESILENT) -f Src/Libs/CMakeFiles/md4c-html.dir/build.make Src/Libs/CMakeFiles/md4c-html.dir/build
.PHONY : md4c-html/fast

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... AtomBuilder"
	@echo "... BlogPageBuilder"
	@echo "... BlogParser"
	@echo "... Program"
	@echo "... blog"
	@echo "... md4c"
	@echo "... md4c-html"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
