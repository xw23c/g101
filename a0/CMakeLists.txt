cmake_minimum_required (VERSION 2.8.11)
project (Transformation)

#find_package(Eigen3 REQUIRED)
#include_directories(EIGEN3_INCLUDE_DIR)
set(EIGEN_INC_DIR "/opt/homebrew/Cellar/eigen/3.4.0_1/include")
include_directories(${EIGEN_INC_DIR}
                    ${UTIL_DIR}
)
message(STATUS ">>> Eigen include dir : ${EIGEN_INC_DIR}\n")
add_executable (Transformation main.cpp)
