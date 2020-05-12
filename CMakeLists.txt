cmake_minimum_required(VERSION 3.17)
project(ActionsAndCI)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(externals/googletest/googletest)
enable_testing()

add_executable(ActionsAndCI src/main.cpp)

add_executable(Test1 tests/test1.cpp)
target_include_directories(ActionsAndCI PUBLIC "externals/googletest/googletest/include")
target_link_libraries(Test1 gtest gtest_main)
add_test(NAME TestHelloWorld COMMAND Test1)
