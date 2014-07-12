# - Chicken Use Module

include(CMakeParseArguments)

# The generated import libraries are collected into these directories which are
# also added as include path to every command. Useful when compiling multiple
# modules in various project subdirectories to not force user to hunt them down
# along with dependencies and add include paths manually.
set(CHICKEN_IMPORT_LIBRARY_DIR ${CHICKEN_TMP_DIR}/import)
set(CHICKEN_LOCAL_REPOSITORY ${CHICKEN_TMP_DIR}/repository)

# It seems there is no standard functions for this.
function(_chicken_join out_var)
    set(result "")
    foreach(i ${ARGN})
        set(result "${result} ${i}")
    endforeach()
    set(${out_var} ${result} PARENT_SCOPE)
endfunction()

# A lot of flexibility here. Maybe too much. Some option combinations do not
# make sense together, diagnostics are not done, but the implementation is
# simpler this way.
macro(_chicken_parse_arguments)
    cmake_parse_arguments(compile
        "STATIC;SHARED;MODULE;EMBEDDED;EXTENSION"
        "EMIT;SUFFIX;EMIT_TYPE_FILE;EMIT_INLINE_FILE"
        "SOURCES;C_SOURCES;EMIT_IMPORTS;OPTIONS;DEFINITIONS;C_FLAGS;DEPENDS"
        ${ARGN})

    list(APPEND compile_SOURCES ${compile_UNPARSED_ARGUMENTS})

    if(compile_MODULE)
        set(compile_SHARED TRUE)
    endif()
endmacro()

macro(_chicken_command_prepare_arguments)
    set(command_import_libraries "")
    set(command_options "")
    set(command_definitions "")
    set(command_c_flags "")
    set(command_depends "")
    set(command_output "")

    if(compile_STATIC)
        list(APPEND command_options -feature chicken-compile-static)
    endif()

    if(compile_SHARED)
        list(APPEND command_options -feature chicken-compile-shared)
        list(APPEND command_definitions PIC C_SHARED)
    endif()

    if(compile_EMBEDDED)
        list(APPEND command_definitions C_EMBEDDED)
    endif()

    if(compile_SHARED AND NOT compile_EMBEDDED)
        list(APPEND command_options -dynamic)
    endif()

    if(compile_EXTENSION)
        list(APPEND command_options -feature compiling-extension)
    endif()

    foreach(lib ${compile_EMIT_IMPORTS})
        list(APPEND command_options -emit-import-library ${lib})
        list(APPEND command_import_libraries ${lib}.import.scm)
    endforeach()
    foreach(lib ${command_import_libraries})
        set_property(SOURCE ${lib} PROPERTY chicken_import_library TRUE)
        list(APPEND command_output ${lib} ${CHICKEN_IMPORT_LIBRARY_DIR}/${lib})
    endforeach()

    list(APPEND command_options ${compile_OPTIONS})

    list(APPEND command_c_flags ${compile_C_FLAGS})

    _chicken_command_add_type_inline()
    _chicken_command_add_include_paths()
endmacro()

macro(_chicken_command_add_type_inline)
    if(CHICKEN_EMIT_TYPES AND compile_EMIT AND NOT compile_EMIT_TYPE_FILE)
        set(compile_EMIT_TYPE_FILE ${compile_EMIT})
    endif()
    if(compile_EMIT_TYPE_FILE)
        set(types_file ${compile_EMIT_TYPE_FILE}.types)
        list(APPEND command_options -emit-type-file ${types_file})
        list(APPEND command_output ${types_file})
    endif()

    if(CHICKEN_EMIT_INLINES AND compile_EMIT AND NOT compile_EMIT_INLINE_FILE)
        set(compile_EMIT_INLINE_FILE ${compile_EMIT})
    endif()
    if(compile_EMIT_INLINE_FILE)
        set(inline_file ${compile_EMIT_INLINE_FILE}.inline)
        list(APPEND command_options -emit-inline-file ${inline_file})
        list(APPEND command_output ${inline_file})
    endif()

    # For each command dependency assume that type and inline files with the
    # same name are placed alongside and add an appropriate option to use it.
    # Do so only if the corresponding global option is set.
    foreach(dep ${compile_DEPENDS})
        get_target_property(dep_location ${dep} LOCATION)

        get_filename_component(dep_dir    ${dep_location} DIRECTORY)
        get_filename_component(dep_name   ${dep_location} NAME_WE)
        get_filename_component(dep_types  ${dep_dir}/${dep_name}.types  ABSOLUTE)
        get_filename_component(dep_inline ${dep_dir}/${dep_name}.inline ABSOLUTE)

        if(EXISTS ${dep_types} AND CHICKEN_EMIT_TYPES)
            list(APPEND command_options -types ${dep_types})
            list(APPEND command_depends ${dep_types})
        endif()

        if(EXISTS ${dep_inline} AND CHICKEN_EMIT_INLINES)
            list(APPEND command_options -consult-inline-file ${dep_inline})
            list(APPEND command_depends ${dep_inline})
        endif()
    endforeach()
