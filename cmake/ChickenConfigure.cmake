# - Chicken Configure

include(GNUInstallDirs)

function(write_chicken_build_tag)
    set(src_buildversion ${CMAKE_CURRENT_SOURCE_DIR}/buildversion)
    set(buildversion ${CMAKE_CURRENT_BINARY_DIR}/buildversion)
    set(buildid ${CMAKE_CURRENT_BINARY_DIR}/buildid)
    set(buildbranch ${CMAKE_CURRENT_BINARY_DIR}/buildbranch)
    set(buildtag ${CMAKE_CURRENT_BINARY_DIR}/buildtag.h)

    file(STRINGS ${src_buildversion} version LIMIT_COUNT 1)

    set(CHICKEN_VERSION "${version}" CACHE INTERNAL "")

    if(${src_buildversion} IS_NEWER_THAN ${buildversion})
        file(WRITE ${buildversion} ${version})
    endif()

    find_package(Git)
    if(GIT_FOUND AND EXISTS ${CMAKE_HOME_DIRECTORY}/.git)
        execute_process(
            COMMAND ${GIT_EXECUTABLE} rev-parse --short HEAD
            OUTPUT_VARIABLE git_rev
            ERROR_QUIET OUTPUT_STRIP_TRAILING_WHITESPACE)
        if(git_rev AND (${buildversion} IS_NEWER_THAN ${buildid}))
            file(WRITE ${buildid} ${git_rev})
        endif()

        # TODO: handle detached head, other cases
        execute_process(
            COMMAND ${GIT_EXECUTABLE} rev-parse --abbrev-ref HEAD
            OUTPUT_VARIABLE git_branch
            ERROR_QUIET OUTPUT_STRIP_TRAILING_WHITESPACE)
        if(git_branch AND (${buildversion} IS_NEWER_THAN ${buildbranch}))
            file(WRITE ${buildbranch} ${git_branch})
        endif()
    endif()

    # TODO: handle time, is hostname really needed?
    if(${buildversion} IS_NEWER_THAN ${buildtag})
        file(WRITE ${buildtag} "#define C_BUILD_TAG \"compiled on ${CMAKE_SYSTEM}\"\n")
    endif()
endfunction()

write_chicken_build_tag()

function(find_chicken_apply_hack)
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

find_chicken_apply_hack()

find_program(CHICKEN_INSTALL_CC  gcc)
find_program(CHICKEN_INSTALL_CXX g++)
mark_as_advanced(CHICKEN_INSTALL_CC CHICKEN_INSTALL_CXX)

if(APPLE)
    find_program(CHICKEN_POSTINSTALL_PROGRAM install_name_tool)
    mark_as_advanced(CHICKEN_POSTINSTALL_PROGRAM)
endif()
if(NOT CHICKEN_POSTINSTALL_PROGRAM)
    set(CHICKEN_POSTINSTALL_PROGRAM "true")
endif()

if(WIN32)
    find_program(CHICKEN_INSTALL_WINDRES windres)
    mark_as_advanced(CHICKEN_INSTALL_WINDRES)
endif()
if(NOT CHICKEN_INSTALL_WINDRES)
    set(CHICKEN_INSTALL_WINDRES "")
endif()

set(CHICKEN_TARGET_CC      gcc     CACHE STRING "")
set(CHICKEN_TARGET_CXX     g++     CACHE STRING "")
set(CHICKEN_TARGET_WINDRES windres CACHE STRING "")
mark_as_advanced(CHICKEN_TARGET_CC CHICKEN_TARGET_CXX CHICKEN_TARGET_WINDRES)

set(CHICKEN_TARGET_ROOT_DIR "" CACHE PATH "")
set(CHICKEN_TARGET_RUN_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE PATH "")
mark_as_advanced(CHICKEN_TARGET_ROOT_DIR CHICKEN_TARGET_RUN_PREFIX)

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
    set(INSTALL_EGGDIR     lib/${CHICKEN_INSTALL_NAME}/${CHICKEN_API_VERSION})
    set(INSTALL_DATADIR    share/${CHICKEN_INSTALL_NAME})
    set(INSTALL_DOCDIR     ${INSTALL_DATADIR}/doc)
    set(INSTALL_INCLUDEDIR ${CMAKE_INSTALL_INCLUDEDIR}/${CHICKEN_INSTALL_NAME})
    set(INSTALL_MANDIR     ${CMAKE_INSTALL_MANDIR}/man1)
endif()

set(TARGET_BINDIR      ${INSTALL_BINDIR})
set(TARGET_LIBDIR      ${INSTALL_LIBDIR})
set(TARGET_EGGDIR      ${TARGET_LIBDIR}/${CHICKEN_TARGET_NAME}/${CHICKEN_API_VERSION})
set(TARGET_DATADIR     share/${CHICKEN_TARGET_NAME})
set(TARGET_INCLUDEDIR  ${CMAKE_INSTALL_INCLUDEDIR}/${CHICKEN_TARGET_NAME})

foreach(D BINDIR LIBDIR EGGDIR DATADIR INCLUDEDIR)
    get_filename_component(INSTALL_FULL_${D} "${CMAKE_INSTALL_PREFIX}/${INSTALL_${D}}" ABSOLUTE)
    string(REPLACE "//" "/" INSTALL_FULL_${D} "${INSTALL_FULL_${D}}")
    get_filename_component(TARGET_FULL_${D} "${TARGET_PREFIX}/${TARGET_${D}}" ABSOLUTE)
    string(REPLACE "//" "/" TARGET_FULL_${D} "${TARGET_FULL_${D}}")
