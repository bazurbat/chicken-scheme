# - Find Chicken Scheme compiler

include(CMakeParseArguments)

if(NOT CHICKEN_ROOT_DIR)
    if(EXISTS $ENV{CHICKEN_PREFIX})
        set(_chicken_root $ENV{CHICKEN_PREFIX})
    else()
        set(_chicken_root "/usr")
    endif()
    set(CHICKEN_ROOT_DIR ${_chicken_root} CACHE PATH
        "Chicken host install root")
endif()

find_program(CHICKEN_EXECUTABLE ${CHICKEN_PROGRAM_PREFIX}chicken
    PATHS ${CHICKEN_ROOT_DIR}/bin
    NO_DEFAULT_PATH)
find_path(CHICKEN_INCLUDE_DIR chicken.h
    PATHS ${CHICKEN_ROOT_DIR}/include/${CHICKEN_PROGRAM_PREFIX}chicken
    NO_DEFAULT_PATH)
find_library(CHICKEN_LIBRARY
    NAMES chicken ${CHICKEN_PROGRAM_PREFIX}chicken
    PATHS ${CHICKEN_TARGET_ROOT_DIR}/lib ${CHICKEN_ROOT_DIR}/lib
    NO_DEFAULT_PATH)

mark_as_advanced(CHICKEN_EXECUTABLE CHICKEN_INCLUDE_DIR CHICKEN_LIBRARY)

macro(_chicken_parse_arguments)
    cmake_parse_arguments(arg "SHARED;STATIC;EMBEDDED" "" "EMIT;OPTIONS"
        ${ARGN})

    if(arg_SHARED)
        list(APPEND _chicken_options -feature chicken-compile-shared)
        set(_compile_flags "${_compile_flags} -DPIC -DC_SHARED")
    endif()
    if(arg_STATIC)
        list(APPEND _chicken_options -feature chicken-compile-static)
    endif()
    if(arg_EMBEDDED)
        set(_compile_flags "${_compile_flags} -DC_EMBEDDED")
    endif()
    if(arg_SHARED AND NOT arg_EMBEDDED)
        list(APPEND _chicken_options -dynamic)
    endif()

    foreach(_emit ${arg_EMIT})
        list(APPEND _command_output ${_emit}.import.scm)
        list(APPEND _chicken_options -emit-import-library ${_emit})
    endforeach()

    list(APPEND _chicken_options ${arg_OPTIONS})
endmacro()

function(_chicken_command _OUTPUT _INPUT)
    string(REGEX REPLACE "(.*)\\.scm$" "\\1.chicken.c" _cname ${_INPUT})

    get_filename_component(_input ${_INPUT} ABSOLUTE)
    file(TO_NATIVE_PATH ${_input} _input)

    get_filename_component(_path ${_input} PATH)
    file(TO_NATIVE_PATH ${_path} _path)

    set(_output ${CMAKE_CURRENT_BINARY_DIR}/${_cname})
    file(TO_NATIVE_PATH ${_output} _output)

    set_property(SOURCE ${_output} APPEND_STRING PROPERTY
        COMPILE_FLAGS " -I${_path} ${_compile_flags}")

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
    target_link_libraries(${_NAME} ${CHICKEN_LIBRARIES})
endfunction()

include(FindPackageHandleStandardArgs)
include(FindPackageMessage)

find_package_handle_standard_args(Chicken DEFAULT_MSG CHICKEN_ROOT_DIR
    CHICKEN_EXECUTABLE CHICKEN_INCLUDE_DIR CHICKEN_LIBRARY)

if(CHICKEN_FOUND)
    set(CHICKEN_INCLUDE_DIRS ${CHICKEN_INCLUDE_DIR})
    set(CHICKEN_LIBRARIES ${CHICKEN_LIBRARY} m dl)

    find_package_message(Chicken
        "\tCHICKEN_EXECUTABLE: ${CHICKEN_EXECUTABLE}
\tCHICKEN_INCLUDE_DIR: ${CHICKEN_INCLUDE_DIR}
\tCHICKEN_LIBRARY: ${CHICKEN_LIBRARY}"
        "$CHICKEN_ROOT_DIR")
endif()
