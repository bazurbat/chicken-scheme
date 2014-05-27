cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 2.8)

project(chicken C)

set(CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake CACHE INTERNAL "")

find_package(Chicken REQUIRED)
include(ChickenBuildTag)
include(ChickenApplyHack)
include(ChickenConfigure)

# set(CMAKE_INSTALL_RPATH .)
# set(CMAKE_SKIP_BUILD_RPATH TRUE)
# set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)

# libchicken
# use generated chicken-config.h
include_directories(BEFORE ${CMAKE_CURRENT_BINARY_DIR})
# use bundled chicken.h when cross-compiling
if(CMAKE_CROSSCOMPILING)
    set(CHICKEN_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR})
endif()

set_source_files_properties(runtime.c PROPERTIES
    OBJECT_DEPENDS ${CHICKEN_CONFIG_H})

set(libchicken_SOURCES chicken.h runtime.c)
if(APPLY_HACK)
    list(APPEND libchicken_SOURCES apply-hack.${ARCH}.S)
endif()
set(libchicken_STATIC_SOURCES ${libchicken_SOURCES})

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

add_chicken_sources(libchicken_SOURCES ${libchicken_SCM_SOURCES}
    OPTIONS ${LIBRARY_OPTIONS})
add_chicken_sources(libchicken_SOURCES srfi-69.scm
    OPTIONS ${LIBRARY_OPTIONS} -extend private-namespace.scm)

add_chicken_sources(libchicken_STATIC_SOURCES ${libchicken_SCM_SOURCES}
    STATIC OPTIONS ${LIBRARY_OPTIONS})
add_chicken_sources(libchicken_STATIC_SOURCES srfi-69.scm
    STATIC OPTIONS ${LIBRARY_OPTIONS} -extend private-namespace.scm)

add_library(libchicken SHARED ${libchicken_SOURCES})
target_link_libraries(libchicken ${CHICKEN_EXTRA_LIBRARIES})
set_target_properties(libchicken PROPERTIES
    COMPILE_DEFINITIONS "PIC;C_BUILDING_LIBCHICKEN"
    OUTPUT_NAME ${PROGRAM_PREFIX}chicken
    VERSION ${API_VERSION})
install(TARGETS libchicken
    EXPORT ChickenTargets
    DESTINATION ${INSTALL_LIBDIR})

if(NOT MSVC)
    add_library(libchicken-static STATIC ${libchicken_STATIC_SOURCES})
    set_target_properties(libchicken-static PROPERTIES
        COMPILE_DEFINITIONS "C_BUILDING_LIBCHICKEN"
        OUTPUT_NAME ${PROGRAM_PREFIX}chicken)
    install(TARGETS libchicken-static
        EXPORT ChickenTargets
        ARCHIVE DESTINATION ${INSTALL_LIBDIR})
endif()

# override libraries to link with just built libchicken instead of system
set(CHICKEN_LIBRARIES libchicken ${CHICKEN_EXTRA_LIBRARIES})
set(CHICKEN_STATIC_LIBRARIES libchicken-static ${CHICKEN_EXTRA_LIBRARIES})

# chicken
set(chicken_SCM_SOURCES chicken.scm batch-driver.scm compiler.scm
    optimizer.scm compiler-syntax.scm scrutinizer.scm support.scm
    c-platform.scm c-backend.scm)
# FIXME: crutch to allow using same macros for stability and master branches
if(API_VERSION GREATER 6)
    list(APPEND chicken_SCM_SOURCES lfa2.scm)
endif()
add_chicken_sources(chicken_SOURCES ${chicken_SCM_SOURCES}
    OPTIONS ${COMPILER_OPTIONS})
add_executable(chicken ${chicken_SOURCES})
target_link_libraries(chicken ${CHICKEN_LIBRARIES})
set_target_properties(chicken PROPERTIES
    COMPILE_DEFINITIONS "PIC"
    OUTPUT_NAME ${PROGRAM_PREFIX}chicken)
