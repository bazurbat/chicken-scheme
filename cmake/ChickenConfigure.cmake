# - Chicken Parameters

include(GNUInstallDirs)
include(CMakeDependentOption)

set(API_VERSION 7 CACHE INTERNAL "")

# TODO: is there a way to detect this?
set(STACKDIRECTION 1)

option(BUILD_STATIC_LIBS "Build static libraries" NO)
option(BUILD_SHARED_LIBS "Build shared libraries" YES)

cmake_dependent_option(BUILD_STATIC_PROGRAMS "Build static programs" YES
    "BUILD_STATIC_LIBS" NO)
mark_as_advanced(BUILD_STATIC_LIBS BUILD_SHARED_LIBS BUILD_STATIC_PROGRAMS)

option(GC_HOOKS "Enable GC hooks" NO)
option(COLLECT_ALL_SYMBOLS "Always collect all unused symbols" NO)
mark_as_advanced(GC_HOOKS COLLECT_ALL_SYMBOLS)

if(GC_HOOKS)
    set(C_GC_HOOKS 1)
endif()
if(COLLECT_ALL_SYMBOLS)
    set(C_COLLECT_ALL_SYMBOLS 1)
endif()
if(APPLY_HACK)
    set(C_HACKED_APPLY TRUE)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "MinSizeRel" CACHE STRING
        "The type of build (Debug, Release, MinSizeRel)"
        FORCE)
elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(DEBUGBUILD 1)
endif()

find_program(C_INSTALL_CC ${_chicken_host_system}gcc)
find_program(C_INSTALL_CXX ${_chicken_host_system}g++)
find_program(C_INSTALL_RC_COMPILER ${_chicken_host_system}windres)

if(NOT CHICKEN_HOST_SYSTEM STREQUAL CHICKEN_TARGET_SYSTEM)
    set(CHICKEN_CROSS 1)
    set(_program_prefix ${_chicken_target_system})

    set(C_TARGET_CC ${C_INSTALL_CC} CACHE STRING "")
    set(C_TARGET_CXX ${C_INSTALL_CXX} CACHE STRING "")
    set(C_TARGET_RC_COMPILER ${C_INSTALL_RC_COMPILER} CACHE STRING "")
else()
    set(CHICKEN_CROSS 0)
    set(_program_prefix "")

    set(C_TARGET_CC ${_chicken_target_system}gcc CACHE STRING "")
    set(C_TARGET_CXX ${_chicken_target_system}g++ CACHE STRING "")
    set(C_TARGET_RC_COMPILER ${_chicken_target_system}windres CACHE STRING "")
endif()

set(CHICKEN_TARGET_ROOT_DIR "" CACHE PATH "")
set(TARGET_RUN_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE INTERNAL "")

set(PROGRAM_PREFIX ${_program_prefix} CACHE STRING
    "Name prefix for generated executables")

set(INSTALL_NAME       ${PROGRAM_PREFIX}chicken CACHE STRING
    "Canonical Chicken name")
set(INSTALL_PREFIX     ${CMAKE_INSTALL_PREFIX})

if(WIN32)
    set(INSTALL_BINDIR     ".")
    set(INSTALL_LIBDIR     ${INSTALL_BINDIR})
    set(INSTALL_EGGDIR     lib/${API_VERSION})
    set(INSTALL_DATADIR    ".")
    set(INSTALL_DOCDIR     ${INSTALL_DATADIR}/doc)
    set(INSTALL_INCLUDEDIR ${CMAKE_INSTALL_INCLUDEDIR})
    set(INSTALL_MANDIR     ${INSTALL_DOCDIR}/man)
else()
    set(INSTALL_BINDIR     ${CMAKE_INSTALL_BINDIR})
    set(INSTALL_LIBDIR     lib)
    set(INSTALL_EGGDIR     ${INSTALL_LIBDIR}/chicken/${API_VERSION})
    set(INSTALL_DATADIR    ${CMAKE_INSTALL_DATADIR}/chicken)
    set(INSTALL_DOCDIR     ${INSTALL_DATADIR}/doc)
    set(INSTALL_INCLUDEDIR ${CMAKE_INSTALL_INCLUDEDIR}/chicken)
    set(INSTALL_MANDIR     ${CMAKE_INSTALL_MANDIR}/man1)
endif()

set(TARGET_NAME        ${INSTALL_NAME} CACHE STRING
    "Canonical target Chicken name")
set(TARGET_PREFIX      ${CHICKEN_TARGET_ROOT_DIR}${TARGET_RUN_PREFIX})

set(TARGET_BINDIR      ${INSTALL_BINDIR})
set(TARGET_LIBDIR      ${INSTALL_LIBDIR})
set(TARGET_EGGDIR      ${TARGET_LIBDIR}/chicken/${API_VERSION})
set(TARGET_DATADIR     ${INSTALL_DATADIR})
set(TARGET_INCLUDEDIR  ${INSTALL_INCLUDEDIR})

foreach(D BINDIR LIBDIR EGGDIR DATADIR INCLUDEDIR)
    get_filename_component(INSTALL_FULL_${D} "${INSTALL_PREFIX}/${INSTALL_${D}}" ABSOLUTE)
    get_filename_component(TARGET_FULL_${D} "${TARGET_PREFIX}/${TARGET_${D}}" ABSOLUTE)
endforeach()
get_filename_component(TARGET_FULL_RUN_LIBDIR "${TARGET_RUN_PREFIX}/${TARGET_LIBDIR}" ABSOLUTE)

