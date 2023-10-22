cmake_minimum_required(VERSION 3.11)

project(CMakeExamples)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(LIB_DIR "${CMAKE_SOURCE_DIR}/libs")
add_subdirectory(libs)
add_subdirectory(apps)
