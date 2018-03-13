cmake_minimum_required(VERSION 3.5)
project(039)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    A/A.cpp
    B/B.cpp
    C/C.cpp
    D/D.cpp)

add_executable(039 ${SOURCE_FILES})