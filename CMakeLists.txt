cmake_minimum_required(VERSION 3.14)
project(3sem)


add_executable(matrix matrix.cpp gauss.cpp)

include(FetchContent)

FetchContent_Declare (
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)

FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(tests test_matrix.cpp gauss.cpp)

target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)