# - Chicken Use Module

include(CMakeParseArguments)

# used internally for build-specific files
set(CHICKEN_TMP_DIR ${CMAKE_BINARY_DIR}/_chicken)

# The generated import libraries are collected to these directories which are
# also added as include path to every command. Useful when compiling multiple
# modules in various project subdirectories to not force user to hunt them
# down along with dependencies and add include paths manually.
set(CHICKEN_IMPORT_LIBRARY_DIR ${CHICKEN_TMP_DIR}/import)
set(CHICKEN_IMPORT_LIBRARY_BINARY_DIR ${CHICKEN_TMP_DIR}/import_bin)

# A lot of flexibility here. Maybe too much.
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
    set(command_import_libraries)

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
        list(APPEND command_import_libraries ${emit}.import.scm)
    endforeach()
    list(APPEND command_output ${command_import_libraries})

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

# This function is called after every custom command to add necessary rules
# for collecting import libraries to single directory.
function(_chicken_add_import_library_copy_targets)
    foreach(lib ${ARGN})
        add_custom_command(
            OUTPUT ${CHICKEN_IMPORT_LIBRARY_DIR}/${lib}
            COMMAND ${CMAKE_COMMAND} -E copy
                ${CMAKE_CURRENT_BINARY_DIR}/${lib}
                ${CHICKEN_IMPORT_LIBRARY_DIR}/${lib}
            DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/${lib}
            VERBATIM)
        string(MAKE_C_IDENTIFIER copy_${lib} target_name)
        add_custom_target(${target_name} ALL
            DEPENDS ${CHICKEN_IMPORT_LIBRARY_DIR}/${lib})
    endforeach()
endfunction()

# This is main custom command generating function.
function(_chicken_command out_var in_filename)
    # set the variable empty just in case, because it later appended to
    set(include_paths "")

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

        get_filename_component(dep_dir ${dep_location} DIRECTORY)
        get_filename_component(dep_name ${dep_location} NAME_WE)
        get_filename_component(dep_types "${dep_dir}/${dep_name}.types" ABSOLUTE)
        get_filename_component(dep_inline "${dep_dir}/${dep_name}.inline" ABSOLUTE)

        if(EXISTS ${dep_types} AND CHICKEN_EMIT_TYPES)
            list(APPEND command_options -types ${dep_types})
            list(APPEND command_depends ${dep_types})
        endif()

        if(EXISTS ${dep_inline} AND CHICKEN_EMIT_INLINES)
            list(APPEND command_options -consult-inline-file ${dep_inline})
            list(APPEND command_depends ${dep_inline})
        endif()
    endforeach()

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

    # Add global C flags, determined by find package, then command specific
    # flags added by the user.
    set(c_flags "${CHICKEN_C_FLAGS} ${command_c_flags}")

    # Add the directory of the source file (needed to properly resolve inline
    # C include declarations.
    if(NOT in_path STREQUAL CMAKE_CURRENT_BINARY_DIR)
        set(c_flags "${c_flags} -I\"${in_path}\"")
    endif()

    # Then add global include paths (system chicken.h and chicken-config.h).
    if(CHICKEN_INCLUDE_DIRS)
        set(c_flags "${c_flags} -I\"${CHICKEN_INCLUDE_DIRS}\"")
    endif()

    # Append these flags to every C file generated by Chicken.
    set_property(SOURCE ${out_filename} APPEND_STRING PROPERTY
        COMPILE_FLAGS " ${c_flags}")

    # The main generating command. Note the options order.
    add_custom_command(
        OUTPUT ${out_filename} ${command_output}
        COMMAND ${CHICKEN_EXECUTABLE}
            ${in_filename} -output-file ${out_filename}
            ${CHICKEN_OPTIONS} ${command_options} $ENV{CHICKEN_OPTIONS}
        DEPENDS ${in_filename} ${compile_DEPENDS} ${command_depends}
        VERBATIM)

    # collect import libraries
    _chicken_add_import_library_copy_targets(${command_import_libraries})

    # place the name of the resulting C file in the specified variable
    set(${out_var} ${out_filename} PARENT_SCOPE)
endfunction()

# Used by other add_chicken... functions, can be used directly for complex
# cases.
function(add_chicken_sources out_var)
    _chicken_parse_arguments(${ARGN})
    foreach(arg ${compile_SOURCES})
        _chicken_command(out_filename ${arg})
        list(APPEND ${out_var} ${out_filename})
    endforeach()
    list(APPEND ${out_var} ${compile_C_SOURCES})
    set(${out_var} ${${out_var}} PARENT_SCOPE)
endfunction()

# Convenience wrapper around add_executable.
function(add_chicken_executable name)
    _chicken_parse_arguments(${ARGN})
    set(sources)
    add_chicken_sources(sources ${ARGN})
    add_executable(${name} ${sources})
    if(compile_STATIC)
        target_link_libraries(${name} ${CHICKEN_STATIC_LIBRARIES})
    else()
        target_link_libraries(${name} ${CHICKEN_LIBRARIES})
    endif()
endfunction()

# Convenience wrapper around add_library.
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
    if(compile_STATIC)
        target_link_libraries(${name} ${CHICKEN_STATIC_LIBRARIES})
    else()
        target_link_libraries(${name} ${CHICKEN_LIBRARIES})
    endif()
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

# Even more convenient wrapper for compiling Chicken modules along with import
# libraries.
function(add_chicken_module name)
    _chicken_parse_arguments(MODULE ${ARGN})
    if(NOT compile_EMIT_IMPORT_LIBRARIES)
        set(compile_EMIT_IMPORT_LIBRARIES ${name})
    endif()
    add_chicken_library(${name} ${ARGN} MODULE
        EMIT_IMPORT_LIBRARIES ${compile_EMIT_IMPORT_LIBRARIES})
    foreach(lib ${compile_EMIT_IMPORT_LIBRARIES})
        set(lib_target ${lib}.import)
        set(import_filename "${CMAKE_CURRENT_BINARY_DIR}/${lib}.import.scm")
        add_chicken_library(${lib_target} ${import_filename} MODULE
            C_FLAGS ${compile_C_FLAGS})
        # ensure that import libraries are built after module, so that
        # targets depending on import pull generating module too, this is
        # needed to properly compile import-for-syntax and such forms
        add_dependencies(${lib_target} ${name})
        set_property(TARGET ${lib_target} PROPERTY
            LIBRARY_OUTPUT_DIRECTORY ${CHICKEN_IMPORT_LIBRARY_BINARY_DIR})
    endforeach()
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
