cmake_minimum_required (VERSION 2.8.11)
project (Transformation)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#find_package(Eigen3 REQUIRED)

set(EIGEN3_INCLUDE_DIR "/usr/local/include/")
include_directories(${EIGEN3_INCLUDE_DIR})

message(STATUS ">>> Eigen include dir : ${EIGEN3_INCLUDE_DIR}\n")

add_executable (Transformation main.cpp)
