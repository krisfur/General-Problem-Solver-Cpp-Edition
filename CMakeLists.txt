cmake_minimum_required(VERSION 3.6)
project(General_Problem_Solver_Cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp GPS.h GPS.cpp)
add_executable(General_Problem_Solver_Cpp ${SOURCE_FILES})