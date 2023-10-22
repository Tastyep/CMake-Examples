cmake_minimum_required(VERSION 3.11)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

add_subdirectory(libA)
add_subdirectory(libC)
add_subdirectory(libB)

# add_subdirectory(libD)
