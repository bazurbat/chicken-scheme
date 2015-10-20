cmake_minimum_required(VERSION 2.8.12)

if(POLICY CMP0048)
    # The project() command manages VERSION variables
    cmake_policy(SET CMP0048 NEW)
endif()

set(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake)
set(CMAKE_USER_MAKE_RULES_OVERRIDE ${CMAKE_MODULE_PATH}/ChickenPlatformOverride.cmake)

set(CMAKE_MACOSX_RPATH YES)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include(CMakeDependentOption)

project(chicken C ASM)

option(BUILD_SHARED_LIBS "Build shared libraries" YES)
option(BUILD_STATIC_LIBS "Build static libraries" NO)
mark_as_advanced(BUILD_SHARED_LIBS BUILD_STATIC_LIBS)

cmake_dependent_option(BUILD_STATIC_PROGRAMS "Build static programs" YES
    "BUILD_STATIC_LIBS" NO)
mark_as_advanced(BUILD_STATIC_PROGRAMS)

option(CHICKEN_BOOTSTRAP "Bootstrap build" YES)
mark_as_advanced(CHICKEN_BOOTSTRAP)

set(CHICKEN_INSTALL_NAME chicken CACHE STRING
    "The name of CHICKEN library and directories")
mark_as_advanced(CHICKEN_INSTALL_NAME)

set(CHICKEN_TARGET_NAME  ${CHICKEN_INSTALL_NAME} CACHE STRING
    "The name of target CHICKEN library and directories")
set(CHICKEN_TARGET_FEATURES "" CACHE STRING
    "Target features")
mark_as_advanced(CHICKEN_TARGET_NAME CHICKEN_TARGET_FEATURES)

set(CHICKEN_IMPORT_FOLDER "Import Libraries")

enable_testing()
add_custom_target(BUILD_TESTS)

find_package(Chicken REQUIRED)

if(WIN32)
    # Windows tries to load shared libraries from the same directory where
    # the executable is placed. To bootstrap properly we need this to use the
    # just compiled runtime.
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_PDB_OUTPUT_DIRECTORY     ${PROJECT_BINARY_DIR})
elseif(XCODE_VERSION)
    # Generated Xcode projects assume this by default
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CHICKEN_REPOSITORY             ${PROJECT_BINARY_DIR}/build)
endif()


set(CHICKEN_RUN      ${CMAKE_SOURCE_DIR}/cmake/ChickenRun.cmake)
set(CHICKEN_TYPES_DB ${CMAKE_SOURCE_DIR}/types.db)
set(CHICKEN_DEPENDS  ${CHICKEN_INTERPRETER} -ss
    ${CMAKE_CURRENT_LIST_DIR}/chicken-depends.scm)

include(ChickenConfigure)

set(CHICKEN_OPTIONS -optimize-level 2 -inline -ignore-repository -feature chicken-bootstrap)
set(LIBRARY_OPTIONS -explicit-use -no-trace)
set(PROGRAM_OPTIONS -no-lambda-info)
set(IMPORT_LIBRARY_OPTIONS -no-trace)
set(COMPILER_OPTIONS -extend private-namespace.scm)

if(DEFINED DEBUGBUILD)
    list(APPEND CHICKEN_OPTIONS -feature debugbuild -verbose)
else()
    list(APPEND CHICKEN_OPTIONS -no-warnings)
    list(APPEND PROGRAM_OPTIONS -no-trace)
endif()

set(runtime_GENERIC_MODULES
    )

set(runtime_CHICKEN_MODULES
    )

if(WIN32)
    set(runtime_POSIX_MODULE posixwin)
else()
    set(runtime_POSIX_MODULE posixunix)
endif()

set(compiler_MODULES
    )

set(chicken_MODULES
    chicken
    csi
    data-structures
    extras
    files
    foreign
    irregex
    lolevel
    ports
    posix
    srfi-1
    srfi-13
    srfi-14
    srfi-18
    srfi-4
    srfi-69
    tcp
    utils)

function(add_chicken_primitive_modules)
    set(modules chicken chicken.foreign)
    set(depends "")

    if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/chicken.foreign.import.scm)
        return()
    endif()

    foreach(module ${modules})
        set(filename ${module}.import.scm)
        set(output ${CHICKEN_IMPORT_DIR}/${filename})
        add_custom_command(OUTPUT ${output}
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                        ${CMAKE_CURRENT_SOURCE_DIR}/${filename}
                        ${CHICKEN_IMPORT_DIR}/${filename}
            VERBATIM)
        list(APPEND depends ${output})
    endforeach()

    add_custom_target(deploy-primitive-modules${ARGV0} ALL
        DEPENDS ${depends})
