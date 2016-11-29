cmake_minimum_required(VERSION 3.6)
project(BellmanFord)

SET(CMAKE_C_COMPILER C:\\MinGW\\bin\\gcc)
SET(CMAKE_CXX_COMPILER C:\\MinGW\\bin\\g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        model/Edge.cpp
        model/Edge.h
        input/Input.cpp
        input/Input.h
        input/ListInput.cpp
        input/ListInput.h
        main.cpp
        input/MatrixInput.cpp
        input/MatrixInput.h
        model/Vertex.cpp
        model/Vertex.h algorithm/Algorithm.cpp algorithm/Algorithm.h algorithm/BellmanFordAlgorithm.cpp algorithm/BellmanFordAlgorithm.h algorithm/FordFulkersonAlgorithm.cpp algorithm/FordFulkersonAlgorithm.h)

add_executable(BellmanFord ${SOURCE_FILES})