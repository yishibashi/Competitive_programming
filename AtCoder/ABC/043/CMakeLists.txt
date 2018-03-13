cmake_minimum_required(VERSION 3.5)
project(043)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES D.cpp)
add_executable(043 ${SOURCE_FILES})