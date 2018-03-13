cmake_minimum_required(VERSION 3.5)
project(001)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES B.cpp)
add_executable(001 ${SOURCE_FILES})