cmake_minimum_required(VERSION 3.10)

add_library(out1 SHARED Containers.cpp)
set_target_properties(out1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY . )


