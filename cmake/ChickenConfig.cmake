# - Chicken Config

include(FindPackageMessage)
include(FindPackageHandleStandardArgs)

option(CHICKEN_HAVE_CONFIG_H "Use generated chicken-config.h" YES)
option(CHICKEN_ENABLE_PTABLES "Enable procedure tables" YES)

function(_chicken_config_flags)
    set(definitions)
    if(CHICKEN_HAVE_CONFIG_H)
        set(definitions "-DHAVE_CHICKEN_CONFIG_H")
    endif()
    if(CHICKEN_ENABLE_PTABLES)
        set(definitions "${definitions} -DC_ENABLE_PTABLES")
    endif()
    set(CHICKEN_C_DEFINITIONS ${definitions} CACHE INTERNAL
        "C compiler definitions for building Chicken generated files")

    if(MSVC)
        set(common_flags "/wd4101")
        set(optimize_size "/O1 /Os /Oy")
        set(optimize_speed "/Ox /Ot /Oy")
        set(optimize_debug "/Od /Zi")
        # C4101 - unreferenced local variable
    else()
        set(common_flags "-fno-strict-aliasing -fwrapv")
        set(optimize_size "-Os -fomit-frame-pointer")
        set(optimize_speed "-O3 -fomit-frame-pointer")
        set(optimize_debug "-g -Wall -Wno-unused")
    endif()

    set(CHICKEN_C_FLAGS_COMMON ${common_flags} CACHE STRING
        "Additional C compiler flags for Chicken generated files during all build types")
    set(CHICKEN_C_FLAGS_MINSIZEREL ${optimize_size} CACHE STRING
        "Additional C compiler flags for Chicken generated files during minsize builds")
    set(CHICKEN_C_FLAGS_RELEASE ${optimize_speed} CACHE STRING
        "Additional C compiler flags for Chicken generated files during release builds")
    set(CHICKEN_C_FLAGS_DEBUG ${optimize_debug} CACHE STRING
        "Additional C compiler flags for Chicken generated files during debug builds")

    if(NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
        set(c_flags "${CHICKEN_C_FLAGS_MINSIZEREL}")
    elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
        set(c_flags "${CHICKEN_C_FLAGS_RELEASE}")
    elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(c_flags "${CHICKEN_C_FLAGS_DEBUG}")
    endif()

    set(CHICKEN_C_FLAGS "${CHICKEN_C_DEFINITIONS} ${CHICKEN_C_FLAGS_COMMON} ${c_flags}" CACHE STRING
        "Compiler flags for Chicken generated files (forced)" FORCE)
endfunction()

function(_chicken_config_names)
    set(CHICKEN_PREFIX "" CACHE STRING
        "Prefix for Chicken programs and paths")
    set(CHICKEN_SUFFIX "" CACHE STRING
        "Suffix for Chicken programs and paths")
    set(CHICKEN_NAME ${CHICKEN_PREFIX}chicken${CHICKEN_SUFFIX} CACHE INTERNAL
        "Canonical Chicken name")
    set(CHICKEN_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE INTERNAL
        "Chicken installation root directory")
endfunction()

function(_chicken_config_find)
    if(NOT CHICKEN_ROOT_DIR)
        if(EXISTS $ENV{CHICKEN_PREFIX})
            set(CHICKEN_ROOT_DIR $ENV{CHICKEN_PREFIX})
        else()
            set(CHICKEN_ROOT_DIR ${CHICKEN_INSTALL_PREFIX})
        endif()
    endif()

    find_program(CHICKEN_EXECUTABLE ${CHICKEN_NAME}
        PATHS ${CHICKEN_ROOT_DIR}/bin
        NO_DEFAULT_PATH)
    find_program(CHICKEN_EXECUTABLE ${CHICKEN_NAME}
        NO_SYSTEM_ENVIRONMENT_PATH)
    find_path(CHICKEN_INCLUDE_DIR chicken.h
        PATHS ${CHICKEN_ROOT_DIR}/include/${CHICKEN_NAME}
        NO_DEFAULT_PATH)
    find_path(CHICKEN_INCLUDE_DIR chicken.h
        PATH_SUFFIXES ${CHICKEN_NAME})
    find_library(CHICKEN_LIBRARY
        NAMES chicken ${CHICKEN_NAME}
        PATHS ${CHICKEN_TARGET_ROOT_DIR}/lib ${CHICKEN_ROOT_DIR}/lib
        NO_DEFAULT_PATH)
    find_library(CHICKEN_LIBRARY ${CHICKEN_NAME})

    set(extra_libs ${CMAKE_DL_LIBS})
    if(WIN32)
        # TODO: handle x64?
        list(APPEND extra_libs ws2_32)
    elseif(UNIX)
        list(APPEND extra_libs m)
    endif()

    set(CHICKEN_INCLUDE_DIRS ${CHICKEN_INCLUDE_DIR} CACHE STRING
        "Chicken include directories")
    set(CHICKEN_EXTRA_LIBRARIES ${extra_libs} CACHE STRING
        "Additional libraries required by Chicken")
    set(CHICKEN_LIBRARIES ${CHICKEN_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES} CACHE STRING
        "Chicken libraries")

    find_package_handle_standard_args(Chicken DEFAULT_MSG CHICKEN_ROOT_DIR
        CHICKEN_EXECUTABLE CHICKEN_INCLUDE_DIR)
    find_package_message(Chicken
        "CHICKEN_ROOT_DIR: ${CHICKEN_ROOT_DIR}
   CHICKEN_EXECUTABLE: ${CHICKEN_EXECUTABLE}
   CHICKEN_INCLUDE_DIR: ${CHICKEN_INCLUDE_DIR}
   CHICKEN_LIBRARY: ${CHICKEN_LIBRARY} (${CHICKEN_EXTRA_LIBRARIES})
   CHICKEN_C_FLAGS: ${CHICKEN_C_FLAGS}"
"[${CHICKEN_EXECUTABLE}][${CHICKEN_INCLUDE_DIR}][${CHICKEN_LIBRARY}]")
endfunction()

set(CHICKEN_USE_FILE ${CMAKE_CURRENT_LIST_DIR}/ChickenUse.cmake)

_chicken_config_flags()
_chicken_config_names()
_chicken_config_find()
