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

# used internally for build-specific files
set(CHICKEN_TMP_DIR ${CMAKE_BINARY_DIR}/_chicken)

# The generated import libraries are collected into these directories which are
# also added as include path to every command. Useful when compiling multiple
# modules in various project subdirectories to not force user to hunt them down
# along with dependencies and add include paths manually.
set(CHICKEN_IMPORT_LIBRARY_DIR ${CHICKEN_TMP_DIR}/import)

# All compiled CHICKEN libraries are placed here.
set(CHICKEN_LOCAL_REPOSITORY ${CHICKEN_TMP_DIR}/repository)

# Joins all supplied arguments into a single string separated by space. Also
# strips leading and trailing spaces. There is built-in JOIN generator
# expression with similar function but it can be used only in certain command
# arguments which is not always applicable.
function(_chicken_join out_var)
    set(result)

    foreach(arg ${ARGN})
        set(result "${result} ${arg}")
    endforeach()
    string(STRIP "${result}" result)

    set(${out_var} ${result} PARENT_SCOPE)
endfunction()

# Parses arguments to CHICKEN source wrapping functions. Internal.
macro(_chicken_parse_arguments)
    cmake_parse_arguments(compile
        "STATIC;SHARED;MODULE;EMBEDDED;EXTENSION;NO_RUNTIME"
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
    else()
        set(compile_TYPE SHARED)
    endif()
endmacro()

# Sets the 'out_var' to the list of include paths for the specified CHICKEN
# source file. Internal.
function(_chicken_get_include_paths out_var source_file)
    set(paths)

    get_filename_component(source_path ${source_file} ABSOLUTE)
    get_filename_component(source_dir ${source_path} DIRECTORY)

    # First, try the directory of the source file if it is not the current
    # (which is used by default). Needed for (include "<file>") forms.
    if(NOT ${source_dir} STREQUAL ${CMAKE_CURRENT_BINARY_DIR})
        list(APPEND paths ${source_dir})
    endif()

    # then, search collected import libraries
    list(APPEND paths ${CHICKEN_IMPORT_LIBRARY_DIR})

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

# Sets the 'out_var' to the list of import library filenames corresponding to
# the names given as arguments. Internal.
function(_chicken_get_import_libraries out_var)
    set(libs)

    foreach(emit ${ARGN})
        list(APPEND libs ${emit}.import.scm)
    endforeach()

    set(${out_var} ${libs} PARENT_SCOPE)
endfunction()

# Sets CHICKEN specific compile definitions for the specified C source file.
# Internal. Assumes that arguments were parsed.
function(_chicken_set_compile_definitions source_file)
    if(compile_SHARED)
        set_property(SOURCE ${source_file} APPEND PROPERTY
            COMPILE_DEFINITIONS C_SHARED)
    endif()

    if(compile_EMBEDDED)
        set_property(SOURCE ${source_file} APPEND PROPERTY
            COMPILE_DEFINITIONS C_EMBEDDED)
    endif()
endfunction()

# Sets generic options for the specified CHICKEN source file.
# Internal. Assumes that arguments were parsed.
function(_chicken_set_compile_options source_file)
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

    list(APPEND options ${compile_OPTIONS})

    set_property(SOURCE ${source_file} PROPERTY
        CHICKEN_OPTIONS ${options})
endfunction()

# Appends emit-import-library options to the specified CHICKEN source file
# corresponding to the names given as arguments. Internal.
function(_chicken_append_emit_options source_file)
    foreach(emit ${ARGN})
        set_property(SOURCE ${source_file} APPEND PROPERTY
            CHICKEN_OPTIONS -emit-import-library ${emit})
    endforeach()
endfunction()

# Appends include-path options to the specified CHICKEN source file
# corresponding to the paths given as arguments. Internal.
function(_chicken_append_include_path_options source_file)
    foreach(arg ${ARGN})
        set_property(SOURCE ${source_file} APPEND PROPERTY
            CHICKEN_OPTIONS -include-path ${arg})
    endforeach()
endfunction()

# Helper function for automatic dependecy extraction. Internal.
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

# Adds custom commands for calling the CHICKEN compiler and other housekeeping
# tasks for the specified source file, setting the 'out_var' to the resulting C
# source pathname. Internal.
function(_chicken_command out_var in_file)
    string(REGEX REPLACE
        "(.*)\\.scm$" "\\1${compile_SUFFIX}.chicken.c"
        out_file ${in_file})

    # The custom commands have sensible defaults for relative input and output
    # paths which makes verbose mode look cleaner but we need absolute paths
    # for other logic anyway, so the sources are always refereced by absolute
    # pathnames to avoid ambiguity.

    get_filename_component(in_path ${in_file} ABSOLUTE)

    if(IS_ABSOLUTE ${out_file})
        set(out_path ${out_file})
    else()
        # Cut off relative parts from the supplied input source pathname and
        # place the output file in the current binary dir to allow referencing
        # the same source file from different directories.
        get_filename_component(out_name ${out_file} NAME)
        get_filename_component(out_path ${CMAKE_CURRENT_BINARY_DIR}/${out_name} ABSOLUTE)
    endif()

    _chicken_get_include_paths(includes ${in_file})
    _chicken_get_import_libraries(imports ${compile_EMIT_IMPORTS})

    _chicken_set_compile_options(${in_file})
    _chicken_append_include_path_options(${in_file} ${includes})
    _chicken_append_emit_options(${in_file} ${compile_EMIT_IMPORTS})

    set(outputs ${out_path})

    foreach(filename ${imports})
        list(APPEND outputs ${CHICKEN_IMPORT_LIBRARY_DIR}/${filename})
        set_property(SOURCE ${CHICKEN_IMPORT_LIBRARY_DIR}/${filename}
            PROPERTY CHICKEN_IMPORT_LIBRARY YES)
    endforeach()

    get_property(options SOURCE ${in_file}
        PROPERTY CHICKEN_OPTIONS)
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
                    ${CHICKEN_IMPORT_LIBRARY_DIR}/${filename}
            VERBATIM APPEND)
    endforeach()

    set(${out_var} ${out_path} PARENT_SCOPE)