endmacro()

macro(_chicken_command_add_include_paths)
    # set the variable empty just in case, because it later appended to
    set(include_paths "")

    # First, try the directory of the source file if it is not the current
    # (which is used by default). Needed for (include "<file>") forms.
    if(NOT in_path STREQUAL CMAKE_CURRENT_BINARY_DIR)
        list(APPEND include_paths ${in_path})
    endif()

    # then, search collected import libraries
    list(APPEND include_paths ${CHICKEN_IMPORT_LIBRARY_DIR})

    # then, try to add paths from user environment
    foreach(path $ENV{CHICKEN_INCLUDE_PATH})
        list(APPEND include_paths ${path})
    endforeach()

    # remove duplicates for nicer command lines in verbose mode
    list(REMOVE_DUPLICATES include_paths)
    foreach(i ${include_paths})
        list(APPEND command_options -include-path ${i})
    endforeach()
endmacro()

function(_chicken_add_c_flags in_file out_file)
    get_filename_component(in_file ${in_file} ABSOLUTE)
    get_filename_component(in_path ${in_file} DIRECTORY)

    # Use global C flags determined by find package first.
    set(c_flags ${CHICKEN_C_FLAGS})

    # Add the supplied arguments, intended for file specific flags.
    list(APPEND c_flags ${ARGN})

    # Add the directory of the source file (needed to properly resolve inline
    # C include declarations. Do not add current directory to shorten command
    # lines in verbose mode.
    if(NOT in_path STREQUAL CMAKE_CURRENT_BINARY_DIR)
        list(APPEND c_flags -I${in_path})
    endif()
    if(NOT CMAKE_CURRENT_SOURCE_DIR STREQUAL in_path)
        list(APPEND c_flags -I${CMAKE_CURRENT_SOURCE_DIR})
    endif()

    # Add global include paths where chicken.h and chicken-config.h are.
    # Empty check is needed when these are overridden, for example when
    # bootstrapping the Chicken itself.
    if(CHICKEN_INCLUDE_DIRS)
        list(APPEND c_flags -I${CHICKEN_INCLUDE_DIRS})
    endif()

    set_property(SOURCE ${out_file} APPEND PROPERTY COMPILE_DEFINITIONS
        ${CHICKEN_DEFINITIONS} ${command_definitions} ${compile_DEFINITIONS})

    # compile flags property can not handle list
    _chicken_join(c_flags ${c_flags})
    set_property(SOURCE ${out_file} APPEND_STRING PROPERTY
        COMPILE_FLAGS " ${c_flags}")
endfunction()

function(_chicken_create_depends in_file dep_file)
    execute_process(
        COMMAND ${CHICKEN_INTERPRETER} -ss ${CHICKEN_EXTRACT_SCRIPT}
            ${in_file} ${dep_file})
endfunction()

