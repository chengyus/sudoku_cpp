cmake_minimum_required(VERSION 3.10)

# set the project name
project(Sudoku_cpp)

# add the executable
add_executable(Sudoku sudoku.cpp)
target_link_libraries(Sudoku "-lqqwing")

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I/usr/include/eigen3 -I/usr/include")
set(CMAKE_EXE_LINKER_FLAGS "-L/usr/lib/x86_64-linux-gnu")
