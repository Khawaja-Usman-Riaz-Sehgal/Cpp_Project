
file(GLOB APPS ${CMAKE_SOURCE_DIR}/app/*.cpp)

add_executable(out ${APPS})
target_link_libraries(out out1)
