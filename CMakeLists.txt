cmake_minimum_required(VERSION 3.16)
project(ActionsAndCI)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(external/googletest) # Google test lib's dir.
include_directories(${gtest_SOURCE_DIR}/include) # Add google test's include dir to own includes.

set(Tests_src tests/dummyTest.cpp) # Add dummy google test.

add_executable(ActionsAndCI src/main.cpp)
add_executable(Tests ${Tests_src})

target_link_libraries(Tests gtest_main)
