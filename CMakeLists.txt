cmake_minimum_required(VERSION 3.21)
project(FinalProjectCppWhite CXX)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_EXE main.cpp)

add_executable(main ${SOURCE_EXE})
add_subdirectory(src)

target_link_libraries(main lib)