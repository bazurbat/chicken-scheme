cmake_minimum_required(VERSION 2.8)

project(chicken C)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_HOME_DIRECTORY}/cmake)
find_package(Chicken)
# find_package(Chicken CONFIG PATHS cmake NO_DEFAULT_PATH)
include(ChickenApplyHack)

option(BUILD_SHARED_LIBS "Build shared libraries" TRUE)

set(BINARYVERSION 7)
set(STACKDIRECTION 1)

set(CHICKEN_EXTRA_LIBRARIES m dl)

set(CHICKEN_OPTIONS -optimize-level 2 -inline -ignore-repository -feature
    chicken-bootstrap)

set(CHICKEN_LIBRARY_OPTIONS -explicit-use -no-trace)

set(CHICKEN_PROGRAM_OPTIONS -no-lambda-info -local)

set(CHICKEN_COMPILER_OPTIONS ${CHICKEN_PROGRAM_OPTIONS} -extend
    private-namespace.scm)

set(CHICKEN_DYNAMIC_OPTIONS -feature chicken-compile-shared -dynamic)

set(CHICKEN_IMPORT_LIBRARY_OPTIONS ${CHICKEN_DYNAMIC_OPTIONS} -no-trace)

if(DEFINED DEBUGBUILD)
    list(APPEND CHICKEN_OPTIONS -feature debugbuild -verbose)
else()
    list(APPEND CHICKEN_OPTIONS -no-warnings)
    list(APPEND CHICKEN_PROGRAM_OPTIONS -no-trace)
    list(APPEND CHICKEN_COMPILER_OPTIONS -no-trace)
endif()

if(NOT DEFINED BUILDING_CHICKEN_BOOT)
    list(APPEND CHICKEN_OPTIONS -specialize -types
        ${PROJECT_SOURCE_DIR}/types.db)
endif()

add_definitions(-fno-strict-aliasing -fwrapv
    -DHAVE_CHICKEN_CONFIG_H -DC_ENABLE_PTABLES)

if(DEFINED DEBUGBUILD)
    add_definitions(-g -Wall -Wno-unused)
endif()

if(DEFINED OPTIMIZE_FOR_SPEED)
    add_definitions(-O3 -fomit-frame-pointer)
else()
    add_definitions(-Os -fomit-frame-pointer)
endif()

set(CHICKEN_CONFIG_H ${CMAKE_BINARY_DIR}/chicken-config.h)
configure_file("chicken-config.h.in" ${CHICKEN_CONFIG_H})

add_custom_command(
    OUTPUT buildtag.h
    COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/identify.sh ${CMAKE_CURRENT_SOURCE_DIR})
add_custom_target(buildtag ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/buildtag.h)

add_custom_command(
    OUTPUT buildversion
    COMMAND cmake -E copy_if_different ${CMAKE_CURRENT_SOURCE_DIR}/buildversion ${CMAKE_CURRENT_BINARY_DIR})

add_custom_target(tbuildversion ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/buildversion)

# libchicken
set_property(SOURCE runtime.c PROPERTY OBJECT_DEPENDS ${CHICKEN_CONFIG_H})
set(libchicken_SOURCES runtime.c)
set(libchicken_SCM_SOURCES library.scm eval.scm data-structures.scm ports.scm
    files.scm extras.scm lolevel.scm utils.scm tcp.scm srfi-1.scm srfi-4.scm
    srfi-13.scm srfi-14.scm srfi-18.scm posixunix.scm irregex.scm
    scheduler.scm profiler.scm stub.scm expand.scm modules.scm
    chicken-syntax.scm chicken-ffi-syntax.scm build-version.scm)
chicken_wrap_sources(libchicken_SOURCES ${libchicken_SCM_SOURCES}
    OPTIONS ${CHICKEN_OPTIONS} ${CHICKEN_LIBRARY_OPTIONS})

add_chicken_source(libchicken_SOURCES srfi-69.scm
    ${CHICKEN_OPTIONS} ${CHICKEN_LIBRARY_OPTIONS}
    -extend private-namespace.scm)

if(C_HACKED_APPLY)
    list(APPEND libchicken_SOURCES apply-hack.${CHICKEN_ARCH}.S)
endif()

add_library(libchicken ${libchicken_SOURCES})
target_compile_definitions(libchicken PUBLIC -DPIC -DC_BUILDING_LIBCHICKEN)
target_link_libraries(libchicken m dl)
set_target_properties(libchicken PROPERTIES
    PREFIX "" SOVERSION 7)
add_dependencies(libchicken buildtag tbuildversion)

# chicken
set(chicken_SCM_SOURCES chicken.scm batch-driver.scm compiler.scm
    optimizer.scm lfa2.scm compiler-syntax.scm scrutinizer.scm support.scm
    c-platform.scm c-backend.scm)
chicken_wrap_sources(chicken_SOURCES ${chicken_SCM_SOURCES}
    OPTIONS ${CHICKEN_OPTIONS} ${CHICKEN_COMPILER_OPTIONS})

add_executable(chicken ${chicken_SOURCES})
target_link_libraries(chicken libchicken ${CHICKEN_EXTRA_LIBRARIES})

# csi
set(csi_SCM_SOURCES csi.scm banner.scm private-namespace.scm)
add_chicken_source(csi_SOURCES csi.scm
    ${CHICKEN_OPTIONS} ${CHICKEN_PROGRAM_OPTIONS}
    -extend private-namespace.scm)

add_executable(csi ${csi_SOURCES})
target_link_libraries(csi libchicken ${CHICKEN_EXTRA_LIBRARIES})

# setup-api
# set(setupapi_SCM_SOURCES setup-api.scm setup-download.scm)
# chicken_wrap_sources(setupapi_SOURCES ${setupapi_SCM_SOURCES}
#     OPTIONS ${CHICKEN_OPTIONS})

# import
# file(GLOB import_SCM_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.import.scm")
# foreach(s ${import_SCM_SOURCES})
#     add_chicken_library(${s} ${CHICKEN_OPTIONS}
#         ${CHICKEN_IMPORT_LIBRARY_OPTIONS})
# endforeach()
