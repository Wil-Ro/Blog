cmake_minimum_required(VERSION 3.20)
set(CMAKE_BUILD_TYPE Debug) # Debug or Release
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1) # export our compiler flags for clangd to read

project(BlogParser)

configure_file(MacroDefinitions.h.in MacroDefinitions.h)

add_subdirectory(Src)
#add_subdirectory(Tests)


