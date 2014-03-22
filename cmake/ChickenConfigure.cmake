# - Chicken Parameters

include(GNUInstallDirs)

set(CHICKEN_API_VERSION 7 CACHE STRING "Chicken API version")
set(STACKDIRECTION 1)

option(BUILD_SHARED_LIBS "Build shared libraries" YES)
option(CHICKEN_GC_HOOKS "Enable GC hooks" NO)
option(CHICKEN_COLLECT_ALL_SYMBOLS "Always collect all unused symbols" NO)

if(CHICKEN_APPLY_HACK)
    set(C_HACKED_APPLY TRUE)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "MinSizeRel" CACHE STRING
        "The type of build (Debug, Release, MinSizeRel)"
        FORCE)
endif()

if(CHICKEN_GC_HOOKS)
    set(C_GC_HOOKS 1)
endif()
if(CHICKEN_COLLECT_ALL_SYMBOLS)
    set(C_COLLECT_ALL_SYMBOLS 1)
endif()

set(CHICKEN_SYSTEM "" CACHE STRING
    "Name of system")
set(CHICKEN_TARGET_SYSTEM ${CHICKEN_SYSTEM} CACHE STRING
    "Name of target system")
if(CHICKEN_SYSTEM STREQUAL CHICKEN_TARGET_SYSTEM)
    set(_chicken_cross 0)
else()
    set(_chicken_cross 1)
endif()
set(CHICKEN_CROSS ${_chicken_cross} CACHE INTERNAL "Compiling cross Chicken")

set(CHICKEN_TARGET_PREFIX ${CHICKEN_PREFIX} CACHE STRING
    "Prefix for target Chicken programs and paths")
set(CHICKEN_TARGET_SUFFIX ${CHICKEN_SUFFIX} CACHE STRING
    "Suffix for target Chicken programs and paths")
set(CHICKEN_TARGET_NAME ${CHICKEN_TARGET_PREFIX}chicken${CHICKEN_TARGET_SUFFIX} CACHE INTERNAL
    "Canonical target Chicken name")
set(CHICKEN_TARGET_INSTALL_PREFIX ${CHICKEN_INSTALL_PREFIX} CACHE STRING
    "Target installation directory")
set(CHICKEN_TARGET_RUN_PREFIX ${CHICKEN_INSTALL_PREFIX} CACHE STRING
    "Effective runtime target prefix")

set(INSTALL_BINDIR ${CHICKEN_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR})
set(INSTALL_LIBDIR ${CHICKEN_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR})
set(INSTALL_DATAROOTDIR ${CHICKEN_INSTALL_PREFIX}/${CMAKE_INSTALL_DATAROOTDIR})
set(INSTALL_DATADIR ${CHICKEN_INSTALL_PREFIX}/${CMAKE_INSTALL_DATADIR}/${CHICKEN_NAME})
set(INSTALL_INCLUDEDIR ${CHICKEN_INSTALL_PREFIX}/${CMAKE_INSTALL_INCLUDEDIR}/${CHICKEN_NAME})
set(INSTALL_EGGDIR ${INSTALL_LIBDIR}/${CHICKEN_NAME}/${CHICKEN_API_VERSION})
set(INSTALL_MANDIR ${CHICKEN_INSTALL_PREFIX}/${CMAKE_INSTALL_MANDIR}/man1)
set(INSTALL_DOCDIR ${INSTALL_DATADIR}/doc)

set(TARGET_BINDIR ${CHICKEN_TARGET_INSTALL_PREFIX}/bin)
set(TARGET_LIBDIR ${CHICKEN_TARGET_INSTALL_PREFIX}/lib)
set(TARGET_DATAROOTDIR ${CHICKEN_TARGET_INSTALL_PREFIX}/share)
set(TARGET_INCLUDEDIR ${CHICKEN_TARGET_INSTALL_PREFIX}/include/${CHICKEN_TARGET_NAME})
set(TARGET_RUN_LIBDIR ${CHICKEN_TARGET_RUN_PREFIX}/lib)

function(_chicken_set_extra_libs)
    # TODO: handle MSVC
    set(libs "")
    foreach(lib ${CHICKEN_EXTRA_LIBRARIES})
        set(libs "${libs} -l${lib}")
    endforeach()
    set(MORE_LIBS ${libs} PARENT_SCOPE)
endfunction()
_chicken_set_extra_libs()

function(_chicken_set_program_names)
    set(names chicken csc csi chicken-profile chicken-install chicken-uninstall
        chicken-status chicken-bug)
    foreach(n ${names})
        string(TOUPPER ${n} upper)
        string(REPLACE "-" "_" var ${upper})
        set(${var}_PROGRAM ${CHICKEN_PREFIX}${n}${CHICKEN_SUFFIX} PARENT_SCOPE)
    endforeach()
