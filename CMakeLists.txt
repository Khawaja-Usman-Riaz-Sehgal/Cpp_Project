cmake_minimum_required(VERSION 3.10)
project(Project_Cpp)

include_directories(include)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)
add_subdirectory(benchmarks)