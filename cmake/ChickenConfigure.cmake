# - Chicken Parameters

include(CMakeDependentOption)
include(GNUInstallDirs)
include(FindPackageMessage)

# The most of these settings are only needed to generate somewhat backward
# compatible chicken-config.h and make CHICKEN's command line utilities happy,
# this provides smoother migration path for those who are not yet ready to
# fully embrace CMake. The host/target/cross split and prefixes are
# deliberately not implemented because they add quite a lot of obscurity.
# Cross compilation should work just fine with setting CMAKE_SYSTEM_NAME,
# CMAKE_SYSTEM_PROCESSOR only.

set(API_VERSION 7 CACHE INTERNAL "")

# TODO: is there a way to detect this?
set(STACKDIRECTION 1)

option(BUILD_SHARED_LIBS "Build shared libraries" YES)
option(BUILD_STATIC_LIBS "Build static libraries" NO)
option(CHICKEN_BOOTSTRAP "Bootstrap build" YES)

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

set(CHICKEN_CONFIG_CROSS 0 CACHE BOOL "Set C_CROSS_CHICKEN in chicken-config.h")
mark_as_advanced(CHICKEN_CONFIG_CROSS)

set(CHICKEN_INSTALL_NAME chicken CACHE STRING
    "Canonical Chicken name")
mark_as_advanced(CHICKEN_INSTALL_NAME)

find_program(CHICKEN_INSTALL_CC          gcc)
find_program(CHICKEN_INSTALL_CXX         g++)
find_program(CHICKEN_INSTALL_RC_COMPILER windres)
mark_as_advanced(CHICKEN_INSTALL_CC CHICKEN_INSTALL_CXX CHICKEN_INSTALL_RC_COMPILER)

set(CHICKEN_TARGET_NAME  ${CHICKEN_INSTALL_NAME} CACHE STRING
    "Canonical target Chicken name")
set(CHICKEN_TARGET_FEATURES "" CACHE STRING
    "Target features")
mark_as_advanced(CHICKEN_TARGET_NAME CHICKEN_TARGET_FEATURES)

set(CHICKEN_TARGET_CC          gcc     CACHE STRING "")
set(CHICKEN_TARGET_CXX         g++     CACHE STRING "")
set(CHICKEN_TARGET_RC_COMPILER windres CACHE STRING "")
mark_as_advanced(CHICKEN_TARGET_CC CHICKEN_TARGET_CXX CHICKEN_TARGET_RC_COMPILER)

set(CHICKEN_TARGET_ROOT_DIR "" CACHE PATH "")
set(CHICKEN_TARGET_RUN_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE PATH "")
set(TARGET_PREFIX ${CHICKEN_TARGET_ROOT_DIR}${CHICKEN_TARGET_RUN_PREFIX})

if(WIN32)
    set(INSTALL_BINDIR     bin)
    set(INSTALL_LIBDIR     ${INSTALL_BINDIR})
    set(INSTALL_EGGDIR     lib)
    set(INSTALL_DATADIR    share/${CHICKEN_INSTALL_NAME})
    set(INSTALL_DOCDIR     doc)
    set(INSTALL_INCLUDEDIR ${CMAKE_INSTALL_INCLUDEDIR})
    set(INSTALL_MANDIR     ${INSTALL_DOCDIR}/man)
else()
    set(INSTALL_BINDIR     bin)
    set(INSTALL_LIBDIR     lib)
    set(INSTALL_EGGDIR     lib/${CHICKEN_INSTALL_NAME}/${API_VERSION})
    set(INSTALL_DATADIR    share/${CHICKEN_INSTALL_NAME})
    set(INSTALL_DOCDIR     ${INSTALL_DATADIR}/doc)
    set(INSTALL_INCLUDEDIR ${CMAKE_INSTALL_INCLUDEDIR}/${CHICKEN_INSTALL_NAME})
    set(INSTALL_MANDIR     ${CMAKE_INSTALL_MANDIR}/man1)
endif()

set(TARGET_BINDIR      ${INSTALL_BINDIR})
set(TARGET_LIBDIR      ${INSTALL_LIBDIR})
set(TARGET_EGGDIR      ${TARGET_LIBDIR}/${CHICKEN_TARGET_NAME}/${API_VERSION})
set(TARGET_DATADIR     share/${CHICKEN_TARGET_NAME})
set(TARGET_INCLUDEDIR  ${CMAKE_INSTALL_INCLUDEDIR}/${CHICKEN_TARGET_NAME})

foreach(D BINDIR LIBDIR EGGDIR DATADIR INCLUDEDIR)
    get_filename_component(INSTALL_FULL_${D} "${CMAKE_INSTALL_PREFIX}/${INSTALL_${D}}" ABSOLUTE)
    get_filename_component(TARGET_FULL_${D} "${TARGET_PREFIX}/${TARGET_${D}}" ABSOLUTE)
endforeach()
get_filename_component(TARGET_FULL_RUN_LIBDIR "${CHICKEN_TARGET_RUN_PREFIX}/${TARGET_LIBDIR}" ABSOLUTE)

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

if(WIN32)
    set(C_USES_SONAME 0)
    set(C_WINDOWS_SHELL 1)
else()
    set(C_USES_SONAME 1)
    set(C_WINDOWS_SHELL 0)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(CHICKEN_C_FLAGS_CONFIG ${CMAKE_C_FLAGS_DEBUG})
elseif(CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
    set(CHICKEN_C_FLAGS_CONFIG ${CMAKE_C_FLAGS_MINSIZEREL})
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(CHICKEN_C_FLAGS_CONFIG ${CMAKE_C_FLAGS_RELEASE})
elseif(CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
    set(CHICKEN_C_FLAGS_CONFIG ${CMAKE_C_FLAGS_RELWITHDEBINFO})
else()
    set(CHICKEN_C_FLAGS_CONFIG ${CMAKE_C_FLAGS_MINSIZEREL})
endif()

# If no build configuration or user supplied flags was given try to use some
# sensible defaults to preserve the behaviour of the legacy build system.
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_C_FLAGS)
    _chicken_join(CMAKE_C_FLAGS ${CHICKEN_C_FLAGS_CONFIG})
endif()

foreach(D ${CHICKEN_DEFINITIONS})
    list(INSERT CHICKEN_C_FLAGS_CONFIG 0 -D${D})
endforeach()

_chicken_join(CHICKEN_C_FLAGS_CONFIG ${CHICKEN_C_FLAGS_CONFIG} ${CHICKEN_C_FLAGS})

foreach(lib ${CHICKEN_EXTRA_LIBRARIES})
    set(CHICKEN_CONFIG_MORE_LIBS "${CHICKEN_CONFIG_MORE_LIBS} -l${lib}")
endforeach()
string(STRIP "${CHICKEN_CONFIG_MORE_LIBS}" CHICKEN_CONFIG_MORE_LIBS)

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

set(CHICKEN_CONFIG_H ${CMAKE_CURRENT_BINARY_DIR}/chicken-config.h)
configure_file("chicken-config.h.in" ${CHICKEN_CONFIG_H})
