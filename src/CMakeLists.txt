project(chicken C ASM)

include(ChickenBuildTag)
include(ChickenConfigure)

if(LIBUV_FOUND)
    include_directories(BEFORE ${LIBUV_INCLUDE_DIRS})
endif()

include_directories(BEFORE
    ${chicken_SOURCE_DIR}
    ${chicken_BINARY_DIR})

# set(CHICKEN_LIBRARY_PATH ${chicken_BINARY_DIR})

# runtime

set(libchicken_C_SOURCES
    ${CHICKEN_APPLY_HACK}
    chicken.h
    foreign/constructors.c
    foreign/constructors.h
    foreign/data.c
    foreign/data.h
    foreign/locatives.c
    foreign/locatives.h
    foreign/predicates.c
    foreign/predicates.h
    foreign/records.c
    foreign/records.h
    math/arithmetic.c
    math/arithmetic.h
    math/constructors.c
    math/constructors.h
    math/fixnum.c
    math/fixnum.h
    math/flonum.c
    math/flonum.h
    math/predicates.c
    math/predicates.h
    memory/finalizers.c
    memory/finalizers.h
    memory/gc.c
    memory/gc.h
    memory/heap.c
    memory/heap.h
    runtime/api.c
    runtime/api.h
    runtime/apply.c
    runtime/apply.h
    runtime/callbacks.c
    runtime/callbacks.h
    runtime/check.c
    runtime/check.h
    runtime/compiler.c
    runtime/compiler.h
    runtime/continuations.c
    runtime/continuations.h
    runtime/debug.c
    runtime/debug.h
    runtime/errors.c
    runtime/errors.h
    runtime/macros.h
    runtime/reader.c
    runtime/reader.h
    runtime/symbol_table.c
    runtime/symbol_table.h
    runtime/trace.c
    runtime/trace.h
    scheduler/interrupts.c
    scheduler/interrupts.h
    scheme/cxr.c
    scheme/cxr.h
    scheme/lists.c
    scheme/lists.h
    scheme/pairs.c
    scheme/pairs.h
    scheme/strings.c
    scheme/strings.h
    scheme/vectors.c
    scheme/vectors.h
    system/dload.c
    system/dload.h
    system/files.c
    system/files.h
    system/platform.c
    system/platform.h
    system/signals.c
    system/signals.h
    system/timing.c
    system/timing.h
)

if(LIBUV_FOUND)
    list(APPEND libchicken_C_SOURCES uvffi.c uvffi.h)
endif()

if(WIN32)
    set(posix_scm posixwin.scm)
else()
    set(posix_scm posixunix.scm)
endif()

set(libchicken_SCM_SOURCES
    ${posix_scm}
    build-version.scm
    chicken-ffi-syntax.scm
    chicken-syntax.scm
    data-structures.scm
    eval.scm
    expand.scm
    extras.scm
    files.scm
    irregex.scm
    library.scm
    lolevel.scm
    modules.scm
    ports.scm
    profiler.scm
    scheduler.scm
    srfi-1.scm
    srfi-4.scm
    stub.scm
    utils.scm
)

add_chicken_sources(libchicken_SOURCES
    SOURCES ${libchicken_SCM_SOURCES}
    C_SOURCES ${libchicken_C_SOURCES}
    OPTIONS ${LIBRARY_OPTIONS})

add_library(libchicken SHARED ${libchicken_SOURCES})
target_link_libraries(libchicken
    ${CHICKEN_EXTRA_LIBRARIES})
if(LIBUV_FOUND)
    target_link_libraries(libchicken ${LIBUV_LIBRARIES})
endif()

set(CHICKEN_LIBRARIES libchicken ${CHICKEN_EXTRA_LIBRARIES})

set_property(TARGET libchicken PROPERTY COMPILE_DEFINITIONS
    PIC C_BUILDING_LIBCHICKEN)

set_target_properties(libchicken PROPERTIES
    PREFIX ""
    OUTPUT_NAME lib${CHICKEN_PROGRAM_PREFIX}chicken
    VERSION ${API_VERSION})

add_subdirectory(runtime)
add_subdirectory(library)

# compiler

set(compiler_MODULES
    batch-driver
    c-backend
    c-platform
    compiler-syntax
    core
    lfa2
    optimizer
    scrutinizer
    support
)

set(compiler_SOURCES)

foreach(m ${compiler_MODULES})
    add_chicken_sources(compiler_SOURCES ${m}.scm
        EMIT_IMPORTS chicken.compiler.${m}
        OPTIONS ${PROGRAM_OPTIONS})

    add_chicken_library(chicken.compiler.${m}.import MODULE
        SOURCES ${CMAKE_CURRENT_BINARY_DIR}/chicken.compiler.${m}.import.scm)
    install(TARGETS chicken.compiler.${m}.import
        DESTINATION ${INSTALL_EGGDIR})
endforeach()

add_chicken_executable(chicken-compiler
    SOURCES chicken.scm
    C_SOURCES ${compiler_SOURCES}
    OPTIONS ${PROGRAM_OPTIONS})

set_target_properties(chicken-compiler PROPERTIES
    COMPILE_DEFINITIONS PIC
    OUTPUT_NAME ${CHICKEN_PROGRAM_PREFIX}chicken)

