cmake_minimum_required(VERSION 2.8.4)

if(POLICY CMP0042)
    # MACOSX_RPATH is enabled by default
    cmake_policy(SET CMP0042 NEW)
endif()
if(POLICY CMP0048)
    # The project() command manages VERSION variables
    cmake_policy(SET CMP0048 NEW)
endif()

# search for CMake includes in project directory first
set(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake CACHE INTERNAL "")
# override default platform compiler flags
set(CMAKE_USER_MAKE_RULES_OVERRIDE
    ${CMAKE_HOME_DIRECTORY}/cmake/ChickenPlatformOverride.cmake)

project(chicken C ASM)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

if(WIN32)
    # Windows tries to load shared libraries from the same directory where
    # the executable is placed. To bootstrap properly we need this to use the
    # just compiled runtime.
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
    set(CMAKE_PDB_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
elseif(XCODE_VERSION)
    # Xcode assumes this, have not found a way to change it from CMake
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
endif()

enable_testing()

add_custom_target(tests)

find_package(Chicken REQUIRED)

set(CHICKEN_RUN ${CMAKE_SOURCE_DIR}/cmake/ChickenRun.cmake)
set(CHICKEN_TYPES_DB ${CMAKE_SOURCE_DIR}/types.db)

list(APPEND CHICKEN_DEFINITIONS HAVE_CHICKEN_CONFIG_H)

include(ChickenBuildTag)
include(ChickenConfigure)

include_directories(BEFORE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR})

set(CHICKEN_BOOTSTRAP YES)

set(libchicken_C_SOURCES chicken.h runtime.c ${CHICKEN_APPLY_HACK})

if(WIN32)
    set(posix_scm posixwin.scm)
else()
    set(posix_scm posixunix.scm)
endif()

set(libchicken_SCM_SOURCES library.scm eval.scm data-structures.scm ports.scm
    files.scm extras.scm lolevel.scm utils.scm tcp.scm srfi-1.scm srfi-4.scm
    srfi-13.scm srfi-14.scm srfi-18.scm ${posix_scm} irregex.scm
    scheduler.scm profiler.scm stub.scm expand.scm modules.scm
    chicken-syntax.scm chicken-ffi-syntax.scm build-version.scm)

set(utility_PROGRAMS csc chicken-install chicken-uninstall chicken-status
    chicken-profile)

set(setupapi_MODULES setup-api setup-download)

add_chicken_sources(libchicken_SOURCES
    C_SOURCES ${libchicken_C_SOURCES})
add_chicken_sources(libchicken_SOURCES
    SOURCES ${libchicken_SCM_SOURCES}
    OPTIONS ${LIBRARY_OPTIONS})
add_chicken_sources(libchicken_SOURCES srfi-69.scm
    OPTIONS ${LIBRARY_OPTIONS} -extend private-namespace.scm)

add_library(libchicken SHARED ${libchicken_SOURCES})

target_link_libraries(libchicken ${CHICKEN_EXTRA_LIBRARIES})

set_property(TARGET libchicken PROPERTY COMPILE_DEFINITIONS
    PIC C_BUILDING_LIBCHICKEN)

set_target_properties(libchicken PROPERTIES
    PREFIX ""
    OUTPUT_NAME lib${CHICKEN_PROGRAM_PREFIX}chicken
    VERSION ${API_VERSION})

install(TARGETS libchicken
    EXPORT chicken-targets
    ARCHIVE DESTINATION ${INSTALL_LIBDIR}
    LIBRARY DESTINATION ${INSTALL_LIBDIR}
    RUNTIME DESTINATION ${INSTALL_LIBDIR})

set(CHICKEN_LIBRARIES libchicken ${CHICKEN_EXTRA_LIBRARIES})

add_chicken_executable(chicken-depends
    SOURCES chicken-depends.scm)

install(TARGETS chicken-depends
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

if(CMAKE_CROSSCOMPILING OR CHICKEN_BOOTSTRAP)
    set(CHICKEN_DEPENDS ${CHICKEN_INTERPRETER} -ss
        ${chicken_SOURCE_DIR}/chicken-depends.scm)
else()
    set(CHICKEN_DEPENDS $<TARGET_FILE:chicken-depends>)
endif()

### compiler

set(chicken_SCM_SOURCES
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

add_chicken_executable(chicken-compiler ${chicken_SCM_SOURCES}
    OPTIONS ${PROGRAM_OPTIONS} -extend private-namespace.scm)

set_target_properties(chicken-compiler PROPERTIES
    COMPILE_DEFINITIONS PIC
    OUTPUT_NAME chicken)

install(TARGETS chicken-compiler
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

if(NOT CMAKE_CROSSCOMPILING)
    set(CHICKEN_COMPILER $<TARGET_FILE:chicken-compiler>)
endif()

set(CHICKEN_BOOTSTRAP NO)

### interpreter

add_chicken_executable(csi
    SOURCES csi.scm
    OPTIONS ${PROGRAM_OPTIONS} -extend private-namespace.scm)

set_target_properties(csi PROPERTIES
    COMPILE_DEFINITIONS PIC
    OUTPUT_NAME csi)

install(TARGETS csi
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

### setup api modules

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
    srfi-13.import
    srfi-14.import
    srfi-18.import
    srfi-4.import
    srfi-69.import
    tcp.import
    utils.import)

foreach(lib ${import_LIBRARIES})
    set_property(SOURCE ${lib}.scm PROPERTY chicken_import_library TRUE)
    add_chicken_library(${lib} ${lib}.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
endforeach()

install(TARGETS ${import_LIBRARIES}
    DESTINATION ${INSTALL_EGGDIR})

### misc files

install(FILES chicken.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INSTALL_INCLUDEDIR})

install(FILES types.db
    DESTINATION ${INSTALL_EGGDIR})

install(FILES setup.defaults
    DESTINATION ${INSTALL_DATADIR})

install(FILES
    ${PROJECT_SOURCE_DIR}/cmake/ChickenExtensionConfig.cmake.in
    ${PROJECT_SOURCE_DIR}/cmake/ChickenExtensionVersion.cmake.in
    ${PROJECT_SOURCE_DIR}/cmake/FindChicken.cmake
    ${PROJECT_SOURCE_DIR}/cmake/ChickenUse.cmake
    ${PROJECT_SOURCE_DIR}/cmake/ChickenRun.cmake
    DESTINATION ${INSTALL_DATADIR})

set(MAN_PAGES chicken csc csi chicken-install chicken-uninstall
    chicken-status chicken-profile chicken-bug)

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