function(_chicken_extract_depends out_var in_file dep_file)
    set(depends ${dep_file})

    include(${dep_file} OPTIONAL)

    if(imports)
        list(REMOVE_DUPLICATES imports)
    endif()
    if(includes)
        list(REMOVE_DUPLICATES includes)
    endif()

    # message(STATUS "DEPENDS: ${in_file}")

    foreach(i ${imports})
        if(CMAKE_GENERATOR MATCHES "Make")
            # This check does not work for targets which CMake has not seen yet
            # during generation process.
            if(TARGET ${i})
                # message(STATUS "\tT ${i}")
                list(APPEND depends ${i})
            endif()
        else()
            # CMake Ninja generator adds bogus files as phony targets and this
            # makes the extraction simpler.
            # TODO: check other generators
            # message(STATUS "\t${CHICKEN_LOCAL_REPOSITORY}/${i}.import.scm")
            list(APPEND depends ${CHICKEN_IMPORT_LIBRARY_DIR}/${i}.import.scm)
        endif()
    endforeach()

    foreach(i ${includes})
        get_filename_component(i ${i} ABSOLUTE)
        if(EXISTS ${i})
            list(APPEND depends ${i})
        elseif(EXISTS ${i}.scm)
            list(APPEND depends ${i}.scm)
        endif()
    endforeach()

    set(${out_var} ${depends} PARENT_SCOPE)
endfunction()

# This is main custom command generating function.
function(_chicken_command out_var in_file)
    string(REGEX REPLACE
        "(.*)\\.scm$" "\\1${compile_SUFFIX}.chicken.c"
        out_file ${in_file})

    get_filename_component(in_filename ${in_file} NAME)
    get_filename_component(in_file ${in_file} ABSOLUTE)
    get_filename_component(in_name ${in_file} NAME_WE)
    get_filename_component(in_path ${in_file} DIRECTORY)

    # Cut off possible relative parts from the supplied filepath and place the
    # output file in the current binary dir to avoid conflicts when single scm
    # pulled from different subdirectories.
    get_filename_component(out_filename ${out_file} NAME)
    if(NOT IS_ABSOLUTE ${out_file})
        set(out_file ${CMAKE_CURRENT_BINARY_DIR}/${out_filename})
    endif()
    get_filename_component(out_file ${out_file} ABSOLUTE)
    get_filename_component(out_path ${out_file} DIRECTORY)

    string(REGEX REPLACE
        "(.*)\\.c$" "\\1.d.cmake"
        dep_file ${out_file})

    _chicken_command_prepare_arguments()
    _chicken_add_c_flags(${in_file} ${out_file} ${command_c_flags})

    get_property(is_import_library SOURCE ${in_file}
        PROPERTY chicken_import_library)

    set(depends "")
    if(CHICKEN_EXTRACT_DEPENDS AND CHICKEN_EXTRACT_SCRIPT AND NOT is_import_library)
        add_custom_command(OUTPUT ${dep_file}
            COMMAND ${CHICKEN_INTERPRETER} -ss ${CHICKEN_EXTRACT_SCRIPT}
                ${in_file} ${dep_file}
            DEPENDS ${in_file}
            VERBATIM)
        if(NOT EXISTS ${dep_file})
            _chicken_create_depends(${in_file} ${dep_file})
        endif()
        _chicken_extract_depends(depends ${in_file} ${dep_file})
    endif()

    list(INSERT command_output 0 ${out_file})

    # add_custom_command(OUTPUT ${command_output}
    #     COMMAND ${CHICKEN_EXECUTABLE}
    #         ${in_file} -output-file ${out_file}
    #         ${CHICKEN_OPTIONS} ${command_options} $ENV{CHICKEN_OPTIONS}
    #     DEPENDS ${in_file} ${command_depends} ${compile_DEPENDS} ${depends}
    #     VERBATIM)
    set(CHICKEN_COMMAND ${CHICKEN_EXECUTABLE}
        ${in_file} -output-file ${out_file}
        ${CHICKEN_OPTIONS} ${command_options})
    add_custom_command(OUTPUT ${command_output}
        COMMAND ${CMAKE_COMMAND}
            -DCHICKEN_COMMAND="${CHICKEN_COMMAND}"
            -DCHICKEN_REPOSITORY="${CHICKEN_REPOSITORY}"
            -P ${CHICKEN_RUN}
        DEPENDS ${in_file} ${command_depends} ${compile_DEPENDS} ${depends})

    foreach(import ${command_import_libraries})
        add_custom_command(OUTPUT ${command_output}
            COMMAND ${CMAKE_COMMAND}
            ARGS -E copy ${CMAKE_CURRENT_BINARY_DIR}/${import} ${CHICKEN_IMPORT_LIBRARY_DIR}/${import}
            VERBATIM APPEND)
    endforeach()

    set(${out_var} ${out_file} PARENT_SCOPE)
