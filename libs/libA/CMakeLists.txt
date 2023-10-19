cmake_minimum_required (VERSION 3.11)
project(LibA CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(libA SHARED)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")
target_sources(libA PUBLIC ${SOURCES} ${HEADERS} )

