set(libcompiler_OPTIONS ${PROGRAM_OPTIONS}
    -include-path ${chicken_SOURCE_DIR}/src)

set(libcompiler_MODULES
    srfi-14
    srfi-18
    srfi-69)

foreach(m ${libcompiler_MODULES})
    add_chicken_sources(libcompiler_SOURCES ${m}.scm
        EMIT_IMPORTS ${m}
        OPTIONS ${libcompiler_OPTIONS})
    add_chicken_library(${m}.import MODULE
        SOURCES ${CMAKE_CURRENT_BINARY_DIR}/${m}.import.scm)
    install(TARGETS ${m}.import
        DESTINATION ${INSTALL_EGGDIR})
endforeach()

add_chicken_sources(libcompiler_SOURCES srfi-13.scm
    DEPENDS ${CHICKEN_IMPORT_LIBRARY_DIR}/srfi-14.import.scm
    EMIT_IMPORTS srfi-13
    OPTIONS ${libcompiler_OPTIONS})
add_chicken_library(srfi-13.import MODULE
    SOURCES ${CMAKE_CURRENT_BINARY_DIR}/srfi-13.import.scm)
install(TARGETS srfi-13.import
    DESTINATION ${INSTALL_EGGDIR})

add_chicken_sources(libcompiler_SOURCES fmt.scm
    DEPENDS ${CHICKEN_IMPORT_LIBRARY_DIR}/srfi-13.import.scm
    EMIT_IMPORTS fmt
    OPTIONS ${libcompiler_OPTIONS})
add_chicken_library(fmt.import MODULE
    SOURCES ${CMAKE_CURRENT_BINARY_DIR}/fmt.import.scm)
install(TARGETS fmt.import
    DESTINATION ${INSTALL_EGGDIR})

add_chicken_sources(libcompiler_SOURCES fmt-c.scm
    DEPENDS ${CHICKEN_IMPORT_LIBRARY_DIR}/fmt.import.scm
    EMIT_IMPORTS fmt-c
    OPTIONS ${libcompiler_OPTIONS})
add_chicken_library(fmt-c.import MODULE
    SOURCES ${CMAKE_CURRENT_BINARY_DIR}/fmt-c.import.scm)
install(TARGETS fmt-c.import
    DESTINATION ${INSTALL_EGGDIR})

add_library(libchicken-compiler SHARED ${libcompiler_SOURCES})

target_link_libraries(libchicken-compiler libchicken)

set_target_properties(libchicken-compiler PROPERTIES
    COMPILE_DEFINITIONS PIC
    PREFIX ""
    OUTPUT_NAME chicken-compiler)

install(TARGETS libchicken-compiler
    EXPORT chicken-targets
    ARCHIVE DESTINATION ${INSTALL_LIBDIR}
    LIBRARY DESTINATION ${INSTALL_LIBDIR}
    RUNTIME DESTINATION ${INSTALL_BINDIR})
