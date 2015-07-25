function(add_chicken_runtime name)
    cmake_parse_arguments(runtime "STATIC;SHARED" "SUFFIX" "OPTIONS" ${ARGN})

    if(runtime_STATIC)
        set(type STATIC)
    else()
        set(type SHARED)
        set(runtime_SHARED TRUE)
    endif()

    set(sources)
    set(options ${runtime_OPTIONS})
    set(c_sources chicken.h runtime.c ${CHICKEN_APPLY_HACK})

    if(WIN32)
        set(posix_scm posixwin.scm)
    else()
        set(posix_scm posixunix.scm)
    endif()

    set(scm_sources
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
        tcp.scm
        utils.scm)

    if(NOT CHICKEN_5)
        list(APPEND scm_sources
            srfi-13.scm
            srfi-14.scm
            srfi-18.scm)
    endif()

    add_chicken_sources(sources ${type}
        SUFFIX ${runtime_SUFFIX}
        SOURCES ${scm_sources}
        OPTIONS ${options})

    if(NOT CHICKEN_5)
        add_chicken_sources(sources srfi-69.scm ${type}
            SUFFIX ${runtime_SUFFIX}
            OPTIONS ${options} -extend private-namespace.scm)
    endif()

    add_library(${name} ${type} ${sources} ${c_sources})
    wrap_chicken_target(${name} ${type} NO_RUNTIME)

    set_property(TARGET ${name} PROPERTY
        DEFINE_SYMBOL C_BUILDING_LIBCHICKEN)

    if(UNIX AND runtime_SHARED)
        # CHICKEN assumes this naming scheme in a number of places.
        set_target_properties(${name} PROPERTIES
            PREFIX "")

        if(NOT ANDROID)
            set_target_properties(${name} PROPERTIES
                SUFFIX ""
                OUTPUT_NAME ${name}${CMAKE_SHARED_LIBRARY_SUFFIX}.${API_VERSION})
        endif()
    endif()
endfunction()

function(add_chicken_compiler name)
    cmake_parse_arguments(compiler
        "STATIC;SHARED" "SUFFIX;OUTPUT_NAME" "OPTIONS" ${ARGN})

    if(compiler_STATIC)
        set(type STATIC)
    endif()
    if(NOT compiler_OUTPUT_NAME)
        set(compiler_OUTPUT_NAME ${name})
    endif()

    set(sources)
    set(options ${compiler_OPTIONS})
    set(components
        batch-driver
        c-backend
        c-platform
        compiler-syntax
        lfa2
        optimizer
        scrutinizer
        support)

    if(CHICKEN_5)
        list(APPEND components core)

        foreach(module ${components})
            add_chicken_sources(sources ${module}.scm
                SUFFIX ${compiler_SUFFIX}
                EMIT_IMPORTS chicken.compiler.${module}
                OPTIONS ${options})
        endforeach()
    else()
        list(APPEND components compiler)
        list(APPEND options -extend private-namespace.scm)

        foreach(src ${components})
            add_chicken_sources(sources ${src}.scm
                SUFFIX ${compiler_SUFFIX}
                OPTIONS ${options})
        endforeach()
    endif()

    add_chicken_sources(sources
        SUFFIX ${compiler_SUFFIX}
        SOURCES chicken.scm
        OPTIONS ${options})

    add_executable(${name} ${sources})
    wrap_chicken_target(${name} ${type})

    set_target_properties(${name} PROPERTIES
        OUTPUT_NAME ${compiler_OUTPUT_NAME})

    set(compiler_OPTIONS ${options} PARENT_SCOPE)
endfunction()
