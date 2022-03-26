cmake_minimum_required(VERSION 3.21)
project(TestSystemForCompetitiveProgramming)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/af29db7ec28d6df1c7f0f745186884091e602e07.zip
)

add_executable(TestSystemForCompetitiveProgramming main.cpp solution_impl.cpp)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

enable_testing()

add_executable(
        test1
        solution_impl
        tests/test_1.cc
)
target_link_libraries(
        test1
        gtest_main
)
gtest_discover_tests(test1)

add_executable(
        test2
        solution_impl
        tests/test_2.cc
)
target_link_libraries(
        test2
        gtest_main
)
gtest_discover_tests(test2)


add_executable(
        test3
        solution_impl
        tests/test_3.cc
)
target_link_libraries(
        test3
        gtest_main
)
gtest_discover_tests(test3)