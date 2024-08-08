add_executable(blog blog.cpp)

add_library(BlogParser BlogParser.cpp BlogParser.h)
target_link_libraries(BlogParser PRIVATE md4c)
target_link_libraries(BlogParser PRIVATE md4c-html)

add_library(BlogPageBuilder BlogPageBuilder.cpp BlogPageBuilder.h Page.cpp Page.h)
target_link_libraries(BlogPageBuilder PRIVATE BlogParser)

add_library(AtomBuilder AtomBuilder.cpp AtomBuilder.h)

add_library(Program Program.cpp Program.h)
target_link_libraries(Program PRIVATE BlogParser)
target_link_libraries(Program PRIVATE BlogPageBuilder)
target_link_libraries(Program PRIVATE AtomBuilder)


target_include_directories(blog PRIVATE Src)
add_subdirectory(Libs)
target_link_libraries(blog PRIVATE Program)


target_include_directories(blog PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(BlogPageBuilder PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(BlogParser PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(AtomBuilder PUBLIC "${PROJECT_BINARY_DIR}")
# This probably needs a severe clean up
