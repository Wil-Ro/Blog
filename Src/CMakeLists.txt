add_executable(blog blog.cpp)

target_include_directories(blog PRIVATE Src)
add_subdirectory(Libs)

add_library(BlogParser BlogParser.cpp BlogParser.h)
target_link_libraries(BlogParser PRIVATE md4c)
target_link_libraries(BlogParser PRIVATE md4c-html)

add_library(BlogPageBuilder BlogPageBuilder.cpp BlogPageBuilder.h Page.cpp Page.h)
target_link_libraries(BlogPageBuilder PRIVATE BlogParser)

target_link_libraries(blog PUBLIC md4c)
target_link_libraries(blog PUBLIC md4c-html)
target_link_libraries(blog PRIVATE BlogParser)
target_link_libraries(blog PRIVATE BlogPageBuilder)

target_include_directories(blog PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(BlogPageBuilder PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(BlogParser PUBLIC "${PROJECT_BINARY_DIR}")
# This probably needs a severe clean up
