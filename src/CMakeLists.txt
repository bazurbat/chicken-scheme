include(ChickenBuildTag)
include(ChickenConfigure)

if(LIBUV_FOUND)
    include_directories(BEFORE ${LIBUV_INCLUDE_DIRS})
    set(HAVE_LIBUV YES)
endif()

include_directories(BEFORE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR})

set(CHICKEN_BOOTSTRAP YES)

# runtime

macro(_add_libchicken_sources dir)
    foreach(s ${ARGN})
        list(APPEND libchicken_C_SOURCES ${dir}/${s}.h)
        if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${s}.c)
            list(APPEND libchicken_C_SOURCES ${dir}/${s}.c)
        endif()
        install(FILES ${s}.h DESTINATION ${INSTALL_INCLUDEDIR}/${dir})
    endforeach()

    set(libchicken_C_SOURCES ${libchicken_C_SOURCES} PARENT_SCOPE)
endmacro()

set(chicken_HEADERS
    ../include/chicken.h
    ../include/definitions.h
    ../include/macros.h
    ../include/types.h
)

set(libchicken_C_SOURCES
    ${CHICKEN_APPLY_HACK}
    ${chicken_HEADERS}
)

add_subdirectory(foreign)
add_subdirectory(math)
add_subdirectory(memory)
add_subdirectory(runtime)
add_subdirectory(scheduler)
add_subdirectory(scheme)
add_subdirectory(system)

if(LIBUV_FOUND)
    list(APPEND libchicken_C_SOURCES uv/uv-ffi.c scheduler/scheduler-uv.c)
    add_chicken_sources(libchicken_SOURCES uv/uv.scm
        OPTIONS ${LIBRARY_OPTIONS} -include-path ${chicken_SOURCE_DIR}/src
        EMIT_IMPORTS uv)
    add_chicken_sources(libchicken_SOURCES scheduler/scheduler-uv.scm
        OPTIONS ${LIBRARY_OPTIONS} -include-path ${chicken_SOURCE_DIR}/src
        EMIT_IMPORTS scheduler)
else()
    add_chicken_sources(libchicken_SOURCES scheduler/scheduler.scm
        OPTIONS ${LIBRARY_OPTIONS} -include-path ${chicken_SOURCE_DIR}/src)
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

set_property(TARGET libchicken PROPERTY COMPILE_DEFINITIONS
    PIC C_BUILDING_LIBCHICKEN)

set_target_properties(libchicken PROPERTIES
    PREFIX ""
    OUTPUT_NAME libchicken
    VERSION ${API_VERSION})

install(TARGETS libchicken
    EXPORT chicken-targets
    ARCHIVE DESTINATION ${INSTALL_LIBDIR}
    LIBRARY DESTINATION ${INSTALL_LIBDIR}
    RUNTIME DESTINATION ${INSTALL_LIBDIR})

set(CHICKEN_LIBRARIES libchicken ${CHICKEN_EXTRA_LIBRARIES})

if(LIBUV_FOUND)
    add_chicken_library(uv.import MODULE
        SOURCES ${CHICKEN_IMPORT_LIBRARY_DIR}/uv.import.scm)
    add_chicken_library(scheduler.import MODULE
        SOURCES ${CHICKEN_IMPORT_LIBRARY_DIR}/scheduler.import.scm)
    install(TARGETS uv.import scheduler.import
        DESTINATION ${INSTALL_EGGDIR})
endif()

if(BUILD_STATIC_LIBS)

    add_chicken_sources(libchicken_STATIC_SOURCES STATIC
        SOURCES ${libchicken_SCM_SOURCES}
        C_SOURCES ${libchicken_C_SOURCES}
        OPTIONS ${LIBRARY_OPTIONS})

    add_library(libchicken-static STATIC ${libchicken_STATIC_SOURCES})

    set_target_properties(libchicken-static PROPERTIES
        PREFIX ""
        OUTPUT_NAME libchicken)

    set_property(TARGET libchicken-static PROPERTY COMPILE_DEFINITIONS
        PIC C_BUILDING_LIBCHICKEN)

    install(TARGETS libchicken-static
        EXPORT chicken-targets
        ARCHIVE DESTINATION ${INSTALL_LIBDIR})

    set(CHICKEN_STATIC_LIBRARIES libchicken-static ${CHICKEN_EXTRA_LIBRARIES})

