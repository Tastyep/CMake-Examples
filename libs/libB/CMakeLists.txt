cmake_minimum_required(VERSION 3.11)
project(LibB CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(libB SHARED)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")
target_sources(libB PRIVATE ${SOURCES} ${HEADERS})
target_include_directories(libB PRIVATE ${LIB_DIR})
target_compile_definitions(libB PRIVATE LIBB_EXPORTS)
target_link_libraries(libB PRIVATE libC)
