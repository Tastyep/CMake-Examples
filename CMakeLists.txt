cmake_minimum_required(VERSION 3.11)

project(CMakeExamples)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(LIB_DIR "${CMAKE_SOURCE_DIR}/libs")
add_subdirectory(libs)
add_subdirectory(apps)
