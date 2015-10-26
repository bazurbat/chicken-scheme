# - Chicken Use module

include(CMakeParseArguments)
include(FeatureSummary)
include(FindPackageHandleStandardArgs)

option(CHICKEN_BUILD_IMPORTS "Compile emitted import libraries" YES)

if(MSVC)
    # MSBuild goes crazy over this and tries to rebuild everything as many
    # times as there are combinations of build commands
    unset(CHICKEN_DEPENDS)
endif()

set(CHICKEN_IMPORT_DIR ${CMAKE_BINARY_DIR}/.import
    CACHE PATH "Contains generated CHICKEN import libraries")
mark_as_advanced(CHICKEN_IMPORT_DIR)

set(CHICKEN_REPOSITORY ${CMAKE_BINARY_DIR}/.chicken
    CACHE PATH "CHICKEN local repository")
mark_as_advanced(CHICKEN_REPOSITORY)

# Joins all supplied arguments into a single string separated by space. Also
# strips leading and trailing spaces. There is built-in JOIN generator
# expression with similar function but it can be used only in certain command
# arguments which is not always applicable.
function(_chicken_join out_var)
    set(result_string "")

    foreach(item ${ARGN})
        set(result_string "${result_string} ${item}")
    endforeach()
    string(STRIP "${result_string}" result_string)

    set(${out_var} "${result_string}" PARENT_SCOPE)
endfunction()

# Parses arguments to CHICKEN source wrapping functions. Internal.
macro(_chicken_parse_arguments)
    cmake_parse_arguments(compile
        "STATIC;SHARED;MODULE;IMPORT_MODULE;EMBEDDED;EXTENSION"
        "SUFFIX;ERROR_FILE"
        "SOURCES;C_SOURCES;EMIT_IMPORTS;OPTIONS;DEFINITIONS;DEPENDS"
        ${ARGN})

    # Assume everything not in the above lists of parsed arguments to be input
    # filenames.
    list(APPEND compile_SOURCES ${compile_UNPARSED_ARGUMENTS})

    # Add the suffix to the generated files to avoid conflicts when building
    # static and shared binaries simultaneously from the same source.
    if(compile_STATIC)
        set(compile_TYPE STATIC)
        set(compile_SUFFIX ".static${compile_SUFFIX}")
    elseif(compile_MODULE)
        set(compile_TYPE MODULE)
        # All modules are currently compiled as shared libraries.
        set(compile_SHARED TRUE)
    elseif(compile_IMPORT_MODULE)
        set(compile_SHARED TRUE)
        set(compile_TYPE MODULE)
    endif()
endmacro()

