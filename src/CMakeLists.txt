cmake_minimum_required(VERSION 3.16.3)
project(Project_Cpp)

file(GLOB SOURCES_src ${CMAKE_SOURCE_DIR}/*.cpp)
add_library(out1 SHARED ${SOURCES_src})
#add_library(out1 SHARED Containers.cpp)
#set_target_properties(out1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY .)