endfunction()

function(add_chicken_runtime name)
    cmake_parse_arguments(runtime "STATIC;SHARED" "SUFFIX" "OPTIONS" ${ARGN})

    if(runtime_STATIC)
        set(type STATIC)
    else()
        set(type SHARED)
        set(runtime_SHARED TRUE)
    endif()

    set(options ${runtime_OPTIONS})
    set(sources "")

    set(scm_sources
        ${runtime_POSIX_MODULE}.scm
        build-version.scm
        chicken-ffi-syntax.scm
        chicken-syntax.scm
        data-structures.scm
        eval.scm
        expand.scm
        extras.scm
        files.scm
        irregex.scm
        library.scm
        lolevel.scm
        modules.scm
        ports.scm
        profiler.scm
        scheduler.scm
        srfi-1.scm
        srfi-13.scm
        srfi-14.scm
        srfi-18.scm
        srfi-4.scm
        stub.scm
        tcp.scm
        utils.scm)

    set(c_sources chicken.h runtime.c ${CHICKEN_APPLY_HACK})

    foreach(module ${runtime_GENERIC_MODULES})
        chicken_wrap_sources(sources
            SUFFIX ${runtime_SUFFIX}
            SOURCES ${module}.scm
            EMIT_IMPORTS ${module}
            OPTIONS ${options})
    endforeach()

    foreach(module ${runtime_CHICKEN_MODULES})
        chicken_wrap_sources(sources
            SUFFIX ${runtime_SUFFIX}
            SOURCES ${module}.scm
            EMIT_IMPORTS chicken.${module}
            OPTIONS ${options})
    endforeach()

    chicken_wrap_sources(sources
        SUFFIX ${runtime_SUFFIX}
        SOURCES ${scm_sources}
        OPTIONS ${options})

    chicken_wrap_sources(sources
        SUFFIX ${runtime_SUFFIX}
        SOURCES srfi-69.scm
        OPTIONS ${options} ${COMPILER_OPTIONS})

    add_library(${name} ${type} ${sources} ${c_sources})
    chicken_wrap_target(${name} ${type} NO_RUNTIME)

    set_target_properties(${name} PROPERTIES
        PREFIX "")

    if(runtime_SHARED)
        if(APPLE OR ANDROID)
        elseif(UNIX)
            set_target_properties(${name} PROPERTIES
                OUTPUT_NAME ${name}${CMAKE_SHARED_LIBRARY_SUFFIX}.${CHICKEN_API_VERSION})
        endif()
    endif()
endfunction()

function(add_chicken_compiler name)
    cmake_parse_arguments(compiler
        "STATIC" "SUFFIX;OUTPUT_NAME" "OPTIONS" ${ARGN})

    if(compiler_STATIC)
        set(type STATIC)
    endif()

    if(NOT compiler_OUTPUT_NAME)
        set(compiler_OUTPUT_NAME ${name})
    endif()

    set(options ${compiler_OPTIONS})
    set(sources "")

    set(scm_sources
        batch-driver.scm
        c-backend.scm
        c-platform.scm
        chicken.scm
        compiler-syntax.scm
        compiler.scm
        lfa2.scm
        optimizer.scm
        scrutinizer.scm
        support.scm)

    foreach(module ${compiler_MODULES})
        chicken_wrap_sources(sources ${type}
            SUFFIX ${compiler_SUFFIX}
            SOURCES ${module}.scm
            EMIT_IMPORTS chicken.compiler.${module}
            OPTIONS ${options})
    endforeach()

    chicken_wrap_sources(sources
        SUFFIX ${compiler_SUFFIX}
        SOURCES ${scm_sources}
        OPTIONS ${options} ${COMPILER_OPTIONS})

    add_executable(${name} ${sources})
    chicken_wrap_target(${name} ${type})

    set_target_properties(${name} PROPERTIES
        OUTPUT_NAME ${compiler_OUTPUT_NAME})
endfunction()

function(add_stage name out_compiler)
    set(suffix ".${name}")

    set(CHICKEN_IMPORT_DIR ${CHICKEN_IMPORT_DIR}${suffix})

    add_chicken_primitive_modules(${suffix})

    add_chicken_runtime(libchicken${suffix} STATIC
        SUFFIX ${suffix}
        OPTIONS ${LIBRARY_OPTIONS})

    set(CHICKEN_STATIC_LIBRARY libchicken${suffix})

    add_chicken_compiler(chicken-compiler${suffix} STATIC
        SUFFIX ${suffix}
        OPTIONS ${PROGRAM_OPTIONS})

    set_property(TARGET libchicken${suffix} chicken-compiler${suffix}
        PROPERTY FOLDER "Bootstrap Stages")

    set(${out_compiler} chicken-compiler${suffix} PARENT_SCOPE)
