# - Chicken Use module

include(CMakeParseArguments)
include(FeatureSummary)
include(FindPackageHandleStandardArgs)

option(CHICKEN_BUILD_IMPORTS "Compile generated import libraries" YES)

if(CHICKEN_HOST_SYSTEM STREQUAL CHICKEN_TARGET_SYSTEM)
    set(CHICKEN_CROSS 0)
else()
    set(CHICKEN_CROSS 1)
endif()

# used internally for build-specific files
set(CHICKEN_TMP_DIR ${CMAKE_BINARY_DIR}/_chicken)

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
    string(STRIP "${result}" result)
    set(${out_var} ${result} PARENT_SCOPE)
endfunction()

# A lot of flexibility here. Maybe too much. Some option combinations do not
# make sense together, diagnostics are not done, but the implementation is
# simpler this way.
macro(_chicken_parse_arguments)
    cmake_parse_arguments(compile
        "STATIC;SHARED;MODULE;EMBEDDED;EXTENSION"
        "SUFFIX;ERROR_FILE"
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
        set_source_files_properties(${lib} PROPERTIES
            chicken_import_library TRUE)
        # Visual Studio seems to not like targets with many outputs
        if(NOT EXISTS ${CHICKEN_IMPORT_LIBRARY_DIR}/${lib})
            list(APPEND command_output ${lib})
        endif()
        list(APPEND command_output ${CHICKEN_IMPORT_LIBRARY_DIR}/${lib})
    endforeach()

    list(APPEND command_options ${compile_OPTIONS})

    list(APPEND command_c_flags ${compile_C_FLAGS})

    _chicken_command_include_paths()
endmacro()

macro(_chicken_command_include_paths)
    # set the variable empty just in case, because it later appended to
    set(include_paths "")

    # First, try the directory of the source file if it is not the current
    # (which is used by default). Needed for (include "<file>") forms.
    if(NOT in_dir STREQUAL CMAKE_CURRENT_BINARY_DIR)
        list(APPEND include_paths ${in_dir})
    endif()

    # then, search collected import libraries
    list(APPEND include_paths ${CHICKEN_IMPORT_LIBRARY_DIR})
    list(APPEND include_paths ${CHICKEN_LOCAL_REPOSITORY})

    # some eggs install files there, but it may be empty when bootstrapping
    if(CHICKEN_DATA_DIR)
        list(APPEND include_paths ${CHICKEN_DATA_DIR})
    endif()

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
    get_filename_component(in_path ${in_file} PATH)

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

    if(UNIX)
        list(APPEND c_flags -Wno-unused-variable -Wno-unused-function)
    endif()

    # Add global include paths where chicken.h and chicken-config.h are.
    # Empty check is needed when these are overridden, for example when
    # bootstrapping the Chicken itself.
    foreach(i ${CHICKEN_INCLUDE_DIRS})
        list(APPEND c_flags -I${i})
    endforeach()

    set_property(SOURCE ${out_file} APPEND PROPERTY COMPILE_DEFINITIONS
        ${CHICKEN_DEFINITIONS} ${command_definitions} ${compile_DEFINITIONS})

    # compile flags property can not handle list
    _chicken_join(c_flags ${c_flags})
    set_property(SOURCE ${out_file} APPEND_STRING PROPERTY
        COMPILE_FLAGS " ${c_flags}")
endfunction()

function(_chicken_extract_depends out_var dep_path)
    set(result "")

    include(${dep_path} OPTIONAL)

    if(imports)
        list(REMOVE_DUPLICATES imports)
    endif()
    if(includes)
        list(REMOVE_DUPLICATES includes)
    endif()

    foreach(i ${imports})
        list(APPEND result ${CHICKEN_IMPORT_LIBRARY_DIR}/${i}.import.scm)
    endforeach()

    foreach(i ${includes})
        get_filename_component(source ${i} ABSOLUTE)
        if(EXISTS ${source})
            list(APPEND result ${source})
        elseif(EXISTS ${source}.scm)
            list(APPEND result ${source}.scm)
        endif()
    endforeach()

    set(${out_var} ${result} PARENT_SCOPE)
endfunction()

# This is main custom command generating function.
function(_chicken_command out_var in_file)
    string(REGEX REPLACE
        "(.*)\\.scm$" "\\1${compile_SUFFIX}.chicken.c"
        out_file ${in_file})

    get_filename_component(in_path ${in_file} ABSOLUTE)
    get_filename_component(in_dir  ${in_path} DIRECTORY)

    _chicken_command_prepare_arguments()
    _chicken_add_c_flags(${in_file} ${out_file} ${command_c_flags})

    get_property(is_import_library SOURCE ${in_file}
        PROPERTY chicken_import_library)

    if(CHICKEN_EXTRACT_SCRIPT AND NOT is_import_library)
        string(REGEX REPLACE
            "(.*)\\.scm$" "\\1.chicken.d"
            dep_file ${in_file})

        if(IS_ABSOLUTE ${dep_file})
            set(dep_path ${dep_file})
        else()
            set(dep_path ${CMAKE_CURRENT_BINARY_DIR}/${dep_file})
        endif()

        # This speeds up clean build because the most backends can not handle
        # initial dependency extraction and recalculation
        if(NOT EXISTS ${dep_path})
            message(STATUS "Generating ${dep_file}")
            execute_process(COMMAND
                ${CHICKEN_INTERPRETER} -ss ${CHICKEN_EXTRACT_SCRIPT}
                ${in_path} ${dep_path})
        endif()

        set(xdepends "")
        _chicken_extract_depends(xdepends ${dep_path})
    endif()

    set(depends ${command_depends} ${compile_DEPENDS} ${xdepends})

    set(chicken_command ${CHICKEN_EXECUTABLE} ${in_path})

    if(compile_ERROR_FILE)
        set(out_file ${compile_ERROR_FILE})
    else()
        list(APPEND chicken_command -output-file ${out_file})
    endif()

    list(INSERT command_output 0 ${out_file})

    list(APPEND chicken_command ${CHICKEN_OPTIONS} ${command_options})

    if(CHICKEN_PRINT_DEPENDS)
        if(is_import_library)
            message(STATUS "I ${in_file} => ${command_output}")
        else()
            message(STATUS "${in_file} => ${command_output}")
        endif()
        foreach(d ${command_depends})
            message(STATUS "\t${d}")
        endforeach()
        foreach(d ${compile_DEPENDS})
            message(STATUS "=\t${d}")
        endforeach()
        foreach(d ${xdepends})
            message(STATUS "+\t${d}")
        endforeach()
    endif()

    if(CHICKEN_COMMAND_WRAP)
        add_custom_command(OUTPUT ${command_output}
            COMMAND ${CMAKE_COMMAND}
            "-DCOMMAND=${chicken_command}"
            "-DOUTPUT_FILE=${compile_ERROR_FILE}"
            "-DCHICKEN_REPOSITORY=${CHICKEN_REPOSITORY}"
            "-DLIBRARY_PATH=${CHICKEN_LIBRARY_PATH}"
            -P ${CHICKEN_RUN}
            MAIN_DEPENDENCY ${in_file}
            DEPENDS ${depends} VERBATIM)
    else()
        add_custom_command(OUTPUT ${command_output}
            COMMAND ${chicken_command}
            MAIN_DEPENDENCY ${in_file}
            DEPENDS ${depends} VERBATIM)
    endif()

    if(CHICKEN_EXTRACT_SCRIPT AND NOT is_import_library)
        add_custom_command(OUTPUT ${command_output}
            COMMAND ${CHICKEN_INTERPRETER} -ss ${CHICKEN_EXTRACT_SCRIPT}
                    ${in_path} ${dep_path}
            MAIN_DEPENDENCY ${in_file}
            VERBATIM APPEND)
    endif()

    foreach(import ${command_import_libraries})
        add_custom_command(OUTPUT ${command_output}
            COMMAND ${CMAKE_COMMAND}
            ARGS -E copy ${CMAKE_CURRENT_BINARY_DIR}/${import} ${CHICKEN_IMPORT_LIBRARY_DIR}/${import}
            VERBATIM APPEND)
        # sometimes timestamp of generated import library is not updated
        if(MSVC90)
            add_custom_command(OUTPUT ${command_output}
                COMMAND ${CMAKE_COMMAND}
                ARGS -E touch_nocreate ${CMAKE_CURRENT_BINARY_DIR}/${import}
                VERBATIM APPEND)
        endif()
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

    list(APPEND ${out_var} ${compile_SOURCES})
    list(APPEND ${out_var} ${compile_C_SOURCES})
    set(${out_var} ${${out_var}} PARENT_SCOPE)
endfunction()

# Convenience wrapper around add_executable.
function(add_chicken_executable name)
    set(sources)

    add_chicken_sources(sources ${ARGN})

    add_executable(${name} ${sources})
    _chicken_target_link_libraries(${name})

    if(WIN32)
        set_property(TARGET ${name} APPEND PROPERTY
            COMPILE_DEFINITIONS PIC)
    endif()
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
    add_chicken_sources(sources ${library_type} ${ARGN})

    add_library(${name} ${library_type} ${sources})
    _chicken_target_link_libraries(${name})

    set_property(TARGET ${name} PROPERTY
        LIBRARY_OUTPUT_DIRECTORY ${CHICKEN_LOCAL_REPOSITORY})
    if(library_STATIC OR library_SHARED)
        set_target_properties(${name} PROPERTIES FOLDER "Libraries")
    elseif(library_MODULE)
        set_target_properties(${name} PROPERTIES FOLDER "Modules")
    endif()

    if(library_MODULE)
        set_target_properties(${name} PROPERTIES
            PREFIX ""
            NO_SONAME TRUE)
        if(APPLE)
            set_target_properties(${name} PROPERTIES
                SUFFIX ".dylib")
        endif()

        set_property(DIRECTORY APPEND PROPERTY CHICKEN_MODULES ${name})
    endif()
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
            # add_dependencies(${import} ${name})
            add_dependencies(${name} ${import})

            if(CHICKEN_CROSS)
                set_property(TARGET ${import} PROPERTY
                    LIBRARY_OUTPUT_DIRECTORY ${CHICKEN_LOCAL_REPOSITORY})
            endif()
        endforeach()
    endif()
endfunction()

# Used for installing modules. Needs more work.
function(install_chicken_modules name)
    cmake_parse_arguments(install
        ""
        ""
        "TARGETS;PROGRAMS;FILES"
        ${ARGN})

    get_property(modules DIRECTORY PROPERTY CHICKEN_MODULES)

    if(CHICKEN_BOOTSTRAP)
        install(TARGETS ${modules}
            LIBRARY DESTINATION ${INSTALL_EGGDIR})
        return()
    endif()

    find_package_handle_standard_args(ChickenConfig DEFAULT_MSG
        Chicken_CONFIG
        CHICKEN_EXTENSION_DIR CHICKEN_DATA_DIR
        CHICKEN_RUNTIME_DIR CHICKEN_LIBRARY_DIR)
    if(NOT CHICKENCONFIG_FOUND)
        message(FATAL_ERROR "Chicken config was not found, can not install extensions.")
    endif()

    foreach(m ${modules})
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

    set(config_in_filename ${CHICKEN_DATA_DIR}/ChickenExtensionConfig.cmake.in)
    set(config_out_filename ${PROJECT_BINARY_DIR}/${name}-config.cmake)

    set(version_in_filename ${CHICKEN_DATA_DIR}/ChickenExtensionVersion.cmake.in)
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
    if(NOT extension_VERSION)
        set(extension_VERSION 0.0)
    endif()
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

function(_chicken_add_test name)
    cmake_parse_arguments(test "" "PATH;OUTPUT_FILE" "ENVIRONMENT" ${ARGN})

    if(UNIX AND NOT APPLE)
        list(APPEND test_ENVIRONMENT LD_LIBRARY_PATH=${chicken_BINARY_DIR})
    elseif(APPLE)
        list(APPEND test_ENVIRONMENT DYLD_LIBRARY_PATH=${chicken_BINARY_DIR})
    endif()

    add_test(NAME ${name} COMMAND ${CMAKE_COMMAND}
        "-DPATH=${test_PATH}"
        "-DENVIRONMENT=${test_ENVIRONMENT}"
        "-DCHICKEN_REPOSITORY=${CHICKEN_REPOSITORY}"
        "-DCOMMAND=${test_UNPARSED_ARGUMENTS}"
        "-DOUTPUT_FILE=${test_OUTPUT_FILE}"
        -P ${CHICKEN_RUN})
endfunction()

function(add_chicken_test name)
    cmake_parse_arguments(test "" "ARGS;OUTPUT_FILE" "" ${ARGN})

    add_chicken_executable(${name} ${test_UNPARSED_ARGUMENTS})

    _chicken_add_test(${name} $<TARGET_FILE:${name}> ${test_ARGS}
        OUTPUT_FILE "${test_OUTPUT_FILE}")
endfunction()

function(add_chicken_interpreted_test name)
    cmake_parse_arguments(test "" "SCRIPT" "" ${ARGN})

    set(command ${CHICKEN_INTERPRETER} -bnq -R chicken-syntax
        -I ${CMAKE_CURRENT_SOURCE_DIR}
        -I ${CMAKE_CURRENT_BINARY_DIR})

    if(test_SCRIPT)
        set(args -s ${CMAKE_CURRENT_SOURCE_DIR}/${test_SCRIPT})
    endif()

    # NOTE: order of arguments matters
    _chicken_add_test(${name}-i ${command} ${test_UNPARSED_ARGUMENTS} ${args})
endfunction()
