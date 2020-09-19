cmake_minimum_required(VERSION 3.10)

project(Cpp_Project VERSION 1.0)

include_directories(../include/*.h)

add_executable(Cpp_Project ../src/Containers.cpp main.cpp)
