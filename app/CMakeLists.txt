cmake_minimum_required(VERSION 3.16.3)
project(Project_Cpp)

file(GLOB Sources_src ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB Sources_app ${CMAKE_SOURCE_DIR}/app/*.cpp)
add_executable(out ${Sources_src} ${Sources_app} )
#add_executable(out ../src/Containers.cpp main.cpp)

