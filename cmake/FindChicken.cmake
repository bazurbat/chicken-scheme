# - Find Chicken

include(FindPackageMessage)
include(FindPackageHandleStandardArgs)
include(FeatureSummary)

set_package_properties(Chicken PROPERTIES
    URL "http://call-cc.org"
    DESCRIPTION "A practical and portable Scheme system")

set(CHICKEN_SYSTEM "" CACHE STRING
    "A compiler identifier of the build system")
set(CHICKEN_HOST_SYSTEM ${CHICKEN_SYSTEM} CACHE STRING
    "A compiler identifier of the host system")
set(CHICKEN_TARGET_SYSTEM ${CHICKEN_HOST_SYSTEM} CACHE STRING
    "A compiler identifier of the target system")
mark_as_advanced(CHICKEN_SYSTEM CHICKEN_HOST_SYSTEM CHICKEN_TARGET_SYSTEM)

option(CHICKEN_HAVE_CONFIG_H "Use generated chicken-config.h" YES)
option(CHICKEN_ENABLE_PTABLES "Enable procedure tables" YES)
option(CHICKEN_EMIT_TYPES "Generate files with type declarations" NO)
option(CHICKEN_EMIT_INLINES "Generate files with globally inlinable procedures" NO)
mark_as_advanced(CHICKEN_HAVE_CONFIG_H CHICKEN_ENABLE_PTABLES
    CHICKEN_EMIT_TYPES CHICKEN_EMIT_INLINES)

set(CHICKEN_ROOT_DIR "$ENV{CHICKEN_PREFIX}" CACHE PATH "")
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

# NOTE: search system paths before environment variables (PATH, etc.) to avoid
# unexpected clashes with locally installed Chicken (in user home, build root
# and such)

