# - Chicken Parameters

include(CMakeDependentOption)
include(GNUInstallDirs)
include(FindPackageMessage)

set(API_VERSION 7 CACHE INTERNAL "")

# TODO: is there a way to detect this?
set(STACKDIRECTION 1)

option(BUILD_SHARED_LIBS "Build shared libraries" YES)
option(BUILD_STATIC_LIBS "Build static libraries" NO)

cmake_dependent_option(BUILD_STATIC_PROGRAMS "Build static programs" YES
    "BUILD_STATIC_LIBS" NO)
mark_as_advanced(BUILD_STATIC_LIBS BUILD_SHARED_LIBS BUILD_STATIC_PROGRAMS)

option(CHICKEN_GC_HOOKS "Enable GC hooks" NO)
option(CHICKEN_COLLECT_ALL_SYMBOLS "Always collect all unused symbols" NO)
mark_as_advanced(CHICKEN_GC_HOOKS CHICKEN_COLLECT_ALL_SYMBOLS)

if(CHICKEN_GC_HOOKS)
    set(C_GC_HOOKS 1)
endif()
if(CHICKEN_COLLECT_ALL_SYMBOLS)
    set(C_COLLECT_ALL_SYMBOLS 1)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(DEBUGBUILD 1)
endif()

if(NOT CHICKEN_HOST_SYSTEM STREQUAL CHICKEN_TARGET_SYSTEM)
    set(CHICKEN_CROSS 1)
    set(_chicken_program_prefix ${_chicken_target_system})
    if(CHICKEN_TARGET_SYSTEM)
        set(_chicken_target_suffix -${CHICKEN_TARGET_SYSTEM})
    endif()
else()
    set(CHICKEN_CROSS 0)
    set(_chicken_program_prefix)
endif()

set(CHICKEN_TARGET_CC ${_chicken_target_system}gcc CACHE STRING "")
set(CHICKEN_TARGET_CXX ${_chicken_target_system}g++ CACHE STRING "")
set(CHICKEN_TARGET_RC_COMPILER ${_chicken_target_system}windres CACHE STRING "")
mark_as_advanced(CHICKEN_TARGET_CC CHICKEN_TARGET_CXX CHICKEN_TARGET_RC_COMPILER)

set(CHICKEN_TARGET_ROOT_DIR "" CACHE PATH "")
set(CHICKEN_TARGET_RUN_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE PATH "")

set(CHICKEN_PROGRAM_PREFIX ${_chicken_program_prefix} CACHE STRING
    "Name prefix for generated executables")
mark_as_advanced(CHICKEN_PROGRAM_PREFIX)

set(CHICKEN_INSTALL_NAME ${CHICKEN_PROGRAM_PREFIX}chicken CACHE STRING
    "Canonical Chicken name")
set(INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX})
mark_as_advanced(CHICKEN_INSTALL_NAME)

if(WIN32)
    set(INSTALL_BINDIR     bin)
    set(INSTALL_LIBDIR     ${INSTALL_BINDIR})
    set(INSTALL_EGGDIR     lib)
    set(INSTALL_DATADIR    share/chicken)
    set(INSTALL_DOCDIR     doc)
    set(INSTALL_INCLUDEDIR ${CMAKE_INSTALL_INCLUDEDIR})
    set(INSTALL_MANDIR     ${INSTALL_DOCDIR}/man)
else()
    set(INSTALL_BINDIR     bin)
    set(INSTALL_LIBDIR     lib)
    set(INSTALL_EGGDIR     lib/${CHICKEN_INSTALL_NAME}/${API_VERSION})
    set(INSTALL_DATADIR    share/chicken${_chicken_target_suffix})
    set(INSTALL_DOCDIR     ${INSTALL_DATADIR}/doc)
    set(INSTALL_INCLUDEDIR ${CMAKE_INSTALL_INCLUDEDIR}/${CHICKEN_INSTALL_NAME})
    set(INSTALL_MANDIR     ${CMAKE_INSTALL_MANDIR}/man1)
endif()

set(CHICKEN_TARGET_NAME        ${CHICKEN_INSTALL_NAME} CACHE STRING
    "Canonical target Chicken name")
set(TARGET_PREFIX ${CHICKEN_TARGET_ROOT_DIR}${CHICKEN_TARGET_RUN_PREFIX})
mark_as_advanced(CHICKEN_TARGET_NAME)

set(TARGET_BINDIR      ${INSTALL_BINDIR})
set(TARGET_LIBDIR      ${INSTALL_LIBDIR})
set(TARGET_EGGDIR      ${TARGET_LIBDIR}/${CHICKEN_TARGET_NAME}/${API_VERSION})
set(TARGET_DATADIR     share/${CHICKEN_TARGET_NAME})
set(TARGET_INCLUDEDIR  ${CMAKE_INSTALL_INCLUDEDIR}/${CHICKEN_TARGET_NAME})

foreach(D BINDIR LIBDIR EGGDIR DATADIR INCLUDEDIR)
    get_filename_component(INSTALL_FULL_${D} "${INSTALL_PREFIX}/${INSTALL_${D}}" ABSOLUTE)
    get_filename_component(TARGET_FULL_${D} "${TARGET_PREFIX}/${TARGET_${D}}" ABSOLUTE)
