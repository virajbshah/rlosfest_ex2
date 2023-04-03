cmake_minimum_required(VERSION 3.24.1)

project(RLOSFestExercise2)

add_subdirectory(luacpp/Source)

include_directories(/usr/include/lua5.4 ${CMAKE_SOURCE_DIR}/luacpp/Source)
link_directories(${CMAKE_BINARY_DIR}/luacpp/Source/)
link_libraries(stdc++ lua5.4 luacpp)

add_executable(rlosfest_ex2 src/main.cc)
add_dependencies(rlosfest_ex2 luacpp) 