endforeach()
get_filename_component(TARGET_FULL_RUN_LIBDIR "${CHICKEN_TARGET_RUN_PREFIX}/${TARGET_LIBDIR}" ABSOLUTE)

include(CheckIncludeFile)
include(CheckSymbolExists)
include(CheckTypeSize)
include(CheckLanguage)

# also checks HAVE_SYS_TYPES_H, HAVE_STDINT_H, and HAVE_STDDEF_H
check_type_size("long long"          LONG_LONG)
check_type_size("unsigned long long" UNSIGNED_LONG_LONG)

check_include_file("alloca.h"      HAVE_ALLOCA_H)
check_include_file("crt_externs.h" HAVE_CRT_EXTERNS_H)
check_include_file("direct.h"      HAVE_DIRECT_H)
check_include_file("dirent.h"      HAVE_DIRENT_H)
check_include_file("dl.h"          HAVE_DL_H)
check_include_file("dlfcn.h"       HAVE_DLFCN_H)
check_include_file("errno.h"       HAVE_ERRNO_H)
check_include_file("grp.h"         HAVE_GRP_H)
check_include_file("inttypes.h"    HAVE_INTTYPES_H)
check_include_file("limits.h"      HAVE_LIMITS_H)
check_include_file("malloc.h"      HAVE_MALLOC_H)
check_include_file("memory.h"      HAVE_MEMORY_H)
check_include_file("poll.h"        HAVE_POSIX_POLL)
check_include_file("stdlib.h"      HAVE_STDLIB_H)
check_include_file("string.h"      HAVE_STRING_H)
check_include_file("strings.h"     HAVE_STRINGS_H)
check_include_file("sys/stat.h"    HAVE_SYS_STAT_H)
check_include_file("sysexits.h"    HAVE_SYSEXITS_H)
check_include_file("unistd.h"      HAVE_UNISTD_H)

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

set(C_GC_HOOKS 0)
set(C_COLLECT_ALL_SYMBOLS 0)
set(C_CROSS_CHICKEN 0)
set(C_STACK_GROWS_DOWNWARD 1)

if(APPLE)
    set(C_USES_SONAME 0)
    set(C_WINDOWS_SHELL 0)
elseif(WIN32)
    set(C_USES_SONAME 0)
    set(C_WINDOWS_SHELL 1)
else()
    set(C_USES_SONAME 1)
    set(C_WINDOWS_SHELL 0)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(DEBUGBUILD 1)
endif()

set(_chicken_c_flags "")

if(APPLE AND CMAKE_SIZEOF_VOID_P EQUAL 8)
    list(APPEND _chicken_c_flags -m64)
    list(APPEND CMAKE_EXE_LINKER_FLAGS -m64)
endif()

# Allow to override compiler flags completely. Default CMake behaviour which
# appends config specific flags after generic can be confusing for new users.
if(CMAKE_C_FLAGS)
    list(APPEND _chicken_c_flags ${CMAKE_C_FLAGS})
else()
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        list(APPEND _chicken_c_flags ${CMAKE_C_FLAGS_DEBUG})
    elseif(CMAKE_BUILD_TYPE STREQUAL "MinSizeRel")
        list(APPEND _chicken_c_flags ${CMAKE_C_FLAGS_MINSIZEREL})
    elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
        list(APPEND _chicken_c_flags ${CMAKE_C_FLAGS_RELEASE})
    elseif(CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
        list(APPEND _chicken_c_flags ${CMAKE_C_FLAGS_RELWITHDEBINFO})
    endif()
endif()

list(REMOVE_DUPLICATES _chicken_c_flags)

_chicken_join(CMAKE_C_FLAGS ${_chicken_c_flags})

set(CMAKE_C_FLAGS_DEBUG "")
set(CMAKE_C_FLAGS_MINSIZEREL "")
set(CMAKE_C_FLAGS_RELEASE "")
set(CMAKE_C_FLAGS_RELWITHDEBINFO "")

set(CMAKE_ASM_FLAGS ${CMAKE_C_FLAGS})
set(CMAKE_ASM_FLAGS_DEBUG "")
set(CMAKE_ASM_FLAGS_MINSIZEREL "")
set(CMAKE_ASM_FLAGS_RELEASE "")
set(CMAKE_ASM_FLAGS_RELWITHDEBINFO "")

set(_chicken_install_c_flags "")

foreach(D ${CHICKEN_DEFINITIONS})
    list(APPEND _chicken_install_c_flags -D${D})
endforeach()
list(APPEND _chicken_install_c_flags ${_chicken_c_flags} ${CHICKEN_C_FLAGS})
list(REMOVE_DUPLICATES _chicken_install_c_flags)

_chicken_join(C_INSTALL_CFLAGS ${_chicken_install_c_flags})
_chicken_join(C_INSTALL_LDFLAGS ${CMAKE_EXE_LINKER_FLAGS})

set(CHICKEN_TARGET_C_FLAGS "${C_INSTALL_CFLAGS}")
set(CHICKEN_TARGET_EXE_LINKER_FLAGS "${C_INSTALL_LDFLAGS}")

foreach(lib ${CHICKEN_EXTRA_LIBRARIES})
    set(CHICKEN_CONFIG_MORE_LIBS "${CHICKEN_CONFIG_MORE_LIBS} -l${lib}")
endforeach()
string(STRIP "${CHICKEN_CONFIG_MORE_LIBS}" CHICKEN_CONFIG_MORE_LIBS)

set(CHICKEN_CONFIG_H ${CMAKE_CURRENT_BINARY_DIR}/chicken-config.h)

configure_file("chicken-config.h.in" ${CHICKEN_CONFIG_H})
