# - Find Chicken module

# Do not show error messages if the package was not found: there might be no
# CMake aware Chicken installed or we are cross-compiling, try to quetly guess
# the paths instead, this can also pull config file from install prefix, but it
# should not cause any harm.
find_package(Chicken QUIET CONFIG)

find_program(CHICKEN_COMPILER chicken
    CMAKE_FIND_ROOT_PATH_BOTH)

find_program(CHICKEN_INTERPRETER csi
    CMAKE_FIND_ROOT_PATH_BOTH)

find_path(CHICKEN_INCLUDE_DIR chicken.h
    HINTS $ENV{CHICKEN_PREFIX}/include
    PATH_SUFFIXES chicken
    CMAKE_FIND_ROOT_PATH_BOTH)

find_library(CHICKEN_LIBRARY chicken
    HINTS $ENV{CHICKEN_PREFIX}/lib
    CMAKE_FIND_ROOT_PATH_BOTH)

# Try harder to find matching static library.
get_filename_component(_chicken_prefix ${CHICKEN_INCLUDE_DIR} PATH)
get_filename_component(_chicken_lib_dir ${CHICKEN_LIBRARY} PATH)
if(${_chicken_prefix})
    string(REGEX REPLACE "^(.*)/include$" "\\1" _chicken_prefix ${_chicken_prefix})
endif()

find_library(CHICKEN_STATIC_LIBRARY libchicken.a
    HINTS ${_chicken_lib_dir}
    NO_SYSTEM_ENVIRONMENT_PATH
    NO_CMAKE_SYSTEM_PATH)

unset(_chicken_prefix)
unset(_chicken_lib_dir)

set(_definitions HAVE_CHICKEN_CONFIG_H C_ENABLE_PTABLES)
if(MSVC)
    # Chicken causes a lot of these
    list(APPEND _definitions _CRT_SECURE_NO_WARNINGS)
endif()

set(CHICKEN_DEFINITIONS ${_definitions} CACHE STRING "")
mark_as_advanced(CHICKEN_DEFINITIONS)
unset(_definitions)

if(MSVC)
    # C4101 - unreferenced local variable
    # C4996 - The POSIX name for this item is deprecated
    set(_flags /wd4101 /wd4996)
else()
    # Felix wrote, that these are required. Strict aliasing caused some real
    # problems and wrapv disables some questionable aggressive compiler
    # optimizations with regard to signed integer overflow.
    set(_flags -fno-strict-aliasing -fwrapv)
endif()
if(APPLE)
    list(APPEND _flags -fno-common)
endif()

set(CHICKEN_C_FLAGS ${_flags} CACHE STRING "")
mark_as_advanced(CHICKEN_C_FLAGS)
unset(_flags)

if(WIN32)
    # TODO: add check for x64
    set(_libs ws2_32)
elseif(ANDROID)
    set(_libs m;log)
else()
    set(_libs m)
endif()
list(APPEND _libs ${CMAKE_DL_LIBS})

set(CHICKEN_EXTRA_LIBRARIES ${_libs} CACHE STRING "")
mark_as_advanced(CHICKEN_EXTRA_LIBRARIES)
unset(_libs)

set(CHICKEN_INCLUDE_DIRS ${CHICKEN_INCLUDE_DIR})
set(CHICKEN_LIBRARIES ${CHICKEN_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})
set(CHICKEN_STATIC_LIBRARIES ${CHICKEN_STATIC_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})

# Various macros for user CMakeLists.
include(${CMAKE_CURRENT_LIST_DIR}/ChickenUse.cmake)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Chicken DEFAULT_MSG CHICKEN_COMPILER)
