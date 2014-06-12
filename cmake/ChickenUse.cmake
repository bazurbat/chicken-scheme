# - Chicken Use Module

include(CMakeParseArguments)

macro(_chicken_parse_arguments)
    cmake_parse_arguments(compile
        "STATIC;SHARED;MODULE;EMBEDDED;EXTENSION;EMIT_IMPORTS;EMIT_TYPES;EMIT_INLINES"
        "SUFFIX;EMIT;EMIT_TYPE_FILE;EMIT_INLINE_FILE"
        "SOURCES;C_SOURCES;EMIT_IMPORT_LIBRARIES;OPTIONS;C_FLAGS;DEPENDS"
        ${ARGN})

    set(command_options)
    set(command_c_flags)
    set(command_output)
    set(command_depends)

    list(APPEND compile_SOURCES ${compile_UNPARSED_ARGUMENTS})

    if(compile_STATIC)
        list(APPEND command_options -feature chicken-compile-static)
        set(output_suffix ".static")
    endif()

    if(compile_MODULE)
        set(compile_SHARED TRUE)
        if(compile_EMIT AND NOT compile_EMIT_IMPORT_LIBRARIES)
            set(compile_EMIT_IMPORT_LIBRARIES ${compile_EMIT})
        endif()
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

    if(compile_EMIT_IMPORTS)
        list(APPEND command_options -emit-all-import-libraries)
    endif()

    foreach(emit ${compile_EMIT_IMPORT_LIBRARIES})
        list(APPEND command_options -emit-import-library ${emit})
        list(APPEND command_output ${emit}.import.scm)
    endforeach()

    if(CHICKEN_EMIT_TYPES AND compile_EMIT AND NOT compile_EMIT_TYPE_FILE)
        set(compile_EMIT_TYPE_FILE ${compile_EMIT})
    endif()

    if(CHICKEN_EMIT_INLINES AND compile_EMIT AND NOT compile_EMIT_INLINE_FILE)
        set(compile_EMIT_INLINE_FILE ${compile_EMIT})
    endif()

    list(APPEND command_options ${compile_OPTIONS})

    foreach(flag ${compile_C_FLAGS})
        set(command_c_flags "${command_c_flags} ${flag}")
    endforeach()
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

    get_filename_component(in_name ${in_filename} NAME_WE)
    get_filename_component(in_filename ${in_filename} ABSOLUTE)
    file(TO_CMAKE_PATH ${in_filename} in_filename)
    get_filename_component(in_path ${in_filename} PATH)

    if(compile_EMIT_TYPE_FILE)
        set(types_filename ${compile_EMIT_TYPE_FILE}.types)
    elseif(compile_EMIT_TYPES)
        set(types_filename ${in_name}.types)
    endif()
    if(types_filename)
        list(APPEND command_options -emit-type-file ${types_filename})
        list(APPEND command_output ${types_filename})
    endif()

    if(compile_EMIT_INLINE_FILE)
        set(inline_filename ${compile_EMIT_INLINE_FILE}.inline)
    elseif(compile_EMIT_INLINES)
        set(inline_filename ${in_name}.inline)
    endif()
    if(inline_filename)
        list(APPEND command_options -emit-inline-file ${inline_filename})
        list(APPEND command_output ${inline_filename})
    endif()

    foreach(dep ${compile_DEPENDS})
        get_target_property(dep_location ${dep} LOCATION)
        if(dep_location)
            get_filename_component(dep_dir ${dep_location} DIRECTORY)
            get_filename_component(dep_name ${dep_location} NAME_WE)
            get_filename_component(dep_types "${dep_dir}/${dep_name}.types" ABSOLUTE)
            get_filename_component(dep_inline "${dep_dir}/${dep_name}.inline" ABSOLUTE)
            # message(STATUS "${dep}: ${dep_types} ${dep_inline}")
            if(EXISTS ${dep_types} AND CHICKEN_EMIT_TYPES)
                list(APPEND command_options -types ${dep_types})
                list(APPEND command_depends ${dep_types})
            endif()
            if(EXISTS ${dep_inline} AND CHICKEN_EMIT_INLINES)
                list(APPEND command_options -consult-inline-file ${dep_inline})
                list(APPEND command_depends ${dep_inline})
            endif()
        endif()
    endforeach()

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
        DEPENDS ${in_filename} ${compile_DEPENDS} ${command_depends}
        VERBATIM)

    set(${out_var} ${out_filename} PARENT_SCOPE)
endfunction()

function(add_chicken_sources out_var)
    _chicken_parse_arguments(${ARGN})
    foreach(arg ${compile_SOURCES})
        _chicken_command(out_filename ${arg})
        list(APPEND ${out_var} ${out_filename})
    endforeach()
    list(APPEND ${out_var} ${compile_C_SOURCES})
    set(${out_var} ${${out_var}} PARENT_SCOPE)
endfunction()

function(add_chicken_executable name)
    set(sources)
    add_chicken_sources(sources ${ARGN})
    add_executable(${name} ${sources})
    target_link_libraries(${name} ${CHICKEN_LIBRARIES})
endfunction()

function(add_chicken_library name)
    _chicken_parse_arguments(${ARGN})
    if(compile_STATIC)
        set(library_type STATIC)
    elseif(compile_MODULE)
        set(library_type MODULE)
        list(APPEND ${PROJECT_NAME}_CHICKEN_MODULES ${name})
        set(${PROJECT_NAME}_CHICKEN_MODULES ${${PROJECT_NAME}_CHICKEN_MODULES}
            PARENT_SCOPE)
    elseif(compile_SHARED)
        set(library_type SHARED)
    endif()
    set(sources)
    add_chicken_sources(sources ${ARGN})
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
    _chicken_parse_arguments(MODULE ${ARGN})
    if(NOT compile_EMIT_IMPORT_LIBRARIES)
        set(compile_EMIT_IMPORT_LIBRARIES ${name})
    endif()
    add_chicken_library(${name} ${ARGN} MODULE
        EMIT_IMPORT_LIBRARIES ${compile_EMIT_IMPORT_LIBRARIES})
    foreach(lib ${compile_EMIT_IMPORT_LIBRARIES})
        set(import_filename "${CMAKE_CURRENT_BINARY_DIR}/${lib}.import.scm")
        add_chicken_library(${lib}.import ${import_filename} MODULE
            C_FLAGS ${compile_C_FLAGS})
        # add_dependencies(${name} ${lib}.import)
    endforeach()
    set(${PROJECT_NAME}_CHICKEN_MODULES ${${PROJECT_NAME}_CHICKEN_MODULES}
        PARENT_SCOPE)
endfunction()

function(install_chicken_modules name)
    cmake_parse_arguments(install
        ""
        "VERSION"
        "TARGETS;PROGRAMS;FILES"
        ${ARGN})
    foreach(m ${${name}_CHICKEN_MODULES})
        install(TARGETS ${m}
            LIBRARY DESTINATION ${CHICKEN_EGGDIR})
    endforeach()
    if(install_TARGETS)
        install(TARGETS ${install_TARGETS}
            RUNTIME DESTINATION ${CHICKEN_BINDIR}
            LIBRARY DESTINATION ${CHICKEN_EGGDIR}
            ARCHIVE DESTINATION ${CHICKEN_EGGDIR})
    endif()
    if(install_PROGRAMS)
        install(PROGRAMS ${install_PROGRAMS}
            DESTINATION ${CHICKEN_BINDIR})
    endif()
    if(install_FILES)
        install(FILES ${install_FILES}
            DESTINATION ${CHICKEN_EGGDIR})
    endif()
endfunction()
