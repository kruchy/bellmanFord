cmake_minimum_required(VERSION 3.6)
project(BellmanFord)

SET(CMAKE_C_COMPILER C:\\MinGW\\bin\\gcc)
SET(CMAKE_CXX_COMPILER C:\\MinGW\\bin\\g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        Edge.cpp
        Edge.h
        Input.cpp
        Input.h
        ListInput.cpp
        ListInput.h
        main.cpp
        MatrixInput.cpp
        MatrixInput.h
        Vertex.cpp
        Vertex.h Algorithm.cpp Algorithm.h BellmanFordAlgorithm.cpp BellmanFordAlgorithm.h)

add_executable(BellmanFord ${SOURCE_FILES})