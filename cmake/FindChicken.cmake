# - Find Chicken

include(FindPackageMessage)
include(FindPackageHandleStandardArgs)
include(FeatureSummary)

# Always enable C first to be sure various cached variables are in place which
# might be used later in scripts.
enable_language(C)

set_package_properties(Chicken PROPERTIES
    DESCRIPTION "A practical and portable Scheme system"
    URL "http://call-cc.org")

# Used for guessing repository location if everything else fails.
set(CHICKEN_API_VERSION 7 CACHE STRING
    "Chicken API version")
mark_as_advanced(CHICKEN_API_VERSION)

option(CHICKEN_BUILD_IMPORTS "Compile generated import libraries" YES)
option(CHICKEN_EMIT_TYPES "Generate files with type declarations" NO)
option(CHICKEN_EMIT_INLINES "Generate files with globally inlinable procedures" NO)
option(CHICKEN_COMMAND_WRAP "Wrap chicken command" NO)
option(CHICKEN_EXTRACT_DEPENDS "Automatically extract source file dependencies" NO)
mark_as_advanced(CHICKEN_EMIT_TYPES CHICKEN_EMIT_INLINES
    CHICKEN_COMMAND_WRAP CHICKEN_EXTRACT_DEPENDS)

# There are 3 usual settings for system variables:
# 1) building Chicken for the current machine - do not change anything
# 2) building "cross" Chicken, that will generate C files for another
#    architecture, but still running on the current machine - set target system
#    for this case
# 3) cross-compiling Chicken: you will need to build cross Chicken first, then
#    use it to generate C files which are built by a cross-compiler - set host
#    system to the identifier of the cross chicken
# More complex combinations are possible. Specifically: source files are
# generated for the target system, using the host system Chicken and built
# by system cross-compiler (linked with its libchicken).

# used internally for build-specific files
set(CHICKEN_TMP_DIR ${CMAKE_BINARY_DIR}/_chicken)

set(CHICKEN_SYSTEM "" CACHE STRING
    "A compiler identifier of the build system")
set(CHICKEN_HOST_SYSTEM ${CHICKEN_SYSTEM} CACHE STRING
    "A compiler identifier of the host system (that will run the executables)")
set(CHICKEN_TARGET_SYSTEM ${CHICKEN_HOST_SYSTEM} CACHE STRING
    "A compiler identifier of the target system (for generated C files)")
mark_as_advanced(CHICKEN_SYSTEM CHICKEN_HOST_SYSTEM CHICKEN_TARGET_SYSTEM)

# convenience variables for concatenation with paths and names
if(CHICKEN_SYSTEM)
    set(_chicken_system "${CHICKEN_SYSTEM}-")
endif()
if(CHICKEN_HOST_SYSTEM)
    set(_chicken_host_system "${CHICKEN_HOST_SYSTEM}-")
endif()
if(CHICKEN_TARGET_SYSTEM)
    set(_chicken_target_system "${CHICKEN_TARGET_SYSTEM}-")
endif()

# Do not show error messages if the package was not found: there might be no
# CMake aware Chicken installed or we are cross-compiling, try to quetly guess
# the paths instead, this can also pull config file from install prefix, but it
# should not cause any harm.
find_package(Chicken CONFIG QUIET
    NAMES ${_chicken_system}chicken)

if(NOT Chicken_FOUND)
    find_package_message(CHICKEN_CONFIG
        "Chicken package config is not found, guessing defaults."
        "${Chicken_FOUND}")

    find_path(CHICKEN_DATA_DIR setup.defaults
        PATHS $ENV{CHICKEN_PREFIX}/share /usr/local/share /usr/share
        PATH_SUFFIXES ${_chicken_system}chicken)

    find_path(CHICKEN_EXTENSION_DIR types.db
        PATHS $ENV{CHICKEN_REPOSITORY}
        NO_DEFAULT_PATH)

    find_path(CHICKEN_EXTENSION_DIR types.db
        PATHS $ENV{CHICKEN_PREFIX}/lib /usr/local/lib /usr/lib
        PATH_SUFFIXES ${_chicken_system}chicken/${CHICKEN_API_VERSION})
endif()

# host prefixed executables are searched as per convention to name cross
# compilers by the target system

# Chicken compiler - used to generate C files from scm, required.
find_program(CHICKEN_EXECUTABLE
    NAMES ${_chicken_host_system}chicken)

# May be used in extension setup scripts.
find_program(CHICKEN_CSI_EXECUTABLE
    NAMES ${_chicken_host_system}csi)

# Used to download extensions if not found in source directory.
find_program(CHICKEN_INSTALL_EXECUTABLE
    NAMES ${_chicken_host_system}chicken-install)

# Used for automatic dependency extraction during build.
find_file(CHICKEN_EXTRACT_SCRIPT extract-depends.scm
    HINTS ${CHICKEN_DATA_DIR})

# Use include files and libraries from the system the final compiled
# executables are intended to run on.

find_path(CHICKEN_INCLUDE_DIR chicken.h
    HINTS ${CHICKEN_INCLUDE_DIR}
    PATH_SUFFIXES ${_chicken_system}chicken)

find_library(CHICKEN_LIBRARY ${_chicken_system}chicken
    HINTS ${CHICKEN_LIBRARY_DIR})

# Determine the location of the static library based on the location of the
# just found dynamic library. This is needed to avoid picking libraries from
# some other Chicken in the default paths.
get_filename_component(_chicken_library_dir ${CHICKEN_LIBRARY} PATH)
find_library(CHICKEN_STATIC_LIBRARY lib${_chicken_system}chicken.a
    HINTS ${_chicken_library_dir}
    NO_SYSTEM_ENVIRONMENT_PATH
    NO_CMAKE_SYSTEM_PATH)