endfunction()

function(_chicken_target_link_libraries name)
    if(compile_STATIC)
        target_link_libraries(${name} ${CHICKEN_STATIC_LIBRARIES})
    else()
        target_link_libraries(${name} ${CHICKEN_LIBRARIES})
    endif()
endfunction()

# Used by other add_chicken... functions, can be used directly to pass file
# specific options or build source lists incrementally.
function(add_chicken_sources out_var)
    _chicken_parse_arguments(${ARGN})

    foreach(arg ${compile_SOURCES})
        _chicken_command(out_file ${arg})
        list(APPEND ${out_var} ${out_file})
    endforeach()

    foreach(s ${compile_C_SOURCES})
        _chicken_add_c_flags(${s} ${s} ${compile_C_FLAGS})
    endforeach()

    list(APPEND ${out_var} ${compile_C_SOURCES})
    set(${out_var} ${${out_var}} PARENT_SCOPE)
endfunction()

# Convenience wrapper around add_executable.
function(add_chicken_executable name)
    set(sources)

    add_chicken_sources(sources EMIT ${name} ${ARGN})

    add_executable(${name} ${sources})
    _chicken_target_link_libraries(${name})

    set_property(TARGET ${name} APPEND PROPERTY
        COMPILE_DEFINITIONS PIC)
endfunction()

# Convenience wrapper around add_library.
function(add_chicken_library name)
    cmake_parse_arguments(library
        "STATIC;SHARED;MODULE" "" "" ${ARGN})

    if(library_STATIC)
        set(library_type STATIC)
    elseif(library_SHARED)
        set(library_type SHARED)
    else()
        set(library_type MODULE)
        set(library_MODULE TRUE)
    endif()

    set(sources)
    add_chicken_sources(sources ${library_type} EMIT ${name} ${ARGN})

    add_library(${name} ${library_type} ${sources})
    _chicken_target_link_libraries(${name})

    set_property(TARGET ${name} PROPERTY
        LIBRARY_OUTPUT_DIRECTORY ${CHICKEN_LOCAL_REPOSITORY})

    if(library_MODULE)
        set_target_properties(${name} PROPERTIES
            PREFIX ""
            NO_SONAME TRUE)

        list(APPEND ${PROJECT_NAME}_CHICKEN_MODULES ${name})
    endif()

    set(${PROJECT_NAME}_CHICKEN_MODULES ${${PROJECT_NAME}_CHICKEN_MODULES}
        PARENT_SCOPE)
endfunction()

# Even more convenient wrapper for compiling Chicken modules along with import
# libraries.
function(add_chicken_module name)
    _chicken_parse_arguments(${ARGN})

    if(NOT compile_EMIT_IMPORTS)
        set(compile_EMIT_IMPORTS ${name})
    endif()

    add_chicken_library(${name} MODULE ${ARGN}
        EMIT_IMPORTS ${compile_EMIT_IMPORTS})

    if(CHICKEN_BUILD_IMPORTS)
        foreach(lib ${compile_EMIT_IMPORTS})
            set(import ${lib}.import)

            add_chicken_library(${import} MODULE
                SOURCES ${CMAKE_CURRENT_BINARY_DIR}/${import}.scm)
            add_dependencies(${import} ${name})
            set_property(TARGET ${import} PROPERTY
                LIBRARY_OUTPUT_DIRECTORY ${CHICKEN_LOCAL_REPOSITORY})
        endforeach()
    endif()

    set(${PROJECT_NAME}_CHICKEN_MODULES ${${PROJECT_NAME}_CHICKEN_MODULES}
        PARENT_SCOPE)
endfunction()

