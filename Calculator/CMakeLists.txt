cmake_minimum_required(VERSION 3.20)
project(Calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Calculator main.cpp stack.cpp stack.h calculator.cpp calculator.h)
