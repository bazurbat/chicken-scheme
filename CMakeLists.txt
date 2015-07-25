cmake_minimum_required(VERSION 2.8.4)

if(POLICY CMP0042)
    # MACOSX_RPATH is enabled by default
    cmake_policy(SET CMP0042 OLD)
endif()
if(POLICY CMP0048)
    # The project() command manages VERSION variables
    cmake_policy(SET CMP0048 NEW)
endif()

# search for CMake includes in the project directory first
set(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake CACHE INTERNAL "")
# override default platform compiler flags
set(CMAKE_USER_MAKE_RULES_OVERRIDE
    ${CMAKE_HOME_DIRECTORY}/cmake/ChickenPlatformOverride.cmake)

project(chicken C ASM)

include(CMakeDependentOption)

option(BUILD_SHARED_LIBS "Build shared libraries" YES)
option(BUILD_STATIC_LIBS "Build static libraries" NO)
option(CHICKEN_BOOTSTRAP "Bootstrap build" YES)

cmake_dependent_option(BUILD_STATIC_PROGRAMS "Build static programs" YES
    "BUILD_STATIC_LIBS" NO)
mark_as_advanced(BUILD_STATIC_LIBS BUILD_SHARED_LIBS BUILD_STATIC_PROGRAMS)

enable_testing()
add_custom_target(BUILD_TESTS)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

if(WIN32)
    # Windows tries to load shared libraries from the same directory where
    # the executable is placed. To bootstrap properly we need this to use the
    # just compiled runtime.
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_PDB_OUTPUT_DIRECTORY     ${PROJECT_BINARY_DIR})
elseif(XCODE_VERSION)
    # Xcode assumes this, have not found a way to change it from CMake
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
endif()

find_package(Chicken REQUIRED)

set(CHICKEN_RUN      ${CMAKE_SOURCE_DIR}/cmake/ChickenRun.cmake)
set(CHICKEN_TYPES_DB ${CMAKE_SOURCE_DIR}/types.db)
set(CHICKEN_DEPENDS  "")

include(ChickenBuild)

write_chicken_build_tag()
find_chicken_apply_hack()

include(ChickenConfigure)

set(CHICKEN_OPTIONS -optimize-level 2 -inline -ignore-repository -feature chicken-bootstrap)
set(LIBRARY_OPTIONS -explicit-use -no-trace)
set(PROGRAM_OPTIONS -no-lambda-info -local)
set(IMPORT_LIBRARY_OPTIONS -no-trace)

if(DEFINED DEBUGBUILD)
    list(APPEND CHICKEN_OPTIONS -feature debugbuild -verbose)
else()
    list(APPEND CHICKEN_OPTIONS -no-warnings)
    list(APPEND PROGRAM_OPTIONS -no-trace)
endif()

# Bootstrapping when cross-compiling is quite messy process due to necessity to
# deal with native toolchains. It is much simpler to build recent enough
# CHICKEN compiler for the host platform first and then pass it to the second
# build along with the proper cross toolchain environment.

# NOTE: stage1 compiler is not added as a dependency of the following targets,
# so, when bootstrapping in the same tree, just changing the options do not
# rebuild everything twice. But rebuilding caused by modified source files
# should work as expected.

# Use our own chicken-config.h instead of system default.
set(CHICKEN_INCLUDE_DIRS ${chicken_BINARY_DIR})

if(CHICKEN_BOOTSTRAP AND NOT CMAKE_CROSSCOMPILING)
    set(stage1_SUFFIX ".stage1")

    add_chicken_runtime(libchicken-stage1 STATIC
        SUFFIX ${stage1_SUFFIX}
        OPTIONS ${LIBRARY_OPTIONS})

    set(CHICKEN_STATIC_LIBRARIES libchicken-stage1 ${CHICKEN_EXTRA_LIBRARIES})

    add_chicken_compiler(chicken-compiler-stage1 STATIC
        SUFFIX ${stage1_SUFFIX}
        OPTIONS ${PROGRAM_OPTIONS})

    set(CHICKEN_COMPILER chicken-compiler-stage1)
endif()

list(APPEND CHICKEN_OPTIONS -specialize -types ${CHICKEN_TYPES_DB})

add_chicken_runtime(libchicken SHARED
    OPTIONS ${LIBRARY_OPTIONS})

set(CHICKEN_LIBRARIES libchicken ${CHICKEN_EXTRA_LIBRARIES})

add_chicken_compiler(chicken-compiler OUTPUT_NAME chicken
    OPTIONS ${PROGRAM_OPTIONS})

if(NOT CMAKE_CROSSCOMPILING)
    set(CHICKEN_COMPILER chicken-compiler)
endif()

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

### interpreter

add_chicken_executable(csi
    SOURCES csi.scm
    OPTIONS ${compiler_OPTIONS})

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
        OPTIONS ${compiler_OPTIONS})

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

foreach(module ${setupapi_MODULES})
    install(TARGETS ${module} ${module}.import
        ARCHIVE DESTINATION ${INSTALL_EGGDIR}
        LIBRARY DESTINATION ${INSTALL_EGGDIR})
endforeach()

add_dependencies(chicken-install   ${setupapi_MODULES})
add_dependencies(chicken-uninstall ${setupapi_MODULES})
add_dependencies(chicken-status    ${setupapi_MODULES})

### import libraries

set(import_LIBRARIES
    chicken.import
    csi.import
    data-structures.import
    extras.import
    files.import
    foreign.import
    irregex.import
    lolevel.import
    ports.import
    posix.import
    srfi-1.import
    srfi-4.import
    tcp.import
    utils.import)
if(NOT CHICKEN_5)
    list(APPEND import_LIBRARIES
        srfi-13.import
        srfi-14.import
        srfi-18.import
        srfi-69.import)
endif()

foreach(lib ${import_LIBRARIES})
    set_property(SOURCE ${lib}.scm PROPERTY chicken_import_library TRUE)
    add_chicken_library(${lib} MODULE ${lib}.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
endforeach()

install(TARGETS ${import_LIBRARIES}
    DESTINATION ${INSTALL_EGGDIR})

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
