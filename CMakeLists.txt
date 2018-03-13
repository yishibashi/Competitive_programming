cmake_minimum_required(VERSION 3.5)
project(Competitive_programming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    AOJ/Introduction/ALDS1/InsertionSort.cpp
    AOJ/vol11/solved/id1129.cpp
    AOJ/vol11/solved/id1130.cpp
    AOJ/vol11/solved/id1137.cpp
    AOJ/vol11/solved/id1147.cpp
    AOJ/vol11/solved/id1153.cpp
    AOJ/vol11/solved/id1154.cpp
    AOJ/vol11/solved/id1159.cpp
    AOJ/vol20/2000.cpp
    AOJ/vol20/test.cpp
    AtCoder/ABC/001/A.cpp
    AtCoder/ABC/001/B.cpp
    AtCoder/ABC/001/C.cpp
    AtCoder/ABC/001/D.cpp
    AtCoder/ABC/002/A.cpp
    AtCoder/ABC/002/D.cpp
    AtCoder/ABC/003/A.cpp
    AtCoder/ABC/003/B.cpp
    AtCoder/ABC/003/C.cpp
    AtCoder/ABC/003/test.cpp
    AtCoder/ABC/004/A.cpp
    AtCoder/ABC/004/B.cpp
    AtCoder/ABC/004/C.cpp
    AtCoder/ABC/005/A.cpp
    AtCoder/ABC/005/B.cpp
    AtCoder/ABC/005/C.cpp
    AtCoder/ABC/006/A.cpp
    AtCoder/ABC/006/B.cpp
    AtCoder/ABC/006/C.cpp
    AtCoder/ABC/007/A.cpp
    AtCoder/ABC/007/B.cpp
    AtCoder/ABC/007/C.cpp
    AtCoder/ABC/008/A.cpp
    AtCoder/ABC/008/B.cpp
    AtCoder/ABC/008/C.cpp
    AtCoder/ABC/008/C2.cpp
    AtCoder/ABC/030/B.cpp
    AtCoder/ABC/037/A.cpp
    AtCoder/ABC/037/B.cpp
    AtCoder/ABC/037/C.cpp
    AtCoder/ABC/038/A/A.cpp
    AtCoder/ABC/038/B/B.cpp
    AtCoder/ABC/038/C/C.cpp
    AtCoder/ABC/038/D/D.cpp
    AtCoder/ARC/002/A.cpp
    AtCoder/JAG/2016/A/A.cpp
    AtCoder/JAG/2016/B/B.cpp
    yukicoder/169.cpp AOJ/vol11/id1172.cpp AOJ/vol11/solved/id1179.cpp AOJ/vol11/id2197.cpp AOJ/vol11/id1160.cpp)

add_executable(Competitive_programming ${SOURCE_FILES} AOJ/vol11/id1172.cpp)