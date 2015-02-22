set(library_OPTIONS ${PROGRAM_OPTIONS}
    -include-path ${chicken_SOURCE_DIR}/src)

set(library_MODULES
    match
)

foreach(m ${library_MODULES})
    add_chicken_module(${m} ${m}.scm
        OPTIONS ${library_OPTIONS})
    install(TARGETS ${m}
        DESTINATION ${INSTALL_EGGDIR})
    install(TARGETS ${m}.import
        DESTINATION ${INSTALL_EGGDIR})
endforeach()
