cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 2.8)

project(chicken C)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake)

option(BUILD_SHARED_LIBS "Build shared libraries" YES)
option(C_GC_HOOKS "Enable GC hooks" NO)
option(C_COLLECT_ALL_SYMBOLS "Always collect all unused symbols" NO)

if(CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "MinSizeRel" CACHE STRING
        "The type of build (Debug, Release, MinSizeRel)"
        FORCE)
endif()

find_package(Chicken)
include(ChickenFunctions)
include(ChickenApplyHack)
include(ChickenBuildTag)
include(ChickenConfigure)

# libchicken
include_directories(BEFORE ${CMAKE_CURRENT_BINARY_DIR})

set_property(SOURCE runtime.c PROPERTY OBJECT_DEPENDS ${CHICKEN_CONFIG_H})
set_property(SOURCE runtime.c APPEND_STRING PROPERTY
    COMPILE_FLAGS " ${CHICKEN_C_FLAGS}")

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

if(C_HACKED_APPLY)
    list(APPEND libchicken_SOURCES apply-hack.${CHICKEN_ARCH}.S)
    list(APPEND libchicken_STATIC_SOURCES apply-hack.${CHICKEN_ARCH}.S)
endif()

add_library(libchicken SHARED chicken.h runtime.c ${libchicken_SOURCES})
target_compile_definitions(libchicken PUBLIC -DC_BUILDING_LIBCHICKEN)
target_link_libraries(libchicken ${CHICKEN_EXTRA_LIBRARIES})
set_target_properties(libchicken PROPERTIES PREFIX "" SOVERSION 7)

add_library(libchicken-static STATIC chicken.h runtime.c ${libchicken_STATIC_SOURCES})
target_compile_definitions(libchicken-static PUBLIC -DC_BUILDING_LIBCHICKEN)
set_target_properties(libchicken-static PROPERTIES
    PREFIX "" OUTPUT_NAME libchicken)

install(TARGETS libchicken libchicken-static
    ARCHIVE DESTINATION ${INSTALL_LIBDIR}
    LIBRARY DESTINATION ${INSTALL_LIBDIR})

# chicken
set(chicken_SCM_SOURCES chicken.scm batch-driver.scm compiler.scm
    optimizer.scm lfa2.scm compiler-syntax.scm scrutinizer.scm support.scm
    c-platform.scm c-backend.scm)

add_chicken_sources(chicken_SOURCES ${chicken_SCM_SOURCES}
    OPTIONS ${CHICKEN_COMPILER_OPTIONS})

add_executable(chicken ${chicken_SOURCES})
target_link_libraries(chicken libchicken ${CHICKEN_EXTRA_LIBS})

install(TARGETS chicken
    RUNTIME DESTINATION ${INSTALL_BINDIR})

# utility programs
add_chicken_sources(csi_SOURCES csi.scm
    OPTIONS ${CHICKEN_PROGRAM_OPTIONS} -extend private-namespace.scm)
add_executable(csi ${csi_SOURCES})
target_link_libraries(csi libchicken ${CHICKEN_EXTRA_LIBS})

add_chicken_sources(csi_STATIC_SOURCES csi.scm
    STATIC OPTIONS ${CHICKEN_PROGRAM_OPTIONS} -extend private-namespace.scm)
add_executable(csi-static ${csi_STATIC_SOURCES})
target_link_libraries(csi-static libchicken-static ${CHICKEN_EXTRA_LIBRARIES})
set_target_properties(csi-static PROPERTIES LINK_FLAGS -static)
set_target_properties(csi-static PROPERTIES LINK_SEARCH_START_STATIC TRUE)
set_target_properties(csi-static PROPERTIES LINK_SEARCH_END_STATIC TRUE)

install(TARGETS csi
    RUNTIME DESTINATION ${INSTALL_BINDIR})

set(utility_PROGRAMS csc chicken-install chicken-uninstall chicken-status
    chicken-profile)
foreach(program ${utility_PROGRAMS})
    unset(program_SOURCES)
    add_chicken_sources(program_SOURCES ${program}.scm
        OPTIONS ${CHICKEN_PROGRAM_OPTIONS})
    add_executable(${program} ${program_SOURCES})
    target_link_libraries(${program} libchicken ${CHICKEN_EXTRA_LIBS})
    install(TARGETS ${program}
        RUNTIME DESTINATION ${INSTALL_BINDIR})
endforeach()

# setup-api
set(setupapi_MODULES setup-api setup-download)

foreach(name ${setupapi_MODULES})
    set(filename ${name}.scm)
    add_chicken_library(${name} ${filename} SHARED
        CHICKEN_LIBRARY libchicken
        EMIT ${name}
        OPTIONS ${CHICKEN_LIBRARY_OPTIONS})
    add_chicken_library(${name}.import ${name}.import.scm SHARED
        CHICKEN_LIBRARY libchicken
        OPTIONS ${CHICKEN_LIBRARY_OPTIONS})
    add_dependencies(${name} libchicken)
    add_dependencies(${name}.import ${name})
    install(TARGETS ${name} ${name}.import
        LIBRARY DESTINATION ${INSTALL_EGGDIR})
endforeach()

# import libraries
set(CHICKEN_IMPORT_LIBRARIES chicken lolevel srfi-1 srfi-4 data-structures
    ports files posix srfi-13 srfi-69 extras srfi-14 tcp foreign srfi-18 utils
    csi irregex)

foreach(lib ${CHICKEN_IMPORT_LIBRARIES})
    set(name ${lib}.import)
    set(filename ${lib}.import.scm)
    add_chicken_library(${name} ${filename} SHARED
        OPTIONS ${CHICKEN_IMPORT_LIBRARY_OPTIONS})
    add_dependencies(${name} libchicken)
    install(TARGETS ${name}
        LIBRARY DESTINATION ${INSTALL_EGGDIR})
endforeach()

install(FILES chicken.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INSTALL_INCLUDEDIR})

# set(MANPAGES chicken.1 csc.1 csi.1 chicken-install.1 chicken-uninstall.1
#     chicken-status.1 chicken-profile.1 chicken-bug.1)
# install(FILES ${MANPAGES}
#     DESTINATION ${MAN_INSTALL_DIR})
