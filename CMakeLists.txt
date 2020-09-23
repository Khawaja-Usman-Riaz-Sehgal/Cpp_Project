cmake_minimum_required(VERSION 3.10)
project(Project_Cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(include)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)



