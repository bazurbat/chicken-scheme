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
set(CMAKE_C_FLAGS "-fno-strict-aliasing -fwrapv -DHAVE_CHICKEN_CONFIG_H")

if(ENABLE_PTABLES)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DC_ENABLE_PTABLES")
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(DEBUGBUILD 1)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall -Wno-unused")
endif()

if(OPTIMIZE_FOR_SPEED)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3 -fomit-frame-pointer")
else()
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Os -fomit-frame-pointer")
endif()

# Scheme
set(CHICKEN_OPTIONS -optimize-level 2 -inline -ignore-repository -feature
    chicken-bootstrap)

set(CHICKEN_LIBRARY_OPTIONS -explicit-use -no-trace)

set(CHICKEN_PROGRAM_OPTIONS -no-lambda-info -local)

set(CHICKEN_COMPILER_OPTIONS ${CHICKEN_PROGRAM_OPTIONS} -extend
    private-namespace.scm)

set(CHICKEN_DYNAMIC_OPTIONS -feature chicken-compile-shared -dynamic)

# set(CHICKEN_IMPORT_LIBRARY_OPTIONS ${CHICKEN_DYNAMIC_OPTIONS} -no-trace)
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

set(CHICKEN_CONFIG_H ${CMAKE_CURRENT_BINARY_DIR}/chicken-config.h)
configure_file("chicken-config.h.in" ${CHICKEN_CONFIG_H})
