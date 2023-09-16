add_executable(blogParser blog.cpp BlogParser.h BlogParser.cpp)
target_include_directories(blogParser PRIVATE Src)

add_subdirectory(Libs)

target_link_libraries(blogParser PUBLIC md4c)
target_link_libraries(blogParser PUBLIC md4c-html)