find_program(CHICKEN_EXECUTABLE ${_chicken_host_system}chicken
    PATHS ${CHICKEN_HOST_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_program(CHICKEN_EXECUTABLE ${_chicken_system}chicken
    PATHS ${CHICKEN_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_program(CHICKEN_EXECUTABLE
    NAMES ${_chicken_host_system}chicken ${_chicken_system}chicken
    NO_SYSTEM_ENVIRONMENT_PATH)
find_program(CHICKEN_EXECUTABLE
    NAMES ${_chicken_host_system}chicken ${_chicken_system}chicken)

find_program(CSI_EXECUTABLE ${_chicken_host_system}csi
    PATHS ${CHICKEN_HOST_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_program(CSI_EXECUTABLE ${_chicken_system}chicken
    PATHS ${CHICKEN_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_program(CSI_EXECUTABLE
    NAMES ${_chicken_host_system}csi ${_chicken_system}csi
    NO_SYSTEM_ENVIRONMENT_PATH)
find_program(CSI_EXECUTABLE
    NAMES ${_chicken_host_system}csi ${_chicken_system}csi)

find_path(CHICKEN_INCLUDE_DIR chicken.h
    PATHS ${CHICKEN_ROOT_DIR}/include
    PATH_SUFFIXES chicken
    NO_DEFAULT_PATH)
find_path(CHICKEN_INCLUDE_DIR chicken.h
    PATH_SUFFIXES chicken
    NO_SYSTEM_ENVIRONMENT_PATH)
find_path(CHICKEN_INCLUDE_DIR chicken.h
    PATH_SUFFIXES chicken)

find_library(CHICKEN_LIBRARY ${_chicken_system}chicken
    PATHS ${CHICKEN_ROOT_DIR}/lib
    NO_DEFAULT_PATH)
find_library(CHICKEN_LIBRARY ${_chicken_system}chicken
    NO_SYSTEM_ENVIRONMENT_PATH)
find_library(CHICKEN_LIBRARY ${_chicken_system}chicken)

find_library(CHICKEN_STATIC_LIBRARY lib${_chicken_system}chicken.a
    PATHS ${CHICKEN_ROOT_DIR}/lib
    NO_DEFAULT_PATH)
find_library(CHICKEN_STATIC_LIBRARY lib${_chicken_system}chicken.a
    NO_SYSTEM_ENVIRONMENT_PATH)
find_library(CHICKEN_STATIC_LIBRARY lib${_chicken_system}chicken.a)

function(_chicken_set_c_flags)
    if(CHICKEN_HAVE_CONFIG_H)
        set(CHICKEN_C_DEFINITIONS "-DHAVE_CHICKEN_CONFIG_H")
    endif()
    if(CHICKEN_ENABLE_PTABLES)
        set(CHICKEN_C_DEFINITIONS "${CHICKEN_C_DEFINITIONS} -DC_ENABLE_PTABLES")
    endif()
    string(STRIP ${CHICKEN_C_DEFINITIONS} CHICKEN_C_DEFINITIONS)

    set(CHICKEN_C_DEFINITIONS ${CHICKEN_C_DEFINITIONS} PARENT_SCOPE)

    if(MSVC)
        # C4101 - unreferenced local variable
        set(c_flags "/wd4101")
        set(c_flags_minsizerel "/O1 /Os /Oy")
        set(c_flags_release "/Ox /Ot /Oy")
        set(c_flags_debug "/Od /Zi")
    else()
        set(c_flags "-fno-strict-aliasing -fwrapv")
        set(c_flags_minsizerel "-Os -fomit-frame-pointer")
        set(c_flags_release "-O3 -fomit-frame-pointer")
        set(c_flags_debug "-g -Wall -Wno-unused")
    endif()

    set(CHICKEN_C_FLAGS ${c_flags} CACHE STRING "")
    set(CHICKEN_C_FLAGS_MINSIZEREL ${c_flags_minsizerel} CACHE STRING "")
    set(CHICKEN_C_FLAGS_RELEASE ${c_flags_release} CACHE STRING "")
    set(CHICKEN_C_FLAGS_DEBUG ${c_flags_debug} CACHE STRING "")

    if(CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
        set(c_flags_config ${CHICKEN_C_FLAGS_MINSIZEREL})
    elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
        set(c_flags_config ${CHICKEN_C_FLAGS_RELEASE})
    elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(c_flags_config ${CHICKEN_C_FLAGS_DEBUG})
    endif()

    set(CHICKEN_GLOBAL_C_FLAGS
        "${CHICKEN_C_DEFINITIONS} ${CHICKEN_C_FLAGS} ${c_flags_config}"
        PARENT_SCOPE)
endfunction()
_chicken_set_c_flags()

if(WIN32)
    # TODO: handle x64?
    set(CHICKEN_EXTRA_LIBRARIES ws2_32)
elseif(UNIX)
    set(CHICKEN_EXTRA_LIBRARIES m)
endif()
list(APPEND CHICKEN_EXTRA_LIBRARIES ${CMAKE_DL_LIBS})

set(CHICKEN_INCLUDE_DIRS ${CHICKEN_INCLUDE_DIR})
set(CHICKEN_LIBRARIES ${CHICKEN_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})
set(CHICKEN_STATIC_LIBRARIES ${CHICKEN_STATIC_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})

find_package_handle_standard_args(Chicken DEFAULT_MSG CHICKEN_EXECUTABLE)
find_package_message(CSI_EXECUTABLE
    "  CSI_EXECUTABLE: ${CSI_EXECUTABLE}"
    "${CSI_EXECUTABLE}")
find_package_message(CHICKEN_INCLUDE_DIR
    "  CHICKEN_INCLUDE_DIR: ${CHICKEN_INCLUDE_DIR}"
    "${CHICKEN_INCLUDE_DIR}")
find_package_message(CHICKEN_LIBRARY
    "  CHICKEN_LIBRARY: ${CHICKEN_LIBRARY} (${CHICKEN_EXTRA_LIBRARIES})"
    "${CHICKEN_LIBRARY}")
find_package_message(CHICKEN_STATIC_LIBRARY
    "  CHICKEN_STATIC_LIBRARY: ${CHICKEN_STATIC_LIBRARY}"
    "${CHICKEN_STATIC_LIBRARY}")
find_package_message(CHICKEN_EGGDIR
    "  CHICKEN_EGGDIR: ${CHICKEN_EGGDIR}"
    "${CHICKEN_EGGDIR}")

include(${CMAKE_CURRENT_LIST_DIR}/ChickenUse.cmake)