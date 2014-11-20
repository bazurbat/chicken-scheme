set(library_OPTIONS ${PROGRAM_OPTIONS}
    -include-path ${chicken_SOURCE_DIR}/src)

set(library_MODULES
    srfi-13
    srfi-14
    srfi-18
    srfi-69
    match
    fmt fmt-c)

foreach(m ${library_MODULES})
    add_chicken_module(${m} ${m}.scm
        OPTIONS ${library_OPTIONS})
    install(TARGETS ${m}
        DESTINATION ${INSTALL_EGGDIR})
    if(NOT CMAKE_CROSSCOMPILING)
        install(TARGETS ${m}.import
            DESTINATION ${INSTALL_EGGDIR})
    endif()
endforeach()
