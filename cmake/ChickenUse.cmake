# - Chicken Use Module

include(CMakeParseArguments)

macro(_chicken_parse_arguments)
    cmake_parse_arguments(_arg
        "SHARED;STATIC;EMBEDDED"
        "LIBRARY"
        "EMIT;OPTIONS;COMPILE_FLAGS"
        ${ARGN})

    if(_arg_SHARED)
        list(APPEND _command_options -feature chicken-compile-shared)
        set(_command_flags "${_command_flags} -DPIC -DC_SHARED")
    endif()
    if(_arg_STATIC)
        list(APPEND _command_options -feature chicken-compile-static)
        set(_command_suffix "-static")
    endif()
    if(_arg_EMBEDDED)
        set(_command_flags "${_command_flags} -DC_EMBEDDED")
        set(_command_suffix "-embedded")
    endif()
    if(_arg_SHARED AND NOT _arg_EMBEDDED)
        list(APPEND _command_options -dynamic)
    endif()

    foreach(_emit ${_arg_EMIT})
        list(APPEND _command_output ${_emit}.import.scm)
        list(APPEND _command_options -emit-import-library ${_emit})
    endforeach()

    list(APPEND _command_options ${_arg_OPTIONS})
    set(_command_flags "${_command_flags} ${_arg_COMPILE_FLAGS}")
endmacro()

function(_chicken_command _OUTPUT _INPUT)
    string(REGEX REPLACE
        "(.*)\\.scm$" "\\1${_command_suffix}.chicken.c"
        _cname ${_INPUT})

    get_filename_component(_input ${_INPUT} ABSOLUTE)
    file(TO_CMAKE_PATH ${_input} _input)

    get_filename_component(_path ${_input} PATH)
    file(TO_CMAKE_PATH ${_path} _path)

    set(_output ${CMAKE_CURRENT_BINARY_DIR}/${_cname})
    file(TO_CMAKE_PATH ${_output} _output)

    set_property(SOURCE ${_output} APPEND_STRING PROPERTY
        COMPILE_FLAGS " -I${_path} ${_command_flags} ${CHICKEN_C_FLAGS}")

    add_custom_command(
        OUTPUT ${_output} ${_command_output}
        COMMAND ${CHICKEN_EXECUTABLE}
        ARGS ${_input} -output-file ${_output} -include-path ${_path}
             ${_command_options} ${CHICKEN_OPTIONS}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS ${_input}
        VERBATIM)

    set(${_OUTPUT} ${_output} PARENT_SCOPE)
endfunction()

function(add_chicken_sources _OUTVAR)
    _chicken_parse_arguments(${ARGN})
    foreach(arg ${_arg_UNPARSED_ARGUMENTS})
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
    if(_arg_LIBRARY)
        target_link_libraries(${_NAME} ${_arg_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})
    else()
        target_link_libraries(${_NAME} ${CHICKEN_LIBRARIES})
    endif()
endfunction()
