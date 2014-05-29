# - Chicken Use Module

include(CMakeParseArguments)

macro(_chicken_parse_arguments)
    cmake_parse_arguments(compile
        "STATIC;SHARED;MODULE;EMBEDDED;EXTENSION;EMIT_INLINE;EMIT_TYPES"
        "NAME;SUFFIX"
        "EMIT;OPTIONS;C_FLAGS;C_SOURCES;DEPENDS"
        ${ARGN})

    set(command_options)
    set(command_c_flags)
    set(command_output)

    if(NOT compile_NAME)
        set(compile_NAME ${PROJECT_NAME})
    endif()

    if(compile_STATIC)
        list(APPEND command_options -feature chicken-compile-static)
        set(output_suffix ".static")
    endif()

    if(compile_MODULE)
        set(compile_SHARED TRUE)
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

    if(compile_EXTENSION)
        list(APPEND command_options -feature compiling-extension)
    endif()

    if(compile_EMIT_INLINE)
        list(APPEND command_options -emit-inline-file ${compile_NAME}.inline)
        list(APPEND command_output ${compile_NAME}.inline)
    endif()

    if(compile_EMIT_TYPES)
        list(APPEND command_options -emit-type-file ${compile_NAME}.types)
        list(APPEND command_output ${compile_NAME}.types)
    endif()

    foreach(emit ${compile_EMIT})
        list(APPEND command_options -emit-import-library ${emit})
        list(APPEND command_output ${emit}.import.scm)
    endforeach()

    list(APPEND command_options ${compile_OPTIONS})

    foreach(flag ${compile_C_FLAGS})
        set(command_c_flags "${command_c_flags} ${flag}")
    endforeach()

    if(NOT compile_UNPARSED_ARGUMENTS)
        set(compile_UNPARSED_ARGUMENTS ${compile_NAME}.scm)
    endif()
endmacro()

function(_chicken_command out_var in_filename)
    string(REGEX REPLACE
        "(.*)\\.scm$" "\\1${compile_SUFFIX}${output_suffix}.chicken.c"
        out_filename ${in_filename})

    get_filename_component(out_name ${out_filename} NAME)
    if(NOT IS_ABSOLUTE ${out_filename})
        set(out_filename ${CMAKE_CURRENT_BINARY_DIR}/${out_name})
    endif()
    file(TO_CMAKE_PATH ${out_filename} out_filename)

    get_filename_component(in_filename ${in_filename} ABSOLUTE)
    file(TO_CMAKE_PATH ${in_filename} in_filename)
    get_filename_component(in_path ${in_filename} PATH)

    set(c_flags "${CHICKEN_GLOBAL_C_FLAGS} ${command_c_flags}")

    if(NOT in_path STREQUAL CMAKE_CURRENT_BINARY_DIR)
        list(APPEND command_options -include-path ${in_path})
        set(c_flags "${c_flags} -I\"${in_path}\"")
    endif()
    foreach(path $ENV{CHICKEN_INCLUDE_PATH})
        list(APPEND command_options -include-path ${path})
    endforeach()

    set(c_flags "${c_flags} -I\"${CHICKEN_INCLUDE_DIRS}\"")

    set_property(SOURCE ${out_filename} APPEND_STRING PROPERTY
        COMPILE_FLAGS " ${c_flags}")

    add_custom_command(
        OUTPUT ${out_filename} ${command_output}
        COMMAND ${CHICKEN_EXECUTABLE}
        ARGS ${in_filename} -output-file ${out_filename}
             ${CHICKEN_OPTIONS} $ENV{CHICKEN_OPTIONS} ${command_options}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS ${in_filename} ${compile_DEPENDS}
        VERBATIM)

    set(${out_var} ${out_filename} PARENT_SCOPE)
endfunction()

function(add_chicken_sources out_var)
    _chicken_parse_arguments(${ARGN})
    foreach(arg ${compile_UNPARSED_ARGUMENTS})
        _chicken_command(out_filename ${arg})
        list(APPEND ${out_var} ${out_filename})
    endforeach()
    list(APPEND ${out_var} ${compile_C_SOURCES})
    set(${out_var} ${${out_var}} PARENT_SCOPE)
endfunction()

function(add_chicken_executable name)
    set(sources)
    add_chicken_sources(sources NAME ${name} ${ARGN})
    add_executable(${name} ${sources})
    target_link_libraries(${name} ${CHICKEN_LIBRARIES})
endfunction()

function(add_chicken_library name)
    _chicken_parse_arguments(NAME ${name} ${ARGN})
    if(compile_STATIC)
        set(library_type STATIC)
    elseif(compile_MODULE)
        set(library_type MODULE)
        list(APPEND ${PROJECT_NAME}_CHICKEN_MODULES ${compile_NAME})
        set(${PROJECT_NAME}_CHICKEN_MODULES ${${PROJECT_NAME}_CHICKEN_MODULES}
            PARENT_SCOPE)
    elseif(compile_SHARED)
        set(library_type SHARED)
    endif()
    set(sources)
    add_chicken_sources(sources NAME ${name} ${ARGN})
    add_library(${name} ${library_type} ${sources})
    target_link_libraries(${name} ${CHICKEN_LIBRARIES})
    if(compile_MODULE)
        # NOTE: BUILD_WITH_INSTALL_RPATH = true - breaks *.import.so during
        # compilation, false - breaks tests, need to handle this somehow
        set_target_properties(${name} PROPERTIES
            PREFIX ""
            NO_SONAME TRUE
            INSTALL_RPATH .
            BUILD_WITH_INSTALL_RPATH FALSE)
    endif()
endfunction()

function(add_chicken_module name)
    _chicken_parse_arguments(MODULE NAME ${name} ${ARGN})
    if(NOT compile_EMIT)
        set(compile_EMIT ${name})
    endif()
    add_chicken_library(${name} ${ARGN} MODULE EMIT ${compile_EMIT})
    foreach(lib ${compile_EMIT})
        add_chicken_library(${lib}.import MODULE
            ${CMAKE_CURRENT_BINARY_DIR}/${lib}.import.scm
            SUFFIX ${compile_SUFFIX}
            C_FLAGS ${compile_C_FLAGS})
    endforeach()
    set(${PROJECT_NAME}_CHICKEN_MODULES ${${PROJECT_NAME}_CHICKEN_MODULES}
        PARENT_SCOPE)
endfunction()

function(install_chicken_modules name)
    cmake_parse_arguments(install
        ""
        "VERSION"
        "PROGRAMS;FILES"
        ${ARGN})
    foreach(m ${${name}_CHICKEN_MODULES})
        install(TARGETS ${m}
            LIBRARY DESTINATION ${CHICKEN_EGGDIR})
    endforeach()
    if(install_PROGRAMS)
        install(PROGRAMS ${install_PROGRAMS}
            DESTINATION ${CHICKEN_BINDIR})
    endif()
    if(install_FILES)
        install(FILES ${install_FILES}
            DESTINATION ${CHICKEN_EGGDIR})
    endif()
endfunction()