endforeach()
get_filename_component(TARGET_FULL_RUN_LIBDIR "${CHICKEN_TARGET_RUN_PREFIX}/${TARGET_LIBDIR}" ABSOLUTE)

set(CHICKEN_OPTIONS -optimize-level 2 -inline)
list(APPEND CHICKEN_OPTIONS -ignore-repository)
list(APPEND CHICKEN_OPTIONS -feature chicken-bootstrap)
set(LIBRARY_OPTIONS -explicit-use -no-trace)
set(PROGRAM_OPTIONS -no-lambda-info -local)
set(IMPORT_LIBRARY_OPTIONS -no-trace)

if(DEFINED DEBUGBUILD)
    list(APPEND CHICKEN_OPTIONS -feature debugbuild -verbose)
else()
    list(APPEND CHICKEN_OPTIONS -no-warnings)
    list(APPEND PROGRAM_OPTIONS -no-trace)
endif()

if(NOT DEFINED BUILDING_CHICKEN_BOOT)
    list(APPEND CHICKEN_OPTIONS -specialize -types ${CHICKEN_TYPES_DB})
endif()

include(CheckIncludeFile)
include(CheckSymbolExists)
include(CheckTypeSize)
include(CheckLanguage)

# also checks HAVE_SYS_TYPES_H, HAVE_STDINT_H, and HAVE_STDDEF_H
check_type_size("long long"          LONG_LONG)
check_type_size("unsigned long long" UNSIGNED_LONG_LONG)

check_include_file("alloca.h"   HAVE_ALLOCA_H)
check_include_file("direct.h"   HAVE_DIRECT_H)
check_include_file("dirent.h"   HAVE_DIRENT_H)
check_include_file("dl.h"       HAVE_DL_H)
check_include_file("dlfcn.h"    HAVE_DLFCN_H)
check_include_file("errno.h"    HAVE_ERRNO_H)
check_include_file("grp.h"      HAVE_GRP_H)
check_include_file("inttypes.h" HAVE_INTTYPES_H)
check_include_file("io.h"       HAVE_IO_H)
check_include_file("limits.h"   HAVE_LIMITS_H)
check_include_file("malloc.h"   HAVE_MALLOC_H)
check_include_file("memory.h"   HAVE_MEMORY_H)
check_include_file("poll.h"     HAVE_POSIX_POLL)
check_include_file("process.h"  HAVE_PROCESS_H)
check_include_file("stdlib.h"   HAVE_STDLIB_H)
check_include_file("string.h"   HAVE_STRING_H)
check_include_file("strings.h"  HAVE_STRINGS_H)
check_include_file("sys/stat.h" HAVE_SYS_STAT_H)
check_include_file("sysexits.h" HAVE_SYSEXITS_H)
check_include_file("unistd.h"   HAVE_UNISTD_H)
check_include_file("utime.h"    HAVE_UTIME_H)

if(NOT HAVE_POSIX_POLL)
    set(NO_POSIX_POLL 1)
endif()

if(HAVE_ALLOCA_H)
    check_symbol_exists("alloca"     "alloca.h" HAVE_ALLOCA)
elseif(HAVE_MALLOC_H)
    check_symbol_exists("alloca"     "malloc.h" HAVE_ALLOCA)
endif()
check_symbol_exists("GetProcAddress" "windows.h" HAVE_GETPROCADDRESS)
check_symbol_exists("LoadLibrary"    "windows.h" HAVE_LOADLIBRARY)
check_symbol_exists("memmove"        "string.h"  HAVE_MEMMOVE)
check_symbol_exists("setenv"         "stdlib.h"  HAVE_SETENV)
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

set(C_USES_SONAME 1)

# TODO: investigate cygwin/mingw/win32 native
if(WIN32)
    set(C_USES_SONAME 0)
endif()

function(_chicken_find_apply_hack)
    if(CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
        set(arch x86-64)
    elseif(CMAKE_SYSTEM_PROCESSOR STREQUAL "i686")
        set(arch x86)
    else()
        set(arch ${CMAKE_SYSTEM_PROCESSOR})
    endif()

    set(source ${CMAKE_CURRENT_SOURCE_DIR}/apply-hack.${arch}.S)

    if(EXISTS ${source} AND CMAKE_ASM_COMPILER_WORKS AND NOT MSVC)
        set(CHICKEN_APPLY_HACK ${source} CACHE INTERNAL "")
        set(C_HACKED_APPLY YES PARENT_SCOPE)
        find_package_message(CHICKEN_APPLY_HACK "Found apply hack: ${source}"
            "${CHICKEN_APPLY_HACK}")
    endif()
endfunction()
_chicken_find_apply_hack()

set(CMAKE_ASM_FLAGS_MINSIZEREL ${CMAKE_C_FLAGS_MINSIZEREL})
set(CMAKE_ASM_FLAGS_RELEASE ${CMAKE_C_FLAGS_RELEASE})
set(CMAKE_ASM_FLAGS_DEBUG ${CMAKE_C_FLAGS_DEBUG})

set(CHICKEN_CONFIG_H ${CMAKE_CURRENT_BINARY_DIR}/chicken-config.h)
configure_file("chicken-config.h.in" ${CHICKEN_CONFIG_H})

# do not use chicken.h from system include path
set(CHICKEN_INCLUDE_DIRS ${chicken_BINARY_DIR})

file(COPY ${CHICKEN_TYPES_DB} DESTINATION .)
