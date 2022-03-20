cmake_minimum_required(VERSION 3.20)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

#add_executable(lab6 main.cpp ProperFraction.cpp ProperFraction.h test1.cpp)



project(Google_tests)


add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(Google_Tests_run test1.cpp ProperFraction.cpp ProperFraction.h test1.cpp )
target_link_libraries(Google_Tests_run gtest gtest_main)