# Sets the 'out_var' to the list of include paths for the specified CHICKEN
# source file. Internal.
function(_chicken_get_include_paths out_var source_file)
    set(paths "")

    get_filename_component(source_path ${source_file} ABSOLUTE)
    get_filename_component(source_dir ${source_path} DIRECTORY)

    # First, try the directory of the source file if it is not the current
    # (which is used by default). Needed for (include "<file>") forms.
    if(NOT ${source_dir} STREQUAL ${CMAKE_CURRENT_BINARY_DIR})
        list(APPEND paths ${source_dir})
    endif()
    if(NOT ${source_dir} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
        list(APPEND paths ${CMAKE_CURRENT_SOURCE_DIR})
    endif()

    # then, search collected import libraries
    list(APPEND paths ${CHICKEN_IMPORT_DIR})

    # some eggs install files there, but it may be empty when bootstrapping
    if(CHICKEN_DATA_DIR)
        list(APPEND paths ${CHICKEN_DATA_DIR})
    endif()

    # then, try to add paths from user environment
    foreach(path $ENV{CHICKEN_INCLUDE_PATH})
        list(APPEND paths ${path})
    endforeach()

    # remove duplicates for nicer command lines in verbose mode
    list(REMOVE_DUPLICATES paths)

    set(${out_var} ${paths} PARENT_SCOPE)
endfunction()

# Sets the 'out_var' to the list of CHICKEN compiler options for the specified
# source file. Internal. Assumes that arguments were parsed.
function(_chicken_get_options out_var source_file)
    set(options ${CHICKEN_OPTIONS})

    if(compile_SHARED AND NOT compile_EMBEDDED)
        list(APPEND options -dynamic)
    endif()

    if(compile_STATIC)
        list(APPEND options -feature chicken-compile-static)
    endif()

    if(compile_SHARED)
        list(APPEND options -feature chicken-compile-shared)
    endif()

    if(compile_EXTENSION)
        list(APPEND options -feature compiling-extension)
    endif()

    _chicken_get_include_paths(includes ${source_file})

    foreach(path ${includes})
        list(APPEND options -include-path ${path})
    endforeach()

    foreach(emit ${compile_EMIT_IMPORTS})
        list(APPEND options -emit-import-library ${emit})
    endforeach()

    list(APPEND options ${compile_OPTIONS})

    set(${out_var} ${options} PARENT_SCOPE)
endfunction()

# Helper function for automatic dependecy extraction. Internal.
function(_chicken_extract_depends out_var dep_path)
    set(imports "")
    set(includes "")
    set(result "")

    include(${dep_path} OPTIONAL)

    if(imports)
        list(REMOVE_DUPLICATES imports)
    endif()
    if(includes)
        list(REMOVE_DUPLICATES includes)
    endif()

    foreach(i ${imports})
        list(APPEND result ${CHICKEN_IMPORT_DIR}/${i}.import.scm)
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

# Adds custom commands for calling the CHICKEN compiler and other housekeeping
# tasks for the specified source file, setting the 'out_var' to the resulting C
# source pathname. Internal.
function(_chicken_command out_var in_file)
    string(REGEX REPLACE
        "(.*)\\.scm$" "\\1${compile_SUFFIX}.chicken.c"
        out_file ${in_file})

    get_filename_component(in_path ${in_file} ABSOLUTE)
    get_filename_component(in_dir  ${in_path} PATH)

    if(IS_ABSOLUTE ${out_file})
        set(out_path ${out_file})
    else()
        # Cut off relative parts from the supplied input source pathname and
        # place the output file in the current binary dir to allow referencing
        # the same source file from different directories.
        get_filename_component(out_name ${out_file} NAME)
        get_filename_component(out_path ${CMAKE_CURRENT_BINARY_DIR}/${out_name} ABSOLUTE)
    endif()

    _chicken_get_options(options ${in_file})

    set(outputs ${out_path})
    set(imports "")

    foreach(emit ${compile_EMIT_IMPORTS})
        set(_filename ${CHICKEN_IMPORT_DIR}/${emit}.import.scm)
        list(APPEND outputs ${_filename})
        list(APPEND imports ${emit}.import.scm)
        set_property(SOURCE ${_filename} PROPERTY CHICKEN_IMPORT_LIBRARY YES)
    endforeach()

    get_property(import_library SOURCE ${in_file}
        PROPERTY CHICKEN_IMPORT_LIBRARY)

    if(CHICKEN_DEPENDS AND NOT import_library)
        string(REGEX REPLACE
            "(.*)\\.chicken.c$" "\\1.chicken.d"
            dep_path ${out_path})

        set(command_with_depends YES)
        set(dep_stamp ${dep_path}.stamp)

        # Generating dependencies on first pass speeds up clean build. Also
        # stamp trick is used to break dependency cycle: dep files are
        # included in this .cmake file, which causes the toplevel solution to
        # depend on them, which in turn causes all modules to depend on each
        # other (seems to affect Visual Studio the most).
        if(${in_path} IS_NEWER_THAN ${dep_path})
            message(STATUS "Extracting dependencies from: ${in_path}")
            execute_process(
                COMMAND ${CHICKEN_DEPENDS} ${in_path} ${dep_path}
                COMMAND ${CMAKE_COMMAND} -E touch ${dep_stamp})
        endif()

        set(xdepends "")
        _chicken_extract_depends(xdepends ${dep_path})
    endif()

    set(depends ${compile_DEPENDS} ${xdepends})

    set(chicken_command ${CHICKEN_COMPILER} ${in_path})

    if(compile_ERROR_FILE)
        set(out_path ${compile_ERROR_FILE})
        set(outputs ${out_path})
    else()
        list(APPEND chicken_command -output-file ${out_path})
    endif()

    list(APPEND chicken_command ${options})

    if(CHICKEN_PRINT_DEPENDS)
        if(import_library)
            message(STATUS "I ${in_file} => ${outputs}")
        else()
            message(STATUS "${in_file} => ${outputs}")
        endif()
        foreach(d ${compile_DEPENDS})
            message(STATUS "=\t${d}")
        endforeach()
        foreach(d ${xdepends})
            message(STATUS "+\t${d}")
        endforeach()
    endif()

    if(command_with_depends)
        add_custom_command(OUTPUT ${dep_stamp}
            COMMAND ${CHICKEN_DEPENDS} ${in_path} ${dep_path}
            COMMAND ${CMAKE_COMMAND} -E touch ${dep_stamp}
            COMMENT "Regenerating dependencies from: ${in_path}"
            MAIN_DEPENDENCY ${in_file} VERBATIM)
    endif()

    if(compile_ERROR_FILE OR CHICKEN_COMMAND_WRAP)
        add_custom_command(OUTPUT ${outputs}
            COMMAND ${CMAKE_COMMAND}
            "-DCOMMAND=${chicken_command}"
            "-DOUTPUT_FILE=${compile_ERROR_FILE}"
            "-DCHICKEN_REPOSITORY=${CHICKEN_REPOSITORY}"
            -P ${CHICKEN_RUN}
            MAIN_DEPENDENCY ${in_file}
            DEPENDS ${depends} VERBATIM)
    else()
        add_custom_command(OUTPUT ${outputs}
            COMMAND ${chicken_command}
            MAIN_DEPENDENCY ${in_file}
            DEPENDS ${depends} VERBATIM)
    endif()

    # Collect all generated import libraries into a single directory.
    foreach(filename ${imports})
        add_custom_command(OUTPUT ${outputs}
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    ${CMAKE_CURRENT_BINARY_DIR}/${filename}
                    ${CHICKEN_IMPORT_DIR}/${filename}
            VERBATIM APPEND)
    endforeach()

    set(${out_var} ${out_path} PARENT_SCOPE)
endfunction()

# Sets CHICKEN specific compile flags for the specified C source file.
# Internal. Assumes that arguments were parsed.
function(_chicken_add_compile_flags output_file input_file)
    set_property(SOURCE ${output_file} APPEND PROPERTY
        COMPILE_DEFINITIONS ${CHICKEN_DEFINITIONS} ${compile_DEFINITIONS})

    if(compile_SHARED)
        set_property(SOURCE ${output_file} APPEND PROPERTY
            COMPILE_DEFINITIONS PIC C_SHARED)
    endif()

    if(compile_EMBEDDED)
        set_property(SOURCE ${output_file} APPEND PROPERTY
            COMPILE_DEFINITIONS C_EMBEDDED)
    endif()

    set(c_flags ${CHICKEN_C_FLAGS})

    # For relative inline include paths
    if(input_file)
        get_filename_component(input_file ${input_file} ABSOLUTE)
        get_filename_component(input_path ${input_file} DIRECTORY)
        list(APPEND c_flags \"-I${input_path}\")
    endif()

    # For out of source builds
    if(NOT CMAKE_CURRENT_SOURCE_DIR STREQUAL input_path)
        list(APPEND c_flags \"-I${CMAKE_CURRENT_SOURCE_DIR}\")
    endif()

    foreach(directory ${CHICKEN_INCLUDE_DIRS})
        list(APPEND c_flags \"-I${directory}\")
    endforeach()

    list(REMOVE_DUPLICATES c_flags)

    # compile flags property can not handle list
    _chicken_join(c_flags ${c_flags})

    set_property(SOURCE ${output_file} APPEND_STRING PROPERTY
        COMPILE_FLAGS " ${c_flags}")
endfunction()

# Generates custom commands invoking CHICKEN compiler for the specified source
# files, adds necessary compiler flags. The resulting C source filepaths are
# added to the 'out_var'.
function(chicken_wrap_sources out_var)
    _chicken_parse_arguments(${ARGN})

    foreach(input_file ${compile_SOURCES})
        if(compile_IMPORT_MODULE)
            set_property(SOURCE ${input_file} PROPERTY
                CHICKEN_IMPORT_LIBRARY TRUE)
        endif()
        _chicken_command(output_file ${input_file})
        _chicken_add_compile_flags(${output_file} ${input_file})
        # Adding input files to the final source list shows them in IDEs.
        list(APPEND ${out_var} ${output_file} ${input_file})
    endforeach()

    foreach(source_file ${compile_C_SOURCES})
        _chicken_add_compile_flags(${source_file} ${source_file})
        list(APPEND ${out_var} ${source_file})
    endforeach()

    set(${out_var} ${${out_var}} PARENT_SCOPE)
endfunction()

# Convenience wrapper around add_executable.
function(add_chicken_executable name)
    set(sources "")
    chicken_wrap_sources(sources ${ARGN})
    add_executable(${name} ${sources})
endfunction()

# Convenience wrapper around add_library.
function(add_chicken_library name)
    _chicken_parse_arguments(${ARGN})

    set(sources "")
    chicken_wrap_sources(sources ${compile_TYPE} ${ARGN})

    add_library(${name} ${compile_TYPE} ${sources})

    set_property(TARGET ${name} PROPERTY
        DEFINE_SYMBOL C_BUILDING_LIBCHICKEN)

    set_property(TARGET ${name} PROPERTY
        LIBRARY_OUTPUT_DIRECTORY ${CHICKEN_REPOSITORY})

    if(compile_MODULE OR compile_IMPORT_MODULE)
        set_target_properties(${name} PROPERTIES
            PREFIX "")

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

    target_link_libraries(${name} ${CHICKEN_LIBRARIES})

    if(CHICKEN_BUILD_IMPORTS)
        foreach(m ${compile_EMIT_IMPORTS})
            add_chicken_library(${m}.import MODULE
                SOURCES ${CHICKEN_IMPORT_DIR}/${m}.import.scm)
            target_link_libraries(${m}.import ${CHICKEN_LIBRARIES})
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
