cmake_minimum_required(VERSION 3.11)
project(LibD CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(D SHARED)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")
target_sources(D PUBLIC ${SOURCES} ${HEADERS})
target_compile_definitions(D PRIVATE LIBD_EXPORTS)