set(CHICKEN_OPTIONS -optimize-level 2 -inline -ignore-repository -feature
    chicken-bootstrap)
set(LIBRARY_OPTIONS -explicit-use -no-trace)
set(PROGRAM_OPTIONS -no-lambda-info -local)
set(COMPILER_OPTIONS ${PROGRAM_OPTIONS} -extend
    private-namespace.scm)
set(IMPORT_LIBRARY_OPTIONS -no-trace)

if(DEFINED DEBUGBUILD)
    list(APPEND CHICKEN_OPTIONS -feature debugbuild -verbose)
else()
    list(APPEND CHICKEN_OPTIONS -no-warnings)
    list(APPEND PROGRAM_OPTIONS -no-trace)
    list(APPEND COMPILER_OPTIONS -no-trace)
endif()

if(NOT DEFINED BUILDING_CHICKEN_BOOT)
    list(APPEND CHICKEN_OPTIONS -specialize -types
        ${PROJECT_SOURCE_DIR}/types.db)
endif()

include(CheckIncludeFile)
include(CheckSymbolExists)
include(CheckTypeSize)
include(CheckLanguage)

# also checks HAVE_SYS_TYPES_H, HAVE_STDINT_H, and HAVE_STDDEF_H
check_type_size("long long"          LONG_LONG)
check_type_size("unsigned long long" UNSIGNED_LONG_LONG)

check_include_file("alloca.h"   HAVE_ALLOCA_H)
check_include_file("dirent.h"   HAVE_DIRENT_H)
check_include_file("dlfcn.h"    HAVE_DLFCN_H)
check_include_file("errno.h"    HAVE_ERRNO_H)
check_include_file("grp.h"      HAVE_GRP_H)
check_include_file("inttypes.h" HAVE_INTTYPES_H)
check_include_file("limits.h"   HAVE_LIMITS_H)
check_include_file("malloc.h"   HAVE_MALLOC_H)
check_include_file("memory.h"   HAVE_MEMORY_H)
check_include_file("poll.h"     HAVE_POSIX_POLL)
check_include_file("stdlib.h"   HAVE_STDLIB_H)
check_include_file("string.h"   HAVE_STRING_H)
check_include_file("strings.h"  HAVE_STRINGS_H)
check_include_file("sys/stat.h" HAVE_SYS_STAT_H)
check_include_file("sysexits.h" HAVE_SYSEXITS_H)
check_include_file("unistd.h"   HAVE_UNISTD_H)
check_include_file("utime.h"    HAVE_UTIME_H)

if(HAVE_ALLOCA_H)
    check_symbol_exists("alloca"     "alloca.h" HAVE_ALLOCA)
elseif(HAVE_MALLOC_H)
    check_symbol_exists("alloca"     "malloc.h" HAVE_ALLOCA)
endif()
check_symbol_exists("GetProcAddress" "windows.h" HAVE_GETPROCADDRESS)
check_symbol_exists("LoadLibrary"    "windows.h" HAVE_LOADLIBRARY)
check_symbol_exists("memmove"        "string.h"  HAVE_MEMMOVE)
check_symbol_exists("sigaction"      "signal.h"  HAVE_SIGACTION)
check_symbol_exists("sigprocmask"    "signal.h"  HAVE_SIGPROCMASK)
check_symbol_exists("sigsetjmp"      "setjmp.h"  HAVE_SIGSETJMP)
check_symbol_exists("strerror"       "string.h"  HAVE_STRERROR)
check_symbol_exists("strlcat"        "string.h"  HAVE_STRLCAT)
check_symbol_exists("strlcpy"        "string.h"  HAVE_STRLCPY)
check_symbol_exists("strtoll"        "stdlib.h"  HAVE_STRTOLL)
check_symbol_exists("strtoq"         "stdlib.h"  HAVE_STRTOQ)

# FIXME: seems to be defined in every platform Makefile but not used anywhere
set(STDC_HEADERS 1)

function(_chicken_set_more_libs)
    # TODO: handle MSVC
    set(libs "")
    foreach(lib ${CHICKEN_EXTRA_LIBRARIES})
        set(libs "${libs} -l${lib}")
    endforeach()
    string(STRIP ${libs} libs)
    set(MORE_LIBS ${libs} PARENT_SCOPE)
endfunction()
_chicken_set_more_libs()

set(C_USES_SONAME 1)
set(C_WINDOWS_SHELL 0)

# TODO: investigate cygwin/mingw/win32 native
if(WIN32)
    set(C_USES_SONAME 0)
    set(C_WINDOWS_SHELL 1)
endif()

set(CHICKEN_CONFIG_H ${CMAKE_CURRENT_BINARY_DIR}/chicken-config.h)
configure_file("chicken-config.h.in" ${CHICKEN_CONFIG_H})

# let CMake handle flag combinations
set(CMAKE_C_FLAGS "${CHICKEN_C_DEFINITIONS} ${CHICKEN_C_FLAGS}")
set(CMAKE_C_FLAGS_MINSIZEREL ${CHICKEN_C_FLAGS_MINSIZEREL})
set(CMAKE_C_FLAGS_RELEASE ${CHICKEN_C_FLAGS_RELEASE})
set(CMAKE_C_FLAGS_DEBUG ${CHICKEN_C_FLAGS_DEBUG})
unset(CHICKEN_GLOBAL_C_FLAGS)

file(COPY types.db DESTINATION .)
