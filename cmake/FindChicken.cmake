# - Find Chicken

include(FindPackageMessage)
include(FindPackageHandleStandardArgs)

set(CHICKEN_SYSTEM "" CACHE STRING
    "A compiler identifier of the build system")
set(CHICKEN_HOST_SYSTEM ${CHICKEN_SYSTEM} CACHE STRING
    "A compiler identifier of the host system")
set(CHICKEN_TARGET_SYSTEM ${CHICKEN_HOST_SYSTEM} CACHE STRING
    "A compiler identifier of the target system")
mark_as_advanced(CHICKEN_SYSTEM CHICKEN_HOST_SYSTEM CHICKEN_TARGET_SYSTEM)

set(CHICKEN_ROOT_DIR "" CACHE PATH "")
set(CHICKEN_HOST_ROOT_DIR ${CHICKEN_ROOT_DIR} CACHE PATH "")

if(CHICKEN_SYSTEM)
    set(_chicken_system "${CHICKEN_SYSTEM}-")
endif()
if(CHICKEN_HOST_SYSTEM)
    set(_chicken_host_system "${CHICKEN_HOST_SYSTEM}-")
endif()
if(CHICKEN_TARGET_SYSTEM)
    set(_chicken_target_system "${CHICKEN_TARGET_SYSTEM}-")
endif()

find_package(Chicken CONFIG QUIET
    PATHS ${CHICKEN_ROOT_DIR}/share
    PATH_SUFFIXES chicken
    NO_DEFAULT_PATH)
find_package(Chicken CONFIG QUIET)

find_program(CHICKEN_EXECUTABLE ${_chicken_host_system}chicken
    PATHS ${CHICKEN_HOST_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_program(CHICKEN_EXECUTABLE ${_chicken_system}chicken
    PATHS ${CHICKEN_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_program(CHICKEN_EXECUTABLE
    NAMES ${_chicken_host_system}chicken ${_chicken_system}chicken) 

find_program(CSI_EXECUTABLE ${_chicken_host_system}csi
    PATHS ${CHICKEN_HOST_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_program(CSI_EXECUTABLE ${_chicken_system}chicken
    PATHS ${CHICKEN_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_program(CSI_EXECUTABLE
    NAMES ${_chicken_host_system}csi ${_chicken_system}csi)

find_path(CHICKEN_INCLUDE_DIR chicken.h
    PATHS ${CHICKEN_ROOT_DIR}/include
    PATH_SUFFIXES chicken
    NO_DEFAULT_PATH)
find_path(CHICKEN_INCLUDE_DIR chicken.h
    PATH_SUFFIXES chicken)

find_library(CHICKEN_LIBRARY ${_chicken_system}chicken
    PATHS ${CHICKEN_ROOT_DIR}/lib
    NO_DEFAULT_PATH)
find_library(CHICKEN_LIBRARY ${_chicken_system}chicken)

find_library(CHICKEN_STATIC_LIBRARY lib${_chicken_system}chicken.a
    PATHS ${CHICKEN_ROOT_DIR}/lib
    NO_DEFAULT_PATH)
find_library(CHICKEN_STATIC_LIBRARY lib${_chicken_system}chicken.a)

option(CHICKEN_HAVE_CONFIG_H "Use generated chicken-config.h" YES)
option(CHICKEN_ENABLE_PTABLES "Enable procedure tables" YES)
mark_as_advanced(CHICKEN_HAVE_CONFIG_H CHICKEN_ENABLE_PTABLES)

if(CHICKEN_HAVE_CONFIG_H)
    set(_chicken_c_definitions "${_chicken_c_definitions} -DHAVE_CHICKEN_CONFIG_H")
endif()
if(CHICKEN_ENABLE_PTABLES)
    set(_chicken_c_definitions "${_chicken_c_definitions} -DC_ENABLE_PTABLES")
endif()
string(STRIP ${_chicken_c_definitions} _chicken_c_definitions)

if(MSVC)
    set(_chicken_c_flags_common "/wd4101")
    set(_chicken_c_flags_minsizerel "/O1 /Os /Oy")
    set(_chicken_c_flags_release "/Ox /Ot /Oy")
    set(_chicken_c_flags_debug "/Od /Zi")
    # C4101 - unreferenced local variable
else()
    set(_chicken_c_flags_common "-fno-strict-aliasing -fwrapv")
    set(_chicken_c_flags_minsizerel "-Os -fomit-frame-pointer")
    set(_chicken_c_flags_release "-O3 -fomit-frame-pointer")
    set(_chicken_c_flags_debug "-g -Wall -Wno-unused")
endif()

if(NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
    set(_chicken_optimize_flags ${_chicken_c_flags_minsizerel})
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(_chicken_optimize_flags ${_chicken_c_flags_release})
elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(_chicken_optimize_flags ${_chicken_c_flags_debug})
endif()

set(CHICKEN_C_FLAGS "${_chicken_c_flags_common} ${_chicken_c_definitions} ${_chicken_optimize_flags}" CACHE STRING
    "Compiler flags for Chicken generated files")

if(WIN32)
    # TODO: handle x64?
    set(CHICKEN_EXTRA_LIBRARIES ws2_32)
elseif(UNIX)
    set(CHICKEN_EXTRA_LIBRARIES m)
endif()
list(APPEND CHICKEN_EXTRA_LIBRARIES ${CMAKE_DL_LIBS})

set(CHICKEN_INCLUDE_DIRS ${CHICKEN_INCLUDE_DIR})
set(CHICKEN_LIBRARIES ${CHICKEN_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})

find_package_handle_standard_args(Chicken DEFAULT_MSG CHICKEN_EXECUTABLE)
find_package_message(Chicken
    "  CSI_EXECUTABLE: ${CSI_EXECUTABLE}"
    "${CSI_EXECUTABLE}")
find_package_message(Chicken
    "  CHICKEN_INCLUDE_DIR: ${CHICKEN_INCLUDE_DIR}"
    "${CHICKEN_INCLUDE_DIR}")
find_package_message(Chicken
    "  CHICKEN_LIBRARY: ${CHICKEN_LIBRARY} (${CHICKEN_EXTRA_LIBRARIES})"
    "${CHICKEN_LIBRARY}")
find_package_message(Chicken
    "  CHICKEN_STATIC_LIBRARY: ${CHICKEN_STATIC_LIBRARY}"
    "${CHICKEN_STATIC_LIBRARY}")
find_package_message(Chicken
    "  CHICKEN_C_FLAGS: ${CHICKEN_C_FLAGS}"
    "${CHICKEN_C_FLAGS}")
find_package_message(Chicken
    "  CHICKEN_EGGDIR: ${CHICKEN_EGGDIR}"
    "${CHICKEN_EGGDIR}")

include(${CMAKE_CURRENT_LIST_DIR}/ChickenUse.cmake)