if(WIN32)
    # TODO: add check for x64
    set(CHICKEN_EXTRA_LIBRARIES ws2_32)
else()
    set(CHICKEN_EXTRA_LIBRARIES m)
endif()
list(APPEND CHICKEN_EXTRA_LIBRARIES ${CMAKE_DL_LIBS})

# These used to be options, but caused various problems and are hardcoded for
# now.
set(CHICKEN_DEFINITIONS HAVE_CHICKEN_CONFIG_H C_ENABLE_PTABLES)
if(MSVC)
    # Chicken causes a lot of these
    list(APPEND CHICKEN_DEFINITIONS _CRT_SECURE_NO_WARNINGS)
endif()

if(MSVC)
    # C4101 - unreferenced local variable
    # C4996 - The POSIX name for this item is deprecated
    set(_chicken_c_flags /wd4101 /wd4996)
else()
    # Felix wrote, that these are required. Strict aliasing caused some real
    # problems and wrapv disables some questionable aggressive compiler
    # optimizations with regard to signed integer overflow.
    set(_chicken_c_flags -fno-strict-aliasing -fwrapv)
endif()

set(CHICKEN_C_FLAGS ${_chicken_c_flags} CACHE STRING
    "C compiler flags which are added to every file generated by Chicken")
mark_as_advanced(CHICKEN_C_FLAGS)

# CMake module guide recommends to use plural variable names for consistency.
set(CHICKEN_INCLUDE_DIRS ${CHICKEN_INCLUDE_DIR})
set(CHICKEN_LIBRARIES ${CHICKEN_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})
set(CHICKEN_STATIC_LIBRARIES ${CHICKEN_STATIC_LIBRARY} ${CHICKEN_EXTRA_LIBRARIES})

# We may need to wrap actual executables for some platforms, so it is
# recommended to use these logical names in extension setup scripts.
set(CHICKEN_COMPILER ${CHICKEN_EXECUTABLE})
set(CHICKEN_INTERPRETER ${CHICKEN_CSI_EXECUTABLE} -R chicken-syntax)

set(CHICKEN_RUN ${CHICKEN_TMP_DIR}/ChickenRun.cmake)
set(CMAKE_CONFIGURABLE_FILE_CONTENT
"if(CHICKEN_REPOSITORY)
  set(ENV{CHICKEN_REPOSITORY} \${CHICKEN_REPOSITORY})
endif()
#message(\"CHICKEN: \${CHICKEN_COMMAND}\")
if(ERROR_FILE)
    if(NOT IS_ABSOLUTE ERROR_FILE)
        set(ERROR_FILE \${CMAKE_CURRENT_BINARY_DIR}/\${ERROR_FILE})
    endif()
    execute_process(COMMAND \${CHICKEN_COMMAND}
        RESULT_VARIABLE CHICKEN_COMMAND_RESULT
        OUTPUT_VARIABLE command_output
        ERROR_VARIABLE command_output)
    file(WRITE \${ERROR_FILE} \"\${command_output}\")
else()
    execute_process(COMMAND \${CHICKEN_COMMAND}
        RESULT_VARIABLE CHICKEN_COMMAND_RESULT)
endif()
if(CHICKEN_COMMAND_RESULT)
    message(\"\${command_output}\")
    message(FATAL_ERROR \"Command failed: \${CHICKEN_COMMAND_RESULT}\")
endif()")
configure_file(${CMAKE_ROOT}/Modules/CMakeConfigurableFile.in
    ${CHICKEN_RUN} @ONLY)

# Consider Chicken found if we determined that at least the executable is
# available. Probably more comprehensive logic is needed to warn a user that
# configuration is incomplete but it causes problems when bootstrapping.
find_package_handle_standard_args(Chicken DEFAULT_MSG CHICKEN_EXECUTABLE)

# Detailed information useful when cross-compiling or debugging setup scripts. 
find_package_message(CHICKEN_CSI_EXECUTABLE
    "  CHICKEN_CSI_EXECUTABLE: ${CHICKEN_CSI_EXECUTABLE}"
    "${CHICKEN_CSI_EXECUTABLE}")
find_package_message(CHICKEN_INCLUDE_DIR
    "  CHICKEN_INCLUDE_DIR: ${CHICKEN_INCLUDE_DIR}"
    "${CHICKEN_INCLUDE_DIR}")
find_package_message(CHICKEN_LIBRARY
    "  CHICKEN_LIBRARY: ${CHICKEN_LIBRARY} (${CHICKEN_EXTRA_LIBRARIES})"
    "${CHICKEN_LIBRARY}")
find_package_message(CHICKEN_STATIC_LIBRARY
    "  CHICKEN_STATIC_LIBRARY: ${CHICKEN_STATIC_LIBRARY}"
    "${CHICKEN_STATIC_LIBRARY}")
find_package_message(CHICKEN_DATA_DIR
    "  CHICKEN_DATA_DIR: ${CHICKEN_DATA_DIR}"
    "${CHICKEN_DATA_DIR}")
find_package_message(CHICKEN_EXTENSION_DIR
    "  CHICKEN_EXTENSION_DIR: ${CHICKEN_EXTENSION_DIR}"
    "${CHICKEN_EXTENSION_DIR}")

# Various macros for user CMakeLists.
include(${CMAKE_CURRENT_LIST_DIR}/ChickenUse.cmake)
