cmake_minimum_required(VERSION 3.16)
project(test_distance)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_distance main.cpp distance_calculation.cpp distance_calculation.h)