endfunction()

# Bootstrapping when cross-compiling is quite messy process due to necessity to
# deal with native toolchains. It is much simpler to build recent enough
# CHICKEN compiler for the host platform first and then pass it to the second
# build along with the proper cross toolchain environment.

# NOTE: stage1 compiler is not added as a dependency of the following targets,
# so, when bootstrapping in the same tree, just changing the options do not
# rebuild everything twice. But rebuilding caused by modified source files
# should work as expected.

# Do not use include paths from system
set(CHICKEN_INCLUDE_DIRS ${chicken_BINARY_DIR})
set(CHICKEN_DATA_DIR "")

if(CHICKEN_BOOTSTRAP AND NOT CMAKE_CROSSCOMPILING)
    add_stage(stage1 CHICKEN_COMPILER)
    add_stage(stage2 CHICKEN_COMPILER)
endif()

unset(CHICKEN_IMPORT_DIR)

add_chicken_primitive_modules()

list(APPEND CHICKEN_OPTIONS -specialize -types ${CHICKEN_TYPES_DB})

add_chicken_runtime(libchicken SHARED
    OPTIONS ${LIBRARY_OPTIONS})

set(CHICKEN_LIBRARY libchicken)

add_chicken_compiler(chicken-compiler OUTPUT_NAME chicken
    OPTIONS ${PROGRAM_OPTIONS})

if(NOT CMAKE_CROSSCOMPILING)
    set(CHICKEN_COMPILER chicken-compiler)
endif()

