cmake_minimum_required(VERSION 3.10)
project(MyProject)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (MSVC)
add_compile_options(
        $<$<CONFIG:>:/MT> #---------|
        $<$<CONFIG:Debug>:/MTd> #---|-- Statically link the runtime libraries
        $<$<CONFIG:RelWithDebInfo>:/MTd>
        $<$<CONFIG:Release>:/MT> #--|
)
endif()

add_subdirectory(externals/googletest/googletest)
enable_testing()

add_executable(ActionsAndCI src/main.cpp)

add_executable(Test1 tests/test1.cpp)
target_include_directories(ActionsAndCI PUBLIC "externals/googletest/googletest/include")
target_include_directories(Test1 PUBLIC "externals/googletest/googletest/include")
add_test(TARGET Test1 COMMAND Test1)
target_link_libraries(Test1 gtest gtest_main)
