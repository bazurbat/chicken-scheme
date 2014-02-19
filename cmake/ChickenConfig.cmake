# - Chicken Parameters

set(BINARYVERSION 7)
set(STACKDIRECTION 1)
set(CROSS_CHICKEN 0)

# directories
set(CHICKEN_NAME ${PROGRAM_PREFIX}chicken${PROGRAM_SUFFIX})

set(BIN_INSTALL_DIR bin)
set(LIB_INSTALL_DIR lib)
set(SHARE_INSTALL_DIR share)
set(DATA_INSTALL_DIR ${SHARE_INSTALL_DIR}/${CHICKEN_NAME})
set(MAN_INSTALL_DIR ${SHARE_INSTALL_DIR}/man/man1)
set(INCLUDE_INSTALL_DIR include/${CHICKEN_NAME})
set(DOC_INSTALL_DIR ${DATA_INSTALL_DIR}/doc)
set(CHICKEN_LIB_INSTALL_DIR ${LIB_INSTALL_DIR}/${CHICKEN_NAME})
set(EGG_INSTALL_DIR ${CHICKEN_LIB_INSTALL_DIR}/${BINARYVERSION})

function(_chicken_set_extra_libs)
    set(libs "-lm")
    if(CMAKE_DL_LIBS)
        set(libs "${libs} -l${CMAKE_DL_LIBS}")
    endif()
    set(CHICKEN_EXTRA_LIBS ${libs} PARENT_SCOPE)
endfunction()
_chicken_set_extra_libs()

function(_chicken_set_program_names)
    set(names chicken csc csi chicken-profile chicken-install chicken-uninstall
        chicken-status chicken-bug)
    foreach(n ${names})
        string(TOUPPER ${n} upper)
        string(REPLACE "-" "_" var ${upper})
        set(${var}_PROGRAM ${PROGRAM_PREFIX}${n}${PROGRAM_SUFFIX} PARENT_SCOPE)
    endforeach()
endfunction()
_chicken_set_program_names()

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

check_symbol_exists("alloca"      "alloca.h" HAVE_ALLOCA)
check_symbol_exists("memmove"     "string.h" HAVE_MEMMOVE)
check_symbol_exists("strerror"    "string.h" HAVE_STRERROR)
check_symbol_exists("strtoll"     "stdlib.h" HAVE_STRTOLL)
check_symbol_exists("strtoq"      "stdlib.h" HAVE_STRTOQ)
check_symbol_exists("sigaction"   "signal.h" HAVE_SIGACTION)
check_symbol_exists("sigprocmask" "signal.h" HAVE_SIGPROCMASK)
check_symbol_exists("sigsetjmp"   "setjmp.h" HAVE_SIGSETJMP)

check_include_file("alloca.h"   HAVE_ALLOCA_H)
check_include_file("dirent.h"   HAVE_DIRENT_H)
check_include_file("dlfcn.h"    HAVE_DLFCN_H)
check_include_file("errno.h"    HAVE_ERRNO_H)
check_include_file("grp.h"      HAVE_GRP_H)
check_include_file("inttypes.h" HAVE_INTTYPES_H)
check_include_file("limits.h"   HAVE_LIMITS_H)
check_include_file("memory.h"   HAVE_MEMORY_H)
check_include_file("poll.h"     HAVE_POSIX_POLL)
check_include_file("stdlib.h"   HAVE_STDLIB_H)
check_include_file("string.h"   HAVE_STRING_H)
check_include_file("strings.h"  HAVE_STRINGS_H)
check_include_file("sys/stat.h" HAVE_SYS_STAT_H)
check_include_file("sysexits.h" HAVE_SYSEXITS_H)
check_include_file("unistd.h"   HAVE_UNISTD_H)

if(CMAKE_C_COMPILER)
    set(C_INSTALL_CC ${CMAKE_C_COMPILER})
else()
    set(C_INSTALL_CC)
endif()
if(CMAKE_CXX_COMPILER)
    set(C_INSTALL_CXX ${CMAKE_CXX_COMPILER})
else()
    set(C_INSTALL_CXX)
endif()
if(CMAKE_RC_COMPILER)
    set(C_INSTALL_RC_COMPILER ${CMAKE_RC_COMPILER})
else()
    set(C_INSTALL_RC_COMPILER)
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
