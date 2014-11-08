# runtime

set(runtime_MODULES
)

foreach(name ${runtime_MODULES})
    add_chicken_library(runtime.${name} MODULE
        SOURCES ${name}.scm
        EMIT_IMPORTS runtime.${name}
        OPTIONS ${LIBRARY_OPTIONS} -include-path ${chicken_SOURCE_DIR})
endforeach()
