cmake_minimum_required(VERSION 3.5)
project(AtCoder)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES DISCO2017/D.cpp)

add_executable(AtCoder ${SOURCE_FILES})