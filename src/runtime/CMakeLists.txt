# runtime

list(APPEND CHICKEN_OPTIONS -include-path ${chicken_SOURCE_DIR})

set(runtime_MODULES
    platform
)

foreach(m ${runtime_MODULES})
    add_chicken_module(runtime.${m}
        SOURCES ${m}.scm)
endforeach()

foreach(module ${runtime_MODULES})
    install(TARGETS runtime.${module} runtime.${module}.import
        ARCHIVE DESTINATION ${INSTALL_EGGDIR}
        LIBRARY DESTINATION ${INSTALL_EGGDIR})
endforeach()
