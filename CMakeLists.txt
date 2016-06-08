cmake_minimum_required(VERSION 2.8.12)

if(POLICY CMP0048)
    # The project() command manages VERSION variables
    cmake_policy(SET CMP0048 NEW)
endif()

set(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake)
set(CMAKE_USER_MAKE_RULES_OVERRIDE ${CMAKE_MODULE_PATH}/ChickenPlatformOverride.cmake)

set(CMAKE_MACOSX_RPATH YES)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(chicken C ASM)

option(BUILD_SHARED_LIBS "Build shared libraries" YES)
option(BUILD_STATIC_LIBS "Build static libraries" NO)
mark_as_advanced(BUILD_SHARED_LIBS BUILD_STATIC_LIBS)

option(BUILD_STATIC_PROGRAMS "Build static programs" NO)
mark_as_advanced(BUILD_STATIC_PROGRAMS)

if(BUILD_STATIC_PROGRAMS)
    set(BUILD_STATIC_LIBS YES)
endif()

if(NOT BUILD_SHARED_LIBS AND NOT BUILD_STATIC_LIBS)
    message(FATAL_ERROR "Shared and static library builds are both disabled, can not continue")
endif()

option(CHICKEN_BOOTSTRAP "Bootstrap build" NO)
mark_as_advanced(CHICKEN_BOOTSTRAP)

set(CHICKEN_API_VERSION 7 CACHE STRING
    "Chicken API version")
mark_as_advanced(CHICKEN_API_VERSION)

set(CHICKEN_INSTALL_NAME chicken CACHE STRING
    "The name of CHICKEN library and directories")
mark_as_advanced(CHICKEN_INSTALL_NAME)

