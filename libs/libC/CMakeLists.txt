cmake_minimum_required (VERSION 3.11)
project(LibC CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(libC SHARED)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")
target_sources(libC PUBLIC ${SOURCES} ${HEADERS} )