install(TARGETS chicken
    EXPORT ChickenTargets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

# csi
set(csi_SCM_SOURCES csi.scm)
add_chicken_sources(csi_SOURCES ${csi_SCM_SOURCES}
    OPTIONS ${PROGRAM_OPTIONS} -extend private-namespace.scm)
add_executable(csi ${csi_SOURCES})
target_link_libraries(csi ${CHICKEN_LIBRARIES})
set_target_properties(csi PROPERTIES
    COMPILE_DEFINITIONS "PIC"
    OUTPUT_NAME ${PROGRAM_PREFIX}csi)
install(TARGETS csi
    EXPORT ChickenTargets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

if(NOT MSVC)
    add_chicken_sources(csi_STATIC_SOURCES ${csi_SCM_SOURCES}
        STATIC OPTIONS ${PROGRAM_OPTIONS} -extend private-namespace.scm)
    add_executable(csi-static ${csi_STATIC_SOURCES})
    target_link_libraries(csi-static ${CHICKEN_STATIC_LIBRARIES})
    set_target_properties(csi-static PROPERTIES
        OUTPUT_NAME ${PROGRAM_PREFIX}csi-static)
    install(TARGETS csi-static
        RUNTIME DESTINATION ${INSTALL_BINDIR})

    # chicken-bug
    add_chicken_sources(chicken-bug_SOURCES chicken-bug.scm
        STATIC OPTIONS ${PROGRAM_OPTIONS})
    add_executable(chicken-bug ${chicken-bug_SOURCES})
    target_link_libraries(chicken-bug ${CHICKEN_STATIC_LIBRARIES})
    set_target_properties(chicken-bug PROPERTIES
        OUTPUT_NAME ${PROGRAM_PREFIX}chicken-bug)
    install(TARGETS chicken-bug
        RUNTIME DESTINATION ${INSTALL_BINDIR})
endif()

# utility programs
set(utility_PROGRAMS csc chicken-install chicken-uninstall chicken-status
    chicken-profile)

foreach(program ${utility_PROGRAMS})
    set(program_SOURCES)
    add_chicken_sources(program_SOURCES ${program}.scm
        OPTIONS ${PROGRAM_OPTIONS})
    add_executable(${program} ${program_SOURCES})
    target_link_libraries(${program} ${CHICKEN_LIBRARIES})
    set_target_properties(${program} PROPERTIES
        COMPILE_DEFINITIONS "PIC"
        OUTPUT_NAME ${PROGRAM_PREFIX}${program})
    install(TARGETS ${program}
        RUNTIME DESTINATION ${INSTALL_BINDIR})
endforeach()

# setup-api
set(setupapi_MODULES setup-api setup-download)

if(NOT MSVC)
    add_chicken_module(setup-api setup-api.scm
        EMIT setup-api
        OPTIONS ${LIBRARY_OPTIONS})
    add_chicken_module(setup-download setup-download.scm
        EMIT setup-download
        OPTIONS ${LIBRARY_OPTIONS}
        DEPENDS setup-api.import.scm)

    add_dependencies(chicken-install ${setupapi_MODULES})
    add_dependencies(chicken-uninstall ${setupapi_MODULES})
    add_dependencies(chicken-status ${setupapi_MODULES})

    foreach(module ${setupapi_MODULES})
        install(TARGETS ${module} ${module}.import
            LIBRARY DESTINATION ${INSTALL_EGGDIR})
    endforeach()

endif()

# import libraries
set(import_LIBRARIES
    chicken.import lolevel.import srfi-1.import srfi-4.import
    data-structures.import ports.import files.import posix.import
    srfi-13.import srfi-69.import extras.import srfi-14.import tcp.import
    foreign.import srfi-18.import utils.import csi.import irregex.import)

foreach(lib ${import_LIBRARIES})
    add_chicken_library(${lib} ${lib}.scm MODULE
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
    add_dependencies(${lib} libchicken)
    install(TARGETS ${lib}
        DESTINATION ${INSTALL_EGGDIR})
endforeach()

# config

function(_chicken_generate_config)
    # file(RELATIVE_PATH CONFIG_LIBDIR  ${INSTALL_DATADIR} ${INSTALL_LIBDIR})
    # file(RELATIVE_PATH CONFIG_DATADIR ${INSTALL_DATADIR} ${INSTALL_DATADIR})
    # file(RELATIVE_PATH CONFIG_EGGDIR  ${INSTALL_DATADIR} ${INSTALL_EGGDIR})
    #
    # file(RELATIVE_PATH CONFIG_TARGET_LIBDIR  ${INSTALL_DATADIR} ${TARGET_LIBDIR})
    # file(RELATIVE_PATH CONFIG_TARGET_DATADIR ${INSTALL_DATADIR} ${TARGET_DATADIR})
    # file(RELATIVE_PATH CONFIG_TARGET_EGGDIR  ${INSTALL_DATADIR} ${TARGET_EGGDIR})

    configure_file(cmake/ChickenConfig.cmake.in
        ${PROJECT_BINARY_DIR}/ChickenConfig.cmake @ONLY)
endfunction()
_chicken_generate_config()

# misc files
install(FILES types.db
    DESTINATION ${INSTALL_EGGDIR})

install(FILES chicken.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INSTALL_INCLUDEDIR})

install(FILES setup.defaults cmake/ChickenUse.cmake
    DESTINATION ${INSTALL_DATADIR})
install(FILES ${PROJECT_BINARY_DIR}/ChickenConfig.cmake
    DESTINATION ${INSTALL_DATADIR})

set(MAN_PAGES chicken csc csi chicken-install chicken-uninstall
    chicken-status chicken-profile chicken-bug)
foreach(man ${MAN_PAGES})
    install(FILES ${man}.1
        DESTINATION ${INSTALL_MANDIR}
        RENAME ${PROGRAM_PREFIX}${man}.1)
endforeach()

install(FILES README LICENSE
    DESTINATION ${INSTALL_DOCDIR})

install(EXPORT ChickenTargets
    DESTINATION ${INSTALL_DATADIR})
