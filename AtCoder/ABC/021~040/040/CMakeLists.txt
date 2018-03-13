cmake_minimum_required(VERSION 3.5)
project(40)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    B/B.cpp
        )
add_executable(40 ${SOURCE_FILES})