endfunction()

# Used by other add_chicken... functions, can be used directly to pass file
# specific options or build source lists incrementally.
function(add_chicken_sources out_var)
    _chicken_parse_arguments(${ARGN})

    foreach(arg ${compile_SOURCES})
        _chicken_command(out_file ${arg})
        _chicken_set_compile_definitions(${out_file})
        list(APPEND ${out_var} ${out_file})
    endforeach()

    foreach(src ${compile_C_SOURCES})
        _chicken_set_compile_definitions(${src})
        list(APPEND ${out_var} ${src})
    endforeach()

    # TODO: need some other way to show them in IDE but not in out_var
    # list(APPEND ${out_var} ${compile_SOURCES})
    set(${out_var} ${${out_var}} PARENT_SCOPE)
endfunction()

function(wrap_chicken_target target)
    _chicken_parse_arguments(${ARGN})

    target_compile_definitions(${target} PRIVATE ${CHICKEN_DEFINITIONS})

    if(NOT compile_STATIC)
        target_compile_definitions(${target} PRIVATE PIC)
    endif()

    if(compile_NO_RUNTIME)
        target_link_libraries(${target} ${CHICKEN_EXTRA_LIBRARIES})
    else()
        if(compile_STATIC)
            target_link_libraries(${target} ${CHICKEN_STATIC_LIBRARIES})
        else()
            target_link_libraries(${target} ${CHICKEN_LIBRARIES})
        endif()
    endif()

    target_compile_options(${target} PRIVATE ${CHICKEN_C_FLAGS})

    if(UNIX)
        target_compile_options(${target} PRIVATE
            -Wno-unused-variable -Wno-unused-function)
    endif()

    # This is necessary to resolve inline CPP include declarations because
    # generated files are not placed alongside the corresponding scm in case of
    # out of tree build.
    if(NOT CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR)
        target_include_directories(${target} PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR})
    endif()

    target_include_directories(${target} PRIVATE
        ${CHICKEN_INCLUDE_DIRS})
endfunction()

# Convenience wrapper around add_executable.
function(add_chicken_executable name)
    cmake_parse_arguments(type "STATIC;SHARED" "" "" ${ARGN})

    if(type_STATIC)
        set(type STATIC)
    else()
        set(type SHARED)
    endif()

    set(sources)
    add_chicken_sources(sources ${type_UNPARSED_ARGUMENTS})

    add_executable(${name} ${sources})
    wrap_chicken_target(${name} ${type})
endfunction()

# Convenience wrapper around add_library.
function(add_chicken_library name)
    _chicken_parse_arguments(${ARGN})

    set(sources)
    add_chicken_sources(sources ${compile_TYPE} ${ARGN})

    add_library(${name} ${compile_TYPE} ${sources})
    wrap_chicken_target(${name} ${compile_TYPE})

    set_property(TARGET ${name} PROPERTY
        LIBRARY_OUTPUT_DIRECTORY ${CHICKEN_LOCAL_REPOSITORY})
    if(compile_STATIC OR compile_SHARED)
        set_target_properties(${name} PROPERTIES FOLDER "Libraries")
    elseif(compile_MODULE)
        set_target_properties(${name} PROPERTIES FOLDER "Modules")
    endif()

    if(compile_MODULE)
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

    if(CHICKEN_BUILD_IMPORTS)
        foreach(m ${compile_EMIT_IMPORTS})
            add_chicken_library(${m}.import MODULE
                SOURCES ${CHICKEN_IMPORT_LIBRARY_DIR}/${m}.import.scm)
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
