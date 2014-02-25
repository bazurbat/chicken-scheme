# - Find Chicken Scheme compiler

include(CMakeParseArguments)

function(_chicken_set_names)
    set(CHICKEN_SYSTEM "" CACHE STRING
        "Name of system")
    set(CHICKEN_TARGET_SYSTEM ${CHICKEN_SYSTEM} CACHE STRING
        "Name of target system")
    if(CHICKEN_SYSTEM STREQUAL CHICKEN_TARGET_SYSTEM)
        set(cross 0)
    else()
        set(cross 1)
    endif()
    set(CHICKEN_CROSS ${cross} CACHE INTERNAL "Compiling cross Chicken")

    set(CHICKEN_PREFIX "" CACHE STRING
        "Prefix for Chicken programs and paths")
    set(CHICKEN_SUFFIX "" CACHE STRING
        "Suffix for Chicken programs and paths")
    set(CHICKEN_TARGET_PREFIX ${CHICKEN_PREFIX} CACHE STRING
        "Prefix for target Chicken programs and paths")
    set(CHICKEN_TARGET_SUFFIX ${CHICKEN_SUFFIX} CACHE STRING
        "Suffix for target Chicken programs and paths")

    set(CHICKEN_NAME ${CHICKEN_PREFIX}chicken${CHICKEN_SUFFIX} CACHE INTERNAL
        "Canonical Chicken name")
    set(CHICKEN_TARGET_NAME ${CHICKEN_TARGET_PREFIX}chicken${CHICKEN_TARGET_SUFFIX} CACHE INTERNAL
        "Canonical target Chicken name")
    mark_as_advanced(CHICKEN_NAME CHICKEN_TARGET_NAME)

    set(CHICKEN_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE STRING
        "Installation directory")
    set(CHICKEN_TARGET_INSTALL_PREFIX ${CHICKEN_INSTALL_PREFIX} CACHE STRING
        "Target installation directory")
    set(CHICKEN_TARGET_RUN_PREFIX ${CHICKEN_INSTALL_PREFIX} CACHE STRING
        "Effective runtime target prefix")
endfunction()
_chicken_set_names()

function(_chicken_find)
    if((NOT CHICKEN_ROOT_DIR) AND (EXISTS $ENV{CHICKEN_PREFIX}))
        set(CHICKEN_ROOT_DIR $ENV{CHICKEN_PREFIX})
    else()
        set(CHICKEN_ROOT_DIR ${CHICKEN_INSTALL_PREFIX})
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
    find_library(CHICKEN_LIBRARY ${CHICKEN_NAME}
        PATHS ${CHICKEN_ROOT_DIR}/lib
        NO_DEFAULT_PATH)
    find_library(CHICKEN_LIBRARY ${CHICKEN_NAME})
endfunction()
_chicken_find()

