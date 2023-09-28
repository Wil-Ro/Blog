find_package(Catch2 3 REQUIRED)

add_executable(tests test.cpp)

target_include_directories(tests PRIVATE ../Src)


target_link_libraries(tests PRIVATE BlogParser)
target_link_libraries(tests PRIVATE BlogPageBuilder)

target_link_libraries(tests PUBLIC md4c)
target_link_libraries(tests PUBLIC md4c-html)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

target_include_directories(tests PUBLIC "${PROJECT_BINARY_DIR}")

