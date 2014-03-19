# - Chicken Use Module

include(CMakeParseArguments)

macro(_chicken_parse_arguments)
    cmake_parse_arguments(compile
        "STATIC;SHARED;MODULE;EMBEDDED"
        "RUNTIME"
        "EMIT;OPTIONS;C_FLAGS;DEPENDS"
        ${ARGN})
endmacro()

macro(_chicken_process_arguments)
    set(command_options)
    set(command_c_flags)
    set(command_output)

    if(compile_STATIC)
        list(APPEND command_options -feature chicken-compile-static)
        set(output_suffix ".static")
    endif()
    if(compile_SHARED)
        list(APPEND command_options -feature chicken-compile-shared)
        set(command_c_flags "${command_c_flags} -DPIC -DC_SHARED")
    endif()
    if(compile_EMBEDDED)
        set(command_c_flags "${command_c_flags} -DC_EMBEDDED")
        set(output_suffix ".embedded")
    endif()
    if(compile_SHARED AND NOT compile_EMBEDDED)
        list(APPEND command_options -dynamic)
    endif()

    foreach(emit ${compile_EMIT})
        list(APPEND command_options -emit-import-library ${emit})
        list(APPEND command_output ${emit}.import.scm)
    endforeach()

    list(APPEND command_options ${compile_OPTIONS})
    foreach(flag ${compile_C_FLAGS})
        set(command_c_flags "${command_c_flags} ${flag}")
    endforeach()
endmacro()

function(_chicken_command out_var in_filename)
    string(REGEX REPLACE
        "(.*)\\.scm$" "\\1${output_suffix}.chicken.c"
        out_filename ${in_filename})

    get_filename_component(out_name ${out_filename} NAME)
    if(NOT IS_ABSOLUTE ${out_filename})
        set(out_filename ${CMAKE_CURRENT_BINARY_DIR}/${out_name})
    endif()
    file(TO_CMAKE_PATH ${out_filename} out_filename)

    get_filename_component(in_filename ${in_filename} ABSOLUTE)
    file(TO_CMAKE_PATH ${in_filename} in_filename)
    get_filename_component(in_path ${in_filename} PATH)

    set(c_flags "${CHICKEN_C_FLAGS} ${command_c_flags}")
    set(c_flags "${c_flags} -I\"${in_path}\"")
    set(c_flags "${c_flags} -I\"${CHICKEN_INCLUDE_DIR}\"")

    set_property(SOURCE ${out_filename} APPEND_STRING PROPERTY
        COMPILE_FLAGS " ${c_flags}")

    add_custom_command(
        OUTPUT ${out_filename} ${command_output}
        COMMAND ${CHICKEN_EXECUTABLE}
        ARGS ${in_filename} -output-file ${out_filename}
            ${CHICKEN_OPTIONS} ${command_options}
            -include-path ${CMAKE_CURRENT_BINARY_DIR}
            -include-path ${in_path}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS ${in_filename} ${compile_DEPENDS}
        VERBATIM)

    set(${out_var} ${out_filename} PARENT_SCOPE)
endfunction()

function(add_chicken_sources out_var)
    _chicken_parse_arguments(${ARGN})
    _chicken_process_arguments()
    foreach(arg ${compile_UNPARSED_ARGUMENTS})
        _chicken_command(out_filename ${arg})
        list(APPEND ${out_var} ${out_filename})
    endforeach()
    set(${out_var} ${${out_var}} PARENT_SCOPE)
endfunction()

function(add_chicken_library name)
    _chicken_parse_arguments(${ARGN})
    if(compile_STATIC)
        set(library_type STATIC)
    elseif(compile_SHARED)
        set(library_type SHARED)
    else()
        set(library_type MODULE)
        set(compile_SHARED TRUE)
        set(compile_MODULE TRUE)
    endif()
    _chicken_process_arguments()
    set(library_sources)
    foreach(arg ${compile_UNPARSED_ARGUMENTS})
        _chicken_command(out_filename ${arg})
        list(APPEND library_sources ${out_filename})
    endforeach()
    add_library(${name} ${library_type} ${library_sources})
    if(compile_RUNTIME)
        target_link_libraries(${name} ${compile_RUNTIME} ${CHICKEN_EXTRA_LIBRARIES})
    else()
        target_link_libraries(${name} ${CHICKEN_LIBRARIES})
    endif()
    if(compile_MODULE)
        set_target_properties(${name} PROPERTIES PREFIX "")
    endif()
endfunction()

function(add_chicken_module name)
    add_chicken_library(${name} ${ARGN} MODULE)
    _chicken_parse_arguments(${ARGN})
    set(import_libraries ${compile_EMIT})
    set(compile_EMIT)
    _chicken_process_arguments()
    foreach(lib ${import_libraries})
        add_chicken_library(${lib}.import MODULE
            ${CMAKE_CURRENT_BINARY_DIR}/${lib}.import.scm
            RUNTIME ${compile_RUNTIME}
            OPTIONS ${compile_OPTIONS} C_FLAGS ${compile_C_FLAGS})
    endforeach()
endfunction()
