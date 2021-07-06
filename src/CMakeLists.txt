cmake_minimum_required(VERSION 3.19)
project(lib)

set(SOURCES Book.cpp Date.cpp)
set(HEADERS Book.h Date.h)

add_library(lib ${SOURCES} ${HEADERS})

target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})