add_chicken_executable(csi
    SOURCES csi.scm
    OPTIONS ${PROGRAM_OPTIONS})

set_target_properties(csi PROPERTIES
    COMPILE_DEFINITIONS PIC
    OUTPUT_NAME ${CHICKEN_PROGRAM_PREFIX}csi)

set(utility_PROGRAMS
    chicken-profile
)

foreach(program ${utility_PROGRAMS})
    add_chicken_executable(${program} ${program}.scm
        OPTIONS ${PROGRAM_OPTIONS})

    set_target_properties(${program} PROPERTIES
        COMPILE_DEFINITIONS PIC
        OUTPUT_NAME ${CHICKEN_PROGRAM_PREFIX}${program})
endforeach()

install(TARGETS libchicken chicken-compiler csi ${utility_PROGRAMS}
    EXPORT chicken-targets
    ARCHIVE DESTINATION ${INSTALL_LIBDIR}
    LIBRARY DESTINATION ${INSTALL_LIBDIR}
    RUNTIME DESTINATION ${INSTALL_BINDIR})

if(BUILD_STATIC_LIBS)

    add_chicken_sources(libchicken_STATIC_SOURCES
        C_SOURCES ${libchicken_C_SOURCES})
    add_chicken_sources(libchicken_STATIC_SOURCES STATIC
        SOURCES ${libchicken_SCM_SOURCES}
        OPTIONS ${LIBRARY_OPTIONS})

    add_library(libchicken-static STATIC ${libchicken_STATIC_SOURCES})

    set_property(TARGET libchicken-static PROPERTY COMPILE_DEFINITIONS
        PIC C_BUILDING_LIBCHICKEN)

    set_target_properties(libchicken-static PROPERTIES
        PREFIX ""
        OUTPUT_NAME lib${CHICKEN_PROGRAM_PREFIX}chicken)

    install(TARGETS libchicken-static
        EXPORT chicken-targets
        ARCHIVE DESTINATION ${INSTALL_LIBDIR})

    set(CHICKEN_STATIC_LIBRARIES libchicken-static ${CHICKEN_EXTRA_LIBRARIES})

endif(BUILD_STATIC_LIBS)

# import libraries

set(import_LIBRARIES
    chicken.import
    csi.import
    data-structures.import
    extras.import
    files.import
    foreign.import
    irregex.import
    lolevel.import
    ports.import
    posix.import
    srfi-1.import
    srfi-4.import
    utils.import
)

foreach(lib ${import_LIBRARIES})
    set_property(SOURCE ${lib}.scm PROPERTY chicken_import_library TRUE)
    add_chicken_library(${lib} ${lib}.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
endforeach()

install(TARGETS ${import_LIBRARIES}
    DESTINATION ${INSTALL_EGGDIR})

# chicken-extract

install(FILES ${CMAKE_HOME_DIRECTORY}/cmake/extract-depends.scm
    DESTINATION ${INSTALL_DATADIR})

# misc files

install(FILES ${CHICKEN_TYPES_DB}
    DESTINATION ${INSTALL_EGGDIR})

install(FILES chicken.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INSTALL_INCLUDEDIR})

install(FILES
    ${CMAKE_SOURCE_DIR}/cmake/ChickenExtensionConfig.cmake.in
    ${CMAKE_SOURCE_DIR}/cmake/ChickenExtensionVersion.cmake.in
    ${CMAKE_SOURCE_DIR}/cmake/FindChicken.cmake
    ${CMAKE_SOURCE_DIR}/cmake/ChickenUse.cmake
    ${CMAKE_SOURCE_DIR}/cmake/ChickenRun.cmake
    DESTINATION ${INSTALL_DATADIR})

set(MAN_PAGES chicken csi chicken-profile)
foreach(man ${MAN_PAGES})
    install(FILES ${CMAKE_SOURCE_DIR}/doc/${man}.1
        DESTINATION ${INSTALL_MANDIR}
        RENAME ${CHICKEN_PROGRAM_PREFIX}${man}.1)
endforeach()

foreach(doc README.md LICENSE)
    install(FILES ${CMAKE_SOURCE_DIR}/${doc}
        DESTINATION ${INSTALL_DOCDIR})
endforeach()

install(EXPORT chicken-targets
    DESTINATION ${INSTALL_DATADIR}
    NAMESPACE chicken_)

# config

include(CMakePackageConfigHelpers)

configure_package_config_file(
    ${CMAKE_SOURCE_DIR}/cmake/chicken-config.cmake.in
    ${PROJECT_BINARY_DIR}/chicken-config.cmake
    INSTALL_DESTINATION ${INSTALL_DATADIR}
    PATH_VARS
    INSTALL_BINDIR
    INSTALL_LIBDIR
    INSTALL_EGGDIR
    INSTALL_DATADIR
    INSTALL_INCLUDEDIR
    )

write_basic_package_version_file(
    ${PROJECT_BINARY_DIR}/chicken-config-version.cmake
    VERSION ${CHICKEN_VERSION}
    COMPATIBILITY SameMajorVersion)

install(FILES ${PROJECT_BINARY_DIR}/chicken-config.cmake
    DESTINATION ${INSTALL_DATADIR})
install(FILES ${PROJECT_BINARY_DIR}/chicken-config-version.cmake
    DESTINATION ${INSTALL_DATADIR})
