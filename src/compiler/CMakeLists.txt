set(compiler_OPTIONS ${PROGRAM_OPTIONS}
    -include-path ${chicken_SOURCE_DIR}/src)

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
        OPTIONS ${compiler_OPTIONS})
    add_chicken_library(chicken.compiler.${m}.import MODULE
        SOURCES ${CHICKEN_IMPORT_LIBRARY_DIR}/chicken.compiler.${m}.import.scm)
    install(TARGETS chicken.compiler.${m}.import
        DESTINATION ${INSTALL_EGGDIR})
endforeach()

add_chicken_executable(chicken-compiler
    SOURCES ../chicken.scm
    C_SOURCES ${compiler_SOURCES}
    OPTIONS ${compiler_OPTIONS})

set_target_properties(chicken-compiler PROPERTIES
    COMPILE_DEFINITIONS PIC
    OUTPUT_NAME chicken)

install(TARGETS chicken-compiler
    EXPORT chicken-targets
    RUNTIME DESTINATION ${INSTALL_BINDIR})