set(CHICKEN_TARGET_NAME ${CHICKEN_INSTALL_NAME} CACHE STRING
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
    list(APPEND CHICKEN_OPTIONS -feature debugbuild -verbose -debug-info)
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
    cmake_parse_arguments(runtime "STATIC;SHARED" "SUFFIX" "" ${ARGN})

    if(runtime_STATIC)
        set(type STATIC)
    else()
        set(type SHARED)
        set(runtime_SHARED TRUE)
    endif()

    set(sources "")

    set(scm_sources
        ${runtime_POSIX_MODULE}.scm
        build-version.scm
        chicken-ffi-syntax.scm
        chicken-syntax.scm
        data-structures.scm
        debugger-client.scm
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
        chicken_wrap_sources(sources ${type}
            SUFFIX ${runtime_SUFFIX}
            SOURCES ${module}.scm
            EMIT_IMPORTS ${module}
            OPTIONS ${LIBRARY_OPTIONS})
    endforeach()

    foreach(module ${runtime_CHICKEN_MODULES})
        chicken_wrap_sources(sources ${type}
            SUFFIX ${runtime_SUFFIX}
            SOURCES ${module}.scm
            EMIT_IMPORTS chicken.${module}
            OPTIONS ${LIBRARY_OPTIONS})
    endforeach()

    chicken_wrap_sources(sources ${type}
        SUFFIX ${runtime_SUFFIX}
        SOURCES ${scm_sources}
        C_SOURCES ${c_sources}
        OPTIONS ${LIBRARY_OPTIONS})

    chicken_wrap_sources(sources ${type}
        SUFFIX ${runtime_SUFFIX}
        SOURCES srfi-69.scm
        OPTIONS ${LIBRARY_OPTIONS} ${COMPILER_OPTIONS})

    add_library(${name} ${type} ${sources})
    target_compile_definitions(${name} PUBLIC ${CHICKEN_DEFINITIONS})
    if(runtime_SHARED)
        target_compile_definitions(${name} PRIVATE PIC C_SHARED)
    endif()
    target_compile_options(${name} PUBLIC ${CHICKEN_C_FLAGS})
    target_link_libraries(${name} ${CHICKEN_EXTRA_LIBRARIES})

    set_target_properties(${name} PROPERTIES
        DEFINE_SYMBOL C_BUILDING_LIBCHICKEN
        OUTPUT_NAME chicken${runtime_SUFFIX})

    if(runtime_SHARED)
        if(APPLE)
        else()
            set_target_properties(${name} PROPERTIES
                SOVERSION ${CHICKEN_API_VERSION})
        endif()
    endif()
endfunction()

function(add_chicken_compiler name)
    cmake_parse_arguments(compiler "" "SUFFIX" "" ${ARGN})

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
            OPTIONS ${PROGRAM_OPTIONS}
            ${compiler_UNPARSED_ARGUMENTS})
    endforeach()

    chicken_wrap_sources(sources
        SUFFIX ${compiler_SUFFIX}
        SOURCES ${scm_sources}
        OPTIONS ${PROGRAM_OPTIONS} ${COMPILER_OPTIONS}
        ${compiler_UNPARSED_ARGUMENTS})

    add_executable(${name} ${sources})

    set_target_properties(${name} PROPERTIES
        OUTPUT_NAME chicken${compiler_SUFFIX})
endfunction()

function(add_stage name)
    set(suffix ".${name}")

    set(CHICKEN_IMPORT_DIR ${CHICKEN_IMPORT_DIR}${suffix})

    add_chicken_primitive_modules(${suffix})

    add_chicken_runtime(runtime${suffix} STATIC
        SUFFIX ${suffix})

    add_chicken_compiler(compiler${suffix} STATIC
        SUFFIX ${suffix})

    target_link_libraries(compiler${suffix} runtime${suffix})

    # Using parent scope to affect all generated commands after this call
    set(CHICKEN_COMPILER compiler${suffix} PARENT_SCOPE)

    set_property(TARGET runtime${suffix} compiler${suffix}
        PROPERTY FOLDER "Bootstrap Stages")
endfunction()

# Bootstrapping when cross-compiling is quite messy process due to necessity to
# deal with native toolchains. It is much simpler to build recent enough
# CHICKEN compiler for the host platform first and then pass it to the second
# build along with the proper cross toolchain environment.

# NOTE: stage1 compiler is not added as a dependency of the following targets,
# so, when bootstrapping in the same tree, just changing the options do not
# rebuild everything twice. But rebuilding caused by modified source files
# should work as expected.

# Do not use include paths from the system
set(CHICKEN_INCLUDE_DIRS "")
set(CHICKEN_DATA_DIR "")

# Find generated chicken-config.h before others
include_directories(${CMAKE_CURRENT_BINARY_DIR})

if(CHICKEN_BOOTSTRAP AND NOT CMAKE_CROSSCOMPILING)
    add_stage(stage1)
    list(APPEND CHICKEN_OPTIONS -specialize -types ${CHICKEN_TYPES_DB})
    add_stage(stage2)
else()
    list(APPEND CHICKEN_OPTIONS -specialize -types ${CHICKEN_TYPES_DB})
endif()

unset(CHICKEN_IMPORT_DIR)

if(BUILD_SHARED_LIBS)

add_chicken_primitive_modules()

add_chicken_runtime(runtime SHARED)

set(CHICKEN_LIBRARIES runtime)

add_chicken_compiler(compiler)
target_link_libraries(compiler runtime)

if(NOT CMAKE_CROSSCOMPILING)
    set(CHICKEN_COMPILER compiler)
endif()

foreach(module ${runtime_GENERIC_MODULES})
    chicken_add_library(${module}.import IMPORT_MODULE
        SOURCES ${CHICKEN_IMPORT_DIR}/${module}.import.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    target_link_libraries(${module}.import runtime)
    set_property(TARGET ${module}.import PROPERTY
        FOLDER ${CHICKEN_IMPORT_FOLDER})
endforeach()

foreach(module ${runtime_CHICKEN_MODULES})
    chicken_add_library(chicken.${module}.import IMPORT_MODULE
        SOURCES ${CHICKEN_IMPORT_DIR}/chicken.${module}.import.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    target_link_libraries(chicken.${module}.import runtime)
    set_property(TARGET chicken.${module}.import PROPERTY
        FOLDER ${CHICKEN_IMPORT_FOLDER})
endforeach()

foreach(module ${compiler_MODULES})
    chicken_add_library(chicken.compiler.${module}.import IMPORT_MODULE
        SOURCES ${CHICKEN_IMPORT_DIR}/chicken.compiler.${module}.import.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    target_link_libraries(chicken.compiler.${module}.import runtime)
    set_property(TARGET chicken.compiler.${module}.import PROPERTY
        FOLDER ${CHICKEN_IMPORT_FOLDER})
endforeach()

foreach(module ${chicken_MODULES})
    chicken_add_library(${module}.import IMPORT_MODULE
        SOURCES ${module}.import.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    target_link_libraries(${module}.import runtime)
    set_property(TARGET ${module}.import PROPERTY
        FOLDER ${CHICKEN_IMPORT_FOLDER})
endforeach()

foreach(name ${runtime_GENERIC_MODULES} ${runtime_CHICKEN_MODULES}
             ${compiler_MODULES} ${chicken_MODULES})
    install(TARGETS ${name}.import
        LIBRARY DESTINATION ${INSTALL_EGGDIR})
endforeach()

install(TARGETS runtime
    EXPORT chicken-targets
    ARCHIVE DESTINATION ${INSTALL_LIBDIR}
    LIBRARY DESTINATION ${INSTALL_LIBDIR})

install(TARGETS compiler
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

endif(BUILD_SHARED_LIBS)

if(BUILD_STATIC_LIBS)
    add_chicken_runtime(runtime-static STATIC)

    install(TARGETS runtime-static
        EXPORT chicken-targets
        ARCHIVE DESTINATION ${INSTALL_LIBDIR})
endif()

# Do not use automatic dependency extraction for misc utilities and tests to
# speed up the build.
set(CHICKEN_DEPENDS "")

if(BUILD_SHARED_LIBS)

### interpreter

chicken_add_executable(interpreter
    SOURCES csi.scm
    OPTIONS ${PROGRAM_OPTIONS} ${COMPILER_OPTIONS})
target_link_libraries(interpreter runtime)
set_target_properties(interpreter
    PROPERTIES OUTPUT_NAME csi)

install(TARGETS interpreter
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
    chicken_add_executable(${program} ${program}.scm
        OPTIONS ${PROGRAM_OPTIONS})
    target_link_libraries(${program} runtime)
endforeach()

install(TARGETS ${utility_PROGRAMS}
    RUNTIME DESTINATION ${INSTALL_BINDIR})

### setup api modules

set(setupapi_MODULES setup-api setup-download)

chicken_add_module(setup-api setup-api.scm
    OPTIONS ${LIBRARY_OPTIONS})

chicken_add_module(setup-download setup-download.scm
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

endif(BUILD_SHARED_LIBS)

### static programs

function(_build_static_programs)
    set(suffix "-static")

    add_chicken_compiler(compiler${suffix} STATIC
        SUFFIX ${suffix})
    target_link_libraries(compiler${suffix} runtime-static)

    chicken_add_executable(csi${suffix} STATIC
        SOURCES csi.scm
        OPTIONS ${PROGRAM_OPTIONS})
    target_link_libraries(csi${suffix} runtime-static)

    chicken_add_executable(chicken-bug STATIC
        SOURCES chicken-bug.scm
        OPTIONS ${PROGRAM_OPTIONS})
    target_link_libraries(chicken-bug runtime-static)

    install(TARGETS compiler${suffix} csi${suffix} chicken-bug
        RUNTIME DESTINATION ${INSTALL_BINDIR})
endfunction()

if(BUILD_STATIC_PROGRAMS)
    _build_static_programs()
endif()

### misc files

install(FILES chicken.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INSTALL_INCLUDEDIR})

install(FILES types.db
    DESTINATION ${INSTALL_EGGDIR})

install(FILES setup.defaults chicken-depends.scm feathers.tcl
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
    csi
    feathers)

foreach(man ${MAN_PAGES})
    install(FILES ${man}.1
        DESTINATION ${INSTALL_MANDIR}
        RENAME ${man}.1)
endforeach()

install(FILES README LICENSE
    DESTINATION ${INSTALL_DOCDIR})

install(EXPORT chicken-targets
    DESTINATION ${INSTALL_DATADIR}
    NAMESPACE Chicken::)

### debugger wrapper

configure_file(cmake/feathers.in feathers)

install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/feathers
    DESTINATION ${INSTALL_BINDIR})

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

function(_chicken_update_modules_db)
    set(_chicken_install "${CMAKE_CURRENT_BINARY_DIR}/chicken-install")
    set(_chicken_repository "$ENV{DESTDIR}/${CMAKE_INSTALL_PREFIX}/${INSTALL_EGGDIR}")

    install(CODE "execute_process(COMMAND ${CMAKE_COMMAND}
-DCHICKEN_REPOSITORY=${_chicken_repository}
-DCOMMAND=${_chicken_install}\;-update-db
-P ${CHICKEN_RUN})")
endfunction()

# Updating modules.db requires loading shared module libraries which will fail
# when cross-compiling.
if(NOT CMAKE_CROSSCOMPILING)
    _chicken_update_modules_db()
endif()

### tests

if(BUILD_SHARED_LIBS)
    add_subdirectory(tests EXCLUDE_FROM_ALL)
endif()