function(_chicken_set_flags)
    option(CHICKEN_ENABLE_PTABLES "Enable procedure tables" YES)

    set(definitions "-DHAVE_CHICKEN_CONFIG_H")

    if(CHICKEN_ENABLE_PTABLES)
        set(definitions "${definitions} -DC_ENABLE_PTABLES")
    endif()

    if(MSVC)
        set(optimize_size "/O1 /Os /Oy")
        set(optimize_speed "/Ox /Ot /Oy")
        set(optimize_debug "/Od")
        # C4101 - unreferenced local variable
        set(extra_flags "/wd4101")
    else()
        set(optimize_size "-Os -fomit-frame-pointer")
        set(optimize_speed "-O3 -fomit-frame-pointer")
        set(optimize_debug "-g -Wall -Wno-unused")
        set(extra_flags "-fno-strict-aliasing -fwrapv")
    endif()

    set(CHICKEN_C_FLAGS_MINSIZEREL ${optimize_size} CACHE STRING
        "Additional compiler flags for Chicken generated files during minsize builds")
    set(CHICKEN_C_FLAGS_RELEASE ${optimize_speed} CACHE STRING
        "Additional compiler flags for Chicken generated files during release builds")
    set(CHICKEN_C_FLAGS_DEBUG ${optimize_debug} CACHE STRING
        "Additional compiler flags for Chicken generated files during debug builds")
    set(CHICKEN_EXTRA_C_FLAGS ${extra_flags} CACHE STRING
        "Additional compiler flags for Chicken generated files during all build types")

    if(NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
        set(c_flags "${CHICKEN_C_FLAGS_MINSIZEREL}")
    elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
        set(c_flags "${CHICKEN_C_FLAGS_RELEASE}")
    elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(c_flags "${CHICKEN_C_FLAGS_DEBUG}")
    endif()

    set(CHICKEN_C_FLAGS "${c_flags} ${CHICKEN_EXTRA_C_FLAGS} ${definitions}" CACHE STRING
        "Compiler flags for Chicken generated files (forced)" FORCE)
endfunction()

macro(_chicken_parse_arguments)
    cmake_parse_arguments(arg
        "SHARED;STATIC;EMBEDDED"
        "CHICKEN_LIBRARY"
        "EMIT;OPTIONS;COMPILE_FLAGS"
        ${ARGN})

    if(arg_SHARED)
        list(APPEND _chicken_options -feature chicken-compile-shared)
        set(_compile_flags "${_compile_flags} -DPIC -DC_SHARED")
    endif()
    if(arg_STATIC)
        list(APPEND _chicken_options -feature chicken-compile-static)
        set(_output_suffix "-static")
    endif()
    if(arg_EMBEDDED)
        set(_compile_flags "${_compile_flags} -DC_EMBEDDED")
        set(_output_suffix "-embedded")
    endif()
    if(arg_SHARED AND NOT arg_EMBEDDED)
        list(APPEND _chicken_options -dynamic)
    endif()

    foreach(_emit ${arg_EMIT})
        list(APPEND _command_output ${_emit}.import.scm)
        list(APPEND _chicken_options -emit-import-library ${_emit})
    endforeach()

    list(APPEND _chicken_options ${arg_OPTIONS})
    set(_compile_flags "${_compile_flags} ${arg_COMPILE_FLAGS}")
endmacro()

function(_chicken_command _OUTPUT _INPUT)
    string(REGEX REPLACE "(.*)\\.scm$" "\\1${_output_suffix}.chicken.c" _cname ${_INPUT})

    get_filename_component(_input ${_INPUT} ABSOLUTE)
    file(TO_CMAKE_PATH ${_input} _input)

    get_filename_component(_path ${_input} PATH)
    file(TO_CMAKE_PATH ${_path} _path)

    set(_output ${CMAKE_CURRENT_BINARY_DIR}/${_cname})
    file(TO_CMAKE_PATH ${_output} _output)

    set_property(SOURCE ${_output} APPEND_STRING PROPERTY
        COMPILE_FLAGS " -I${_path} ${CHICKEN_C_FLAGS} ${_compile_flags}")

    add_custom_command(
        OUTPUT ${_output} ${_command_output}
        COMMAND ${CHICKEN_EXECUTABLE}
        ARGS ${_input} -output-file ${_output} -include-path ${_path}
             ${CHICKEN_OPTIONS} ${_chicken_options}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS ${_input}
        VERBATIM)

    set(${_OUTPUT} ${_output} PARENT_SCOPE)
endfunction()

function(add_chicken_sources _OUTVAR)
    _chicken_parse_arguments(${ARGN})
    foreach(arg ${arg_UNPARSED_ARGUMENTS})
        _chicken_command(output ${arg})
        list(APPEND ${_OUTVAR} ${output})
    endforeach()
    set(${_OUTVAR} ${${_OUTVAR}} PARENT_SCOPE)
endfunction()

function(add_chicken_library _NAME _FILENAME)
    _chicken_parse_arguments(${ARGN})
    _chicken_command(output ${_FILENAME})
    add_library(${_NAME} MODULE ${output})
    set_target_properties(${_NAME} PROPERTIES PREFIX "")
    if(arg_CHICKEN_LIBRARY)
        target_link_libraries(${_NAME} ${arg_CHICKEN_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})
    else()
        target_link_libraries(${_NAME} ${CHICKEN_LIBRARIES})
    endif()
endfunction()

include(FindPackageHandleStandardArgs)
include(FindPackageMessage)

find_package_handle_standard_args(Chicken DEFAULT_MSG CHICKEN_EXECUTABLE)

if(CHICKEN_FOUND)
    set(_extra_libs ${CMAKE_DL_LIBS})
    if(WIN32)
        # TODO: handle x64?
        list(APPEND _extra_libs ws2_32)
    elseif(UNIX)
        list(APPEND _extra_libs m)
    endif()

    set(CHICKEN_INCLUDE_DIRS ${CHICKEN_INCLUDE_DIR})
    set(CHICKEN_EXTRA_LIBRARIES ${_extra_libs}
        CACHE STRING "Additional libraries required by Chicken")

    set(CHICKEN_LIBRARIES ${CHICKEN_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})

    _chicken_set_flags()

    find_package_message(Chicken
        "\tCHICKEN_EXECUTABLE: ${CHICKEN_EXECUTABLE}
\tCHICKEN_INCLUDE_DIR: ${CHICKEN_INCLUDE_DIR}
\tCHICKEN_LIBRARY: ${CHICKEN_LIBRARY}
\tCHICKEN_EXTRA_LIBRARIES: ${CHICKEN_EXTRA_LIBRARIES}"
        "$CHICKEN_ROOT_DIR")
endif()
