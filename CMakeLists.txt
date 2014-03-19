cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 2.8)

project(chicken)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake)

find_package(Chicken PATHS ${CMAKE_HOME_DIRECTORY}/cmake NO_DEFAULT_PATH) 
include(ChickenConfigure)
include(ChickenApplyHack)
include(ChickenBuildTag)
include(${CHICKEN_USE_FILE})
include(GenerateExportHeader)

# libchicken
# use generated chicken-config.h
include_directories(BEFORE ${CMAKE_CURRENT_BINARY_DIR})

set_source_files_properties(runtime.c PROPERTIES
    OBJECT_DEPENDS ${CHICKEN_CONFIG_H})

set(libchicken_SOURCES chicken.h runtime.c)
if(C_HACKED_APPLY)
    list(APPEND libchicken_SOURCES apply-hack.${CHICKEN_ARCH}.S)
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
    OPTIONS ${CHICKEN_LIBRARY_OPTIONS})
add_chicken_sources(libchicken_SOURCES srfi-69.scm
    OPTIONS ${CHICKEN_LIBRARY_OPTIONS} -extend private-namespace.scm)

add_chicken_sources(libchicken_STATIC_SOURCES ${libchicken_SCM_SOURCES}
    STATIC OPTIONS ${CHICKEN_LIBRARY_OPTIONS})
add_chicken_sources(libchicken_STATIC_SOURCES srfi-69.scm
    STATIC OPTIONS ${CHICKEN_LIBRARY_OPTIONS} -extend private-namespace.scm)

add_library(libchicken SHARED ${libchicken_SOURCES})
target_compile_definitions(libchicken PUBLIC -DC_BUILDING_LIBCHICKEN)
target_link_libraries(libchicken ${CHICKEN_EXTRA_LIBRARIES})
set_target_properties(libchicken PROPERTIES
    PREFIX ""
    OUTPUT_NAME lib${CHICKEN_PREFIX}chicken${CHICKEN_SUFFIX}
    VERSION ${CHICKEN_API_VERSION})
generate_export_header(libchicken)
install(TARGETS libchicken
    LIBRARY DESTINATION ${INSTALL_LIBDIR})

if(NOT MSVC)
    add_library(libchicken-static STATIC ${libchicken_STATIC_SOURCES})
    target_compile_definitions(libchicken-static PUBLIC -DC_BUILDING_LIBCHICKEN)
    set_target_properties(libchicken-static PROPERTIES
        PREFIX ""
        OUTPUT_NAME lib${CHICKEN_PREFIX}chicken${CHICKEN_SUFFIX})
    install(TARGETS libchicken-static
        ARCHIVE DESTINATION ${INSTALL_LIBDIR})
endif()

# chicken
set(chicken_SCM_SOURCES chicken.scm batch-driver.scm compiler.scm
    optimizer.scm lfa2.scm compiler-syntax.scm scrutinizer.scm support.scm
    c-platform.scm c-backend.scm)
add_chicken_sources(chicken_SOURCES ${chicken_SCM_SOURCES}
    OPTIONS ${CHICKEN_COMPILER_OPTIONS})
add_executable(chicken ${chicken_SOURCES})
target_link_libraries(chicken libchicken ${CHICKEN_EXTRA_LIBRARIES})
set_property(TARGET chicken PROPERTY
    OUTPUT_NAME ${CHICKEN_PREFIX}chicken${CHICKEN_SUFFIX})
install(TARGETS chicken
    RUNTIME DESTINATION ${INSTALL_BINDIR})

# csi
set(csi_SCM_SOURCES csi.scm)
add_chicken_sources(csi_SOURCES ${csi_SCM_SOURCES}
    OPTIONS ${CHICKEN_PROGRAM_OPTIONS} -extend private-namespace.scm)
add_executable(csi ${csi_SOURCES})
target_link_libraries(csi libchicken ${CHICKEN_EXTRA_LIBRARIES})
set_property(TARGET csi PROPERTY
    OUTPUT_NAME ${CHICKEN_PREFIX}csi${CHICKEN_SUFFIX})
install(TARGETS csi
    RUNTIME DESTINATION ${INSTALL_BINDIR})