foreach(module ${runtime_GENERIC_MODULES})
    add_chicken_library(${module}.import IMPORT_MODULE
        SOURCES ${CHICKEN_IMPORT_DIR}/${module}.import.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    set_property(TARGET ${module}.import PROPERTY
        FOLDER ${CHICKEN_IMPORT_FOLDER})
endforeach()

foreach(module ${runtime_CHICKEN_MODULES})
    add_chicken_library(chicken.${module}.import IMPORT_MODULE
        SOURCES ${CHICKEN_IMPORT_DIR}/chicken.${module}.import.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    set_property(TARGET chicken.${module}.import PROPERTY
        FOLDER ${CHICKEN_IMPORT_FOLDER})
endforeach()

foreach(module ${compiler_MODULES})
    add_chicken_library(chicken.compiler.${module}.import IMPORT_MODULE
        SOURCES ${CHICKEN_IMPORT_DIR}/chicken.compiler.${module}.import.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    set_property(TARGET chicken.compiler.${module}.import PROPERTY
        FOLDER ${CHICKEN_IMPORT_FOLDER})
endforeach()

foreach(module ${chicken_MODULES})
    add_chicken_library(${module}.import IMPORT_MODULE
        SOURCES ${module}.import.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    set_property(TARGET ${module}.import PROPERTY
        FOLDER ${CHICKEN_IMPORT_FOLDER})
endforeach()

foreach(name ${runtime_GENERIC_MODULES} ${runtime_CHICKEN_MODULES}
             ${compiler_MODULES} ${chicken_MODULES})
    install(TARGETS ${name}.import
        LIBRARY DESTINATION ${INSTALL_EGGDIR})
endforeach()

install(TARGETS libchicken chicken-compiler
    EXPORT chicken-targets
    ARCHIVE DESTINATION ${INSTALL_LIBDIR}
    LIBRARY DESTINATION ${INSTALL_LIBDIR}
    RUNTIME DESTINATION ${INSTALL_BINDIR})

if(BUILD_STATIC_LIBS)
    add_chicken_runtime(libchicken-static STATIC
        OPTIONS ${LIBRARY_OPTIONS})

    set(CHICKEN_STATIC_LIBRARIES libchicken-static ${CHICKEN_EXTRA_LIBRARIES})

    install(TARGETS libchicken-static
        EXPORT chicken-targets
        ARCHIVE DESTINATION ${INSTALL_LIBDIR})
endif()

set(CHICKEN_DEPENDS "")

### interpreter

add_chicken_executable(csi
    SOURCES csi.scm
    OPTIONS ${PROGRAM_OPTIONS} ${COMPILER_OPTIONS})

install(TARGETS csi
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

### utilities

set(utility_PROGRAMS
    chicken-install
    chicken-profile
    chicken-status
    chicken-uninstall
    csc)

foreach(program ${utility_PROGRAMS})
    add_chicken_executable(${program} ${program}.scm
        OPTIONS ${PROGRAM_OPTIONS})
endforeach()

install(TARGETS ${utility_PROGRAMS}
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

### static programs

if(BUILD_STATIC_PROGRAMS)
    add_chicken_executable(csi-static csi.scm STATIC
        SUFFIX ".static"
        OPTIONS ${PROGRAM_OPTIONS})

    add_chicken_executable(chicken-bug chicken-bug.scm STATIC
        OPTIONS ${PROGRAM_OPTIONS})

    install(TARGETS csi-static chicken-bug
        RUNTIME DESTINATION ${INSTALL_BINDIR})
endif()

### setup api modules

set(setupapi_MODULES setup-api setup-download)

add_chicken_module(setup-api setup-api.scm
    OPTIONS ${LIBRARY_OPTIONS})

add_chicken_module(setup-download setup-download.scm
    OPTIONS ${LIBRARY_OPTIONS}
    DEPENDS setup-api)

set_property(TARGET setup-api.import setup-download.import PROPERTY
    FOLDER ${CHICKEN_IMPORT_FOLDER})

foreach(module ${setupapi_MODULES})
    install(TARGETS ${module} ${module}.import
        ARCHIVE DESTINATION ${INSTALL_EGGDIR}
        LIBRARY DESTINATION ${INSTALL_EGGDIR})
endforeach()

add_dependencies(chicken-install   ${setupapi_MODULES})
add_dependencies(chicken-uninstall ${setupapi_MODULES})
add_dependencies(chicken-status    ${setupapi_MODULES})

### misc files

install(FILES chicken.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INSTALL_INCLUDEDIR})

install(FILES types.db
    DESTINATION ${INSTALL_EGGDIR})

install(FILES setup.defaults chicken-depends.scm
    DESTINATION ${INSTALL_DATADIR})

install(FILES
    ${PROJECT_SOURCE_DIR}/cmake/ChickenExtensionConfig.cmake.in
    ${PROJECT_SOURCE_DIR}/cmake/ChickenExtensionVersion.cmake.in
    ${PROJECT_SOURCE_DIR}/cmake/FindChicken.cmake
    ${PROJECT_SOURCE_DIR}/cmake/ChickenUse.cmake
    ${PROJECT_SOURCE_DIR}/cmake/ChickenRun.cmake
    DESTINATION ${INSTALL_DATADIR})

set(MAN_PAGES
    chicken
    chicken-bug
    chicken-install
    chicken-profile
    chicken-status
    chicken-uninstall
    csc
    csi)

foreach(man ${MAN_PAGES})
    install(FILES ${man}.1
        DESTINATION ${INSTALL_MANDIR}
        RENAME ${man}.1)
endforeach()

install(FILES README LICENSE
    DESTINATION ${INSTALL_DOCDIR})

install(EXPORT chicken-targets
    DESTINATION ${INSTALL_DATADIR}
    NAMESPACE chicken_)

### config

# rename generated configs on installation because find_package will find
# them in adjacent build directories with names starting with "chicken" prefix

include(CMakePackageConfigHelpers)

configure_package_config_file(
    ${CMAKE_SOURCE_DIR}/cmake/chicken-config.cmake.in
    ${PROJECT_BINARY_DIR}/config.cmake
    INSTALL_DESTINATION ${INSTALL_DATADIR}
    PATH_VARS INSTALL_BINDIR
              INSTALL_LIBDIR
              INSTALL_EGGDIR
              INSTALL_DATADIR
              INSTALL_INCLUDEDIR)

install(FILES ${PROJECT_BINARY_DIR}/config.cmake
    DESTINATION ${INSTALL_DATADIR}
    RENAME chicken-config.cmake)

write_basic_package_version_file(
    ${PROJECT_BINARY_DIR}/version.cmake
    VERSION ${CHICKEN_VERSION}
    COMPATIBILITY SameMajorVersion)

install(FILES ${PROJECT_BINARY_DIR}/version.cmake
    DESTINATION ${INSTALL_DATADIR}
    RENAME chicken-config-version.cmake)

### tests

add_subdirectory(tests EXCLUDE_FROM_ALL)

### cpack

set(CPACK_PACKAGE_NAME "CHICKEN")
set(CPACK_PACKAGE_VERSION_MAJOR 4)
set(CPACK_PACKAGE_VERSION_MINOR 9)
set(CPACK_PACKAGE_VERSION_PATCH 1)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A practical and portable Scheme system")
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/LICENSE")

if(UNIX)
    set(CPACK_GENERATOR STGZ)
elseif(MSVC)
    set(CPACK_GENERATOR NSIS)
endif()

include(CPack)