# Used for installing modules. Needs more work.
function(install_chicken_modules name)
    cmake_parse_arguments(install
        ""
        ""
        "TARGETS;PROGRAMS;FILES"
        ${ARGN})

    find_package_handle_standard_args(ChickenConfig DEFAULT_MSG
        Chicken_CONFIG
        CHICKEN_EXTENSION_DIR CHICKEN_DATA_DIR
        CHICKEN_RUNTIME_DIR CHICKEN_LIBRARY_DIR)
    if(NOT CHICKENCONFIG_FOUND)
        message(FATAL_ERROR "Chicken config was not found, can not install extensions.")
    endif()

    foreach(m ${${name}_CHICKEN_MODULES})
        install(TARGETS ${m}
            LIBRARY DESTINATION ${CHICKEN_EXTENSION_DIR})
    endforeach()
    if(install_TARGETS)
        install(TARGETS ${install_TARGETS}
            RUNTIME DESTINATION ${CHICKEN_RUNTIME_DIR}
            LIBRARY DESTINATION ${CHICKEN_EXTENSION_DIR}
            ARCHIVE DESTINATION ${CHICKEN_EXTENSION_DIR})
    endif()
    if(install_PROGRAMS)
        install(PROGRAMS ${install_PROGRAMS}
            DESTINATION ${CHICKEN_RUNTIME_DIR})
    endif()
    if(install_FILES)
        install(FILES ${install_FILES}
            DESTINATION ${CHICKEN_EXTENSION_DIR})
    endif()

    get_property(EXTENSION_NAME GLOBAL PROPERTY _CHICKEN_${name}_NAME)
    get_property(EXTENSION_VERSION GLOBAL PROPERTY _CHICKEN_${name}_VERSION)
    get_property(EXTENSION_DESCRIPTION GLOBAL PROPERTY _CHICKEN_${name}_DESCRIPTION)
    get_property(EXTENSION_URL GLOBAL PROPERTY _CHICKEN_${name}_URL)

    set(config_in_filename ${PROJECT_SOURCE_DIR}/ChickenExtensionConfig.cmake.in)
    set(config_out_filename ${PROJECT_BINARY_DIR}/${name}-config.cmake)

    set(version_in_filename ${PROJECT_SOURCE_DIR}/ChickenExtensionVersion.cmake.in)
    set(version_out_filename ${PROJECT_BINARY_DIR}/${name}-config-version.cmake)

    if(EXISTS ${config_in_filename})
        configure_file(${config_in_filename} ${config_out_filename} @ONLY)
        configure_file(${version_in_filename} ${version_out_filename} @ONLY)
        install(FILES ${config_out_filename} ${version_out_filename}
            DESTINATION ${CHICKEN_DATA_DIR})
    endif()
endfunction()

# Used for declaring Chicken extension properties.
function(define_chicken_extension name)
    cmake_parse_arguments(extension
        ""
        "VERSION;DESCRIPTION;CATEGORY;LICENSE;URL"
        "AUTHOR;MAINTAINER"
        ${ARGN})
    if(NOT extension_URL)
        set(extension_URL "http://wiki.call-cc.org/eggref/4/${name}")
    endif()
    set_property(GLOBAL PROPERTY _CHICKEN_${name}_NAME ${name})
    set_property(GLOBAL PROPERTY _CHICKEN_${name}_VERSION ${extension_VERSION})
    set_property(GLOBAL PROPERTY _CHICKEN_${name}_DESCRIPTION ${extension_DESCRIPTION})
    set_property(GLOBAL PROPERTY _CHICKEN_${name}_URL ${extension_URL})
endfunction()

# A wrapper around find_package to search for Chicken extensions.
function(find_chicken_extension name)
    cmake_parse_arguments(extension
        "REQUIRED"
        "VERSION"
        "DEPENDS"
        ${ARGN})
    if(NOT extension_VERSION)
        if(extension_UNPARSED_ARGUMENTS)
            set(extension_VERSION ${extension_UNPARSED_ARGUMENTS})
        else()
            set(extension_VERSION 0.0)
        endif()
    endif()
    if(extension_REQUIRED)
        set(extension_REQUIRED REQUIRED)
    else()
        set(extension_REQUIRED)
    endif()

    find_package(${name} ${extension_VERSION} CONFIG ${extension_REQUIRED}
        PATHS ${CHICKEN_DATA_DIR})
    find_package_handle_standard_args(${name} DEFAULT_MSG ${name}_VERSION)
endfunction()
