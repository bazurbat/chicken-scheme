#

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