endif(BUILD_STATIC_LIBS)

add_chicken_executable(chicken-depends
    SOURCES chicken-depends.scm)

install(TARGETS chicken-depends
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

if(CMAKE_CROSSCOMPILING OR CHICKEN_BOOTSTRAP)
    set(CHICKEN_DEPENDS ${CHICKEN_INTERPRETER} -ss
        ${chicken_SOURCE_DIR}/src/chicken-depends.scm)
else()
    set(CHICKEN_DEPENDS $<TARGET_FILE:chicken-depends>)
endif()

add_subdirectory(compiler)

if(NOT CMAKE_CROSSCOMPILING)
    set(CHICKEN_COMPILER $<TARGET_FILE:chicken-compiler>)
endif()

set(CHICKEN_BOOTSTRAP NO)

add_subdirectory(library)

add_chicken_executable(csi
    SOURCES csi.scm
    OPTIONS ${PROGRAM_OPTIONS})

set_target_properties(csi PROPERTIES
    COMPILE_DEFINITIONS PIC
    OUTPUT_NAME csi)

set(utility_PROGRAMS
    chicken-profile
    )

foreach(program ${utility_PROGRAMS})
    add_chicken_executable(${program} ${program}.scm
        OPTIONS ${PROGRAM_OPTIONS})

    set_target_properties(${program} PROPERTIES
        COMPILE_DEFINITIONS PIC
        OUTPUT_NAME ${program})
endforeach()

install(TARGETS csi ${utility_PROGRAMS}
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

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

# misc files

install(FILES ${CHICKEN_TYPES_DB}
    DESTINATION ${INSTALL_EGGDIR})

install(FILES ${chicken_HEADERS} common.h ${CHICKEN_CONFIG_H}
    DESTINATION ${INSTALL_INCLUDEDIR})

install(FILES
    ${CMAKE_SOURCE_DIR}/cmake/ChickenExtensionConfig.cmake.in
    ${CMAKE_SOURCE_DIR}/cmake/ChickenExtensionVersion.cmake.in
    ${CMAKE_SOURCE_DIR}/cmake/FindChicken.cmake
    ${CMAKE_SOURCE_DIR}/cmake/ChickenUse.cmake
    ${CMAKE_SOURCE_DIR}/cmake/ChickenRun.cmake
    ${chicken_SOURCE_DIR}/src/chicken-depends.scm
    DESTINATION ${INSTALL_DATADIR})

set(MAN_PAGES chicken csi chicken-profile)
foreach(man ${MAN_PAGES})
    install(FILES ${CMAKE_SOURCE_DIR}/doc/${man}.1
        DESTINATION ${INSTALL_MANDIR}
        RENAME ${man}.1)
endforeach()

foreach(doc README.md LICENSE)
    install(FILES ${CMAKE_SOURCE_DIR}/${doc}
        DESTINATION ${INSTALL_DOCDIR})
endforeach()

install(EXPORT chicken-targets
    DESTINATION ${INSTALL_DATADIR}
    NAMESPACE chicken_)

# config
# rename generated configs on installation because find_package will find
# them in adjacent build directories with names starting with "chicken" prefix

include(CMakePackageConfigHelpers)

configure_package_config_file(
    ${CMAKE_SOURCE_DIR}/cmake/chicken-config.cmake.in
    ${PROJECT_BINARY_DIR}/config.cmake
    INSTALL_DESTINATION ${INSTALL_DATADIR}
    PATH_VARS INSTALL_BINDIR
              INSTALL_LIBDIR
              INSTALL_EGGDIR
              INSTALL_DATADIR
              INSTALL_INCLUDEDIR)

install(FILES ${PROJECT_BINARY_DIR}/config.cmake
    DESTINATION ${INSTALL_DATADIR}
    RENAME chicken-config.cmake)

write_basic_package_version_file(
    ${PROJECT_BINARY_DIR}/version.cmake
    VERSION ${CHICKEN_VERSION}
    COMPATIBILITY SameMajorVersion)

install(FILES ${PROJECT_BINARY_DIR}/version.cmake
    DESTINATION ${INSTALL_DATADIR}
    RENAME chicken-config-version.cmake)
