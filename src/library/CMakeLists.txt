# library

add_chicken_library(match MODULE
    SOURCES match.scm
    EMIT_IMPORTS match
    OPTIONS ${LIBRARY_OPTIONS} -include-path ${chicken_SOURCE_DIR})
