# FindLibd.cmake
#
# Locates the libd library and header in the given path.
# Once done, it sets the following variables:
#
#   Libd_FOUND          - True if `libd` is found.
#   Libd_INCLUDE_DIRS   - Path to where libd.h is located.
#   Libd_LIBRARIES      - Path to the libd library.

# Path hints
set(LIBD_PATH_HINT ${CMAKE_SOURCE_DIR}/deps/libD)

# Check for the header file
find_path(Libd_INCLUDE_DIR
  NAMES libD/libd.h
  PATHS ${LIBD_PATH_HINT}/include
  NO_DEFAULT_PATH # Do not search in default locations
)

# Check for the library file
find_library(Libd_LIBRARY
  NAMES libd.so
  PATHS ${LIBD_PATH_HINT}/lib
  NO_DEFAULT_PATH # Do not search in default locations
)

# Handle results
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Libd
  REQUIRED_VARS Libd_LIBRARY Libd_INCLUDE_DIR
)

# Set standard variables if found
if(Libd_FOUND)
  set(Libd_INCLUDE_DIRS ${Libd_INCLUDE_DIR})
  set(Libd_LIBRARIES ${Libd_LIBRARY})
endif()
