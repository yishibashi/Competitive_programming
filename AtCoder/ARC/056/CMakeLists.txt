cmake_minimum_required(VERSION 3.5)
project(056)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES B/B.cpp)
add_executable(056 ${SOURCE_FILES})