endfunction()
_chicken_set_program_names()

function(_chicken_find_toolchain _VAR)
    set(cc C_${_VAR}_CC)
    set(cxx C_${_VAR}_CXX)
    set(rc C_${_VAR}_RC_COMPILER)
    if(ARGV1)
        set(prefix ${ARGV1}-)
    endif()

    find_program(${cc} ${prefix}gcc)
    find_program(${cxx} ${prefix}g++)
    find_program(${rc} ${prefix}windres)

    if(${cc})
        get_filename_component(${cc} ${${cc}} NAME)
    endif()
    if(${cxx})
        get_filename_component(${cxx} ${${cxx}} NAME)
    endif()
    if(${rc})
        get_filename_component(${rc} ${${rc}} NAME)
    endif()

    set(${cc} ${${cc}} PARENT_SCOPE)
    set(${cxx} ${${cxx}} PARENT_SCOPE)
    set(${rc} ${${rc}} PARENT_SCOPE)
endfunction()

# C
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(DEBUGBUILD 1)
endif()

# Scheme
set(CHICKEN_OPTIONS -optimize-level 2 -inline -ignore-repository -feature
    chicken-bootstrap)
set(CHICKEN_LIBRARY_OPTIONS -explicit-use -no-trace)
set(CHICKEN_PROGRAM_OPTIONS -no-lambda-info -local)
set(CHICKEN_COMPILER_OPTIONS ${CHICKEN_PROGRAM_OPTIONS} -extend
    private-namespace.scm)
set(CHICKEN_IMPORT_LIBRARY_OPTIONS -no-trace)

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

include(CheckIncludeFile)
include(CheckSymbolExists)
include(CheckTypeSize)
include(CheckLanguage)

check_language(C)
check_language(CXX)
check_language(RC)

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
    check_symbol_exists("alloca"      "alloca.h" HAVE_ALLOCA)
elseif(HAVE_MALLOC_H)
    check_symbol_exists("alloca"      "malloc.h" HAVE_ALLOCA)
endif()
check_symbol_exists("memmove"     "string.h" HAVE_MEMMOVE)
check_symbol_exists("strerror"    "string.h" HAVE_STRERROR)
check_symbol_exists("strtoll"     "stdlib.h" HAVE_STRTOLL)
check_symbol_exists("strtoq"      "stdlib.h" HAVE_STRTOQ)
check_symbol_exists("sigaction"   "signal.h" HAVE_SIGACTION)
check_symbol_exists("sigprocmask" "signal.h" HAVE_SIGPROCMASK)
check_symbol_exists("sigsetjmp"   "setjmp.h" HAVE_SIGSETJMP)

_chicken_find_toolchain(INSTALL ${CHICKEN_SYSTEM})
_chicken_find_toolchain(TARGET ${CHICKEN_TARGET_SYSTEM})

if(C_INSTALL_CC STREQUAL C_TARGET_CC)
    set(CROSS_CHICKEN 0)
else()
    set(CROSS_CHICKEN 1)
endif()

set(CHICKEN_HOST_C_COMPILER ${CMAKE_C_COMPILER} CACHE STRING
    "C compiler used to generate code for host system")
set(CHICKEN_TARGET_C_COMPILER ${CHICKEN_HOST_C_COMPILER} CACHE STRING
    "C compiler used to generate code for target system")

if(WIN32)
    set(C_WINDOWS_SHELL 1)
endif()

set(CHICKEN_CONFIG_H ${CMAKE_CURRENT_BINARY_DIR}/chicken-config.h)
configure_file("chicken-config.h.in" ${CHICKEN_CONFIG_H})

# set global flags from calculated by macro to let user see them in the gui
set(CMAKE_C_FLAGS_MINSIZEREL "${CHICKEN_C_FLAGS_MINSIZEREL}" CACHE STRING
    "C compiler flags to use during minsize build (forced)" FORCE)
set(CMAKE_C_FLAGS_RELEASE "${CHICKEN_C_FLAGS_RELEASE}" CACHE STRING
    "C compiler flags to use during release build (forced)" FORCE)
set(CMAKE_C_FLAGS_DEBUG "${CHICKEN_C_FLAGS_DEBUG}" CACHE STRING
    "C compiler flags to use during debug build (forced)" FORCE)
set(CMAKE_C_FLAGS "${CHICKEN_C_DEFINITIONS} ${CHICKEN_C_FLAGS_COMMON}" CACHE STRING
    "C compiler flags to use during all build types (forced)" FORCE)
set(CHICKEN_C_FLAGS "")

file(COPY types.db DESTINATION .)
