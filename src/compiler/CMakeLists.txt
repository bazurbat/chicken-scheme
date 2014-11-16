
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
        OPTIONS ${PROGRAM_OPTIONS} -include-path ${chicken_SOURCE_DIR})

    add_chicken_library(chicken.compiler.${m}.import MODULE
        SOURCES ${CMAKE_CURRENT_BINARY_DIR}/chicken.compiler.${m}.import.scm)
    install(TARGETS chicken.compiler.${m}.import
        DESTINATION ${INSTALL_EGGDIR})
endforeach()

add_chicken_executable(chicken-compiler
    SOURCES chicken.scm
    C_SOURCES ${compiler_SOURCES}
    OPTIONS ${PROGRAM_OPTIONS} -include-path ${chicken_SOURCE_DIR})

set_target_properties(chicken-compiler PROPERTIES
    COMPILE_DEFINITIONS PIC
    OUTPUT_NAME ${CHICKEN_PROGRAM_PREFIX}chicken)

# set(CHICKEN_EXECUTABLE $<TARGET_FILE:chicken-compiler>)

install(TARGETS chicken-compiler
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})

set(import_LIBRARIES chicken.import)

foreach(lib ${import_LIBRARIES})
    set_property(SOURCE ${lib}.scm PROPERTY chicken_import_library TRUE)
    add_chicken_library(${lib} ${lib}.scm
        OPTIONS ${IMPORT_LIBRARY_OPTIONS})
endforeach()

install(TARGETS ${import_LIBRARIES}
    DESTINATION ${INSTALL_EGGDIR})
