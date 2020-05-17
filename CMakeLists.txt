cmake_minimum_required(VERSION 3.10)
project(ActionsAndCIProject)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Exec0 executable0.cpp) # Should compile on linux.
add_executable(Exec1 executable1.cpp) # Should NOT compile on linux.
add_executable(Exec2 executable2.cpp) # Should compile on linux.
