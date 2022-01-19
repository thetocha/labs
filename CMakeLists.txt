cmake_minimum_required(VERSION 3.20)
project(lab2_getsts)

set(CMAKE_CXX_STANDARD 14)


add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(lab2_getsts main.cpp foos.cpp foos.h )
add_executable(Google_Tests_run test.cpp foos.cpp foos.h)
target_link_libraries(Google_Tests_run gtest gtest_main)