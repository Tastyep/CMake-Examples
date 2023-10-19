cmake_minimum_required (VERSION 3.11)
project(Main CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(main)

find_package(Libd REQUIRED)
message(STATUS ${Libd_LIBRARIES})

target_compile_features(main PRIVATE cxx_std_20)
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.h")
target_sources(main PRIVATE ${SOURCES} ${HEADERS})
target_include_directories(main PRIVATE ${LIB_DIR} ${Libd_INCLUDE_DIRS})
target_link_libraries(main libA libB ${Libd_LIBRARIES})