if(NOT MSVC)
    add_chicken_sources(csi_STATIC_SOURCES ${csi_SCM_SOURCES}
        STATIC OPTIONS ${CHICKEN_PROGRAM_OPTIONS} -extend private-namespace.scm)
    add_executable(csi-static ${csi_STATIC_SOURCES})
    target_link_libraries(csi-static libchicken-static ${CHICKEN_EXTRA_LIBRARIES})
    set_target_properties(csi-static PROPERTIES
        OUTPUT_NAME ${CHICKEN_PREFIX}csi-static${CHICKEN_SUFFIX})
    install(TARGETS csi-static
        RUNTIME DESTINATION ${INSTALL_BINDIR})

    # chicken-bug
    add_chicken_sources(chicken-bug_SOURCES chicken-bug.scm
        STATIC OPTIONS ${CHICKEN_PROGRAM_OPTIONS})
    add_executable(chicken-bug ${chicken-bug_SOURCES})
    target_link_libraries(chicken-bug libchicken-static ${CHICKEN_EXTRA_LIBRARIES})
    set_target_properties(chicken-bug PROPERTIES
        OUTPUT_NAME ${CHICKEN_PREFIX}chicken-bug${CHICKEN_SUFFIX})
    install(TARGETS chicken-bug
        RUNTIME DESTINATION ${INSTALL_BINDIR})
endif()

# utility programs
set(utility_PROGRAMS csc chicken-install chicken-uninstall chicken-status
    chicken-profile)

foreach(program ${utility_PROGRAMS})
    set(program_SOURCES)
    add_chicken_sources(program_SOURCES ${program}.scm
        OPTIONS ${CHICKEN_PROGRAM_OPTIONS})
    add_executable(${program} ${program_SOURCES})
    target_link_libraries(${program} libchicken ${CHICKEN_EXTRA_LIBRARIES})
    set_property(TARGET ${program} PROPERTY
        OUTPUT_NAME ${CHICKEN_PREFIX}${program}${CHICKEN_SUFFIX})
    install(TARGETS ${program}
        RUNTIME DESTINATION ${INSTALL_BINDIR})
endforeach()

# setup-api
set(setupapi_MODULES setup-api setup-download)

add_chicken_module(setup-api setup-api.scm
    RUNTIME libchicken
    EMIT setup-api
    OPTIONS ${CHICKEN_LIBRARY_OPTIONS})
add_chicken_module(setup-download setup-download.scm
    RUNTIME libchicken
    EMIT setup-download
    OPTIONS ${CHICKEN_LIBRARY_OPTIONS}
    DEPENDS setup-api.import.scm)

add_dependencies(chicken-install ${setupapi_MODULES})
add_dependencies(chicken-uninstall ${setupapi_MODULES})
add_dependencies(chicken-status ${setupapi_MODULES})

foreach(module ${setupapi_MODULES})
    install(TARGETS ${module} ${module}.import
        LIBRARY DESTINATION ${INSTALL_EGGDIR})
endforeach()

# import libraries
set(import_LIBRARIES
    chicken.import lolevel.import srfi-1.import srfi-4.import
    data-structures.import ports.import files.import posix.import
    srfi-13.import srfi-69.import extras.import srfi-14.import tcp.import
    foreign.import srfi-18.import utils.import csi.import irregex.import)

foreach(lib ${import_LIBRARIES})
    add_chicken_library(${lib} ${lib}.scm SHARED
        RUNTIME libchicken
        OPTIONS ${CHICKEN_IMPORT_LIBRARY_OPTIONS})
    add_dependencies(${lib} libchicken)
    install(TARGETS ${lib}
        DESTINATION ${INSTALL_EGGDIR})
endforeach()

# misc files
install(FILES types.db
    DESTINATION ${INSTALL_EGGDIR})

install(FILES chicken.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INSTALL_INCLUDEDIR})

install(FILES setup.defaults
    DESTINATION ${INSTALL_DATADIR})

set(MAN_PAGES chicken csc csi chicken-install chicken-uninstall
    chicken-status chicken-profile chicken-bug)
foreach(man ${MAN_PAGES})
    install(FILES ${man}.1
        DESTINATION ${INSTALL_MANDIR}
        RENAME ${CHICKEN_PREFIX}${man}${CHICKEN_SUFFIX}.1)
endforeach()

install(FILES README LICENSE
    DESTINATION ${INSTALL_DOCDIR})
