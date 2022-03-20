cmake_minimum_required(VERSION 3.20)
project(test)

set(CMAKE_CXX_STANDARD 14)

#add_executable(test main.cpp function.cpp function.h )


project(Google_tests)


add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(Google_Tests_run test1.cpp function.cpp function.h)
target_link_libraries(Google_Tests_run gtest gtest_main)
