project(chicken-tests C)

set(CHICKEN_COMMAND_WRAP TRUE)
set(CHICKEN_REPOSITORY ${CHICKEN_LOCAL_REPOSITORY})

get_target_property(chicken_path chicken LOCATION)
set(CHICKEN_EXECUTABLE ${chicken_path})

get_target_property(csi_path csi LOCATION)
set(CHICKEN_CSI_EXECUTABLE ${csi_path})

set(CHICKEN_OPTIONS -ignore-repository
    -types ${chicken_SOURCE_DIR}/types.db
    -include-path ${chicken_SOURCE_DIR})
set(CHICKEN_INCLUDE_DIRS ${chicken_SOURCE_DIR})

set(INTERPRET csi -nq -R chicken-syntax
    -I ${chicken_BINARY_DIR}
    -I ${CMAKE_CURRENT_SOURCE_DIR}
    -I ${CMAKE_CURRENT_BINARY_DIR})

add_custom_target(copy_libchicken
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:libchicken>
        ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIGURATION>/$<TARGET_FILE_NAME:libchicken>)
add_dependencies(check copy_libchicken)

function(add_interpreted_test name target)
    set(CHICKEN_COMMAND $<TARGET_FILE:csi> -nq -R chicken-syntax
        -I ${chicken_BINARY_DIR}
        -I ${CMAKE_CURRENT_SOURCE_DIR}
        -I ${CMAKE_CURRENT_BINARY_DIR}
        -s ${CMAKE_CURRENT_SOURCE_DIR}/${target}
        ${ARGN})
    add_test(NAME ${name}-i COMMAND
        ${CMAKE_COMMAND}
            "-DCHICKEN_COMMAND=${CHICKEN_COMMAND}"
            "-DCHICKEN_REPOSITORY=${CHICKEN_REPOSITORY}/$<CONFIGURATION>"
            -P ${CHICKEN_RUN})
endfunction()

function(add_compiled_test name)
    add_chicken_executable(${name} ${ARGN})
    add_test(NAME ${name} COMMAND ${name})
    add_dependencies(check ${name})
    set_property(TARGET ${name} PROPERTY FOLDER Tests)
endfunction()

file(COPY compiler.scm re-tests.txt meta-syntax-test.scm r4rstest.scm
    scrutiny.expected scrutiny-2.expected
    DESTINATION .)

# version tests

add_interpreted_test(version version-tests.scm)

# compiler tests

add_compiled_test(compiler compiler-tests.scm)

# compiler inlining tests

add_compiled_test(compiler-inlining inlining-tests.scm
    OPTIONS -optimize-level 3)

# scrutiny tests

add_compiled_test(typematch typematch-tests.scm
    OPTIONS -specialize -no-warnings)

add_chicken_sources(scrutiny_SOURCES scrutiny-tests.scm NO_FILE
    OPTIONS -analyze-only -scrutinize -verbose
    ERROR_FILE scrutiny.out)
add_chicken_sources(scrutiny_SOURCES scrutiny-tests-2.scm NO_FILE
    OPTIONS -analyze-only -scrutinize -verbose
    ERROR_FILE scrutiny-2.out)

add_custom_target(test-scrutiny
    DEPENDS ${scrutiny_SOURCES})
add_dependencies(check test-scrutiny)

add_test(NAME scrutiny COMMAND ${CMAKE_COMMAND} -E compare_files
    scrutiny.out scrutiny.expected)
add_test(NAME scrutiny-2 COMMAND ${CMAKE_COMMAND} -E compare_files
    scrutiny-2.out scrutiny-2.expected)

add_compiled_test(scrutiny-3 scrutiny-tests-3.scm
    OPTIONS -specialize -block)

add_compiled_test(scrutiny-strict scrutiny-tests-strict.scm
    OPTIONS -strict-types -specialize)

# specialization tests

add_compiled_test(specialization-test-1 specialization-test-1.scm
    EMIT_IMPORTS foo EMIT_TYPE_FILE foo
    OPTIONS -specialize -debug ox)

add_compiled_test(specialization-test-2 specialization-test-2.scm
    OPTIONS -types foo.types -specialize -debug ox
    DEPENDS foo.import.scm)

# specialization benchmark

add_chicken_executable(fft-normal fft.scm
    OPTIONS -optimize-level 2 -debug-level 0 -local -disable-interrupts
        -block)

add_chicken_executable(fft-specialized fft.scm
    SUFFIX -specialized
    OPTIONS -optimize-level 2 -debug-level 0 -local -disable-interrupts
        -block -specialize -debug x)

add_dependencies(check fft-normal fft-specialized)

add_test(NAME fft-normal COMMAND fft-normal 1000 7)
add_test(NAME fft-specialized COMMAND fft-specialized 1000 7)

# callback tests

# fails to compile with: C2375
if(NOT MSVC)
    add_compiled_test(callback-tests callback-tests.scm)
endif()

# runtime tests

add_compiled_test(apply apply-test.scm)
add_interpreted_test(apply apply-test.scm)

add_compiled_test(gc-hooks test-gc-hooks.scm)

# library tests

add_compiled_test(library library-tests.scm
    OPTIONS -specialize)

add_interpreted_test(library library-tests.scm)

add_compiled_test(records-and-setters records-and-setters-test.scm)

add_interpreted_test(records-and-setters records-and-setters-test.scm)

# reader tests

add_test(NAME reader COMMAND
    ${INTERPRET} -s ${CMAKE_CURRENT_SOURCE_DIR}/reader-tests.scm)

# dynamic-wind tests

add_interpreted_test(dynamic-wind dwindtst.scm)

add_compiled_test(dynamic-wind-compiled dwindtst.scm)

# lolevel tests

add_interpreted_test(lolevel lolevel-tests.scm)

add_compiled_test(lolevel lolevel-tests.scm)

# arithmetic tests

add_interpreted_test(arithmetic arithmetic-test.scm -D check)

# pretty printer tests

add_interpreted_test(pretty-printer pp-test.scm)

# evaluation environment tests

add_interpreted_test(environment environment-tests.scm)

# syntax tests

add_interpreted_test(syntax syntax-tests.scm)

add_compiled_test(syntax syntax-tests.scm)

add_compiled_test(syntax2 syntax-tests-2.scm)

# meta syntax tests

add_compiled_test(meta-syntax meta-syntax-test.scm
    EMIT_IMPORTS meta-syntax-test)

add_interpreted_test(meta-syntax meta-syntax-test.scm -b
    -e "(import meta-syntax-test)"
    -e "(assert (equal? '((1)) (bar 1 2)))"
    -e "(assert (equal? '(list 1 2 3) (listify)))"
    -e "(import meta-syntax-test-usage)"
    -e "(assert (equal? '(1) (foo-user)))")

add_test(NAME meta-syntax-2 COMMAND ${INTERPRET} -b
    -e "(require-library meta-syntax-test)"
    -e "(import meta-syntax-test)"
    -e "(assert (equal? '((1)) (bar 1 2)))"
    -e "(assert (equal? '(list 1 2 3) (listify)))"
    -e "(import meta-syntax-test-usage)"
    -e "(assert (equal? '(1) (foo-user)))")

# reexport tests

add_chicken_library(reexport-m1 reexport-m1.scm EMIT_IMPORTS reexport-m1)
add_chicken_library(reexport-m3 reexport-m3.scm EMIT_IMPORTS reexport-m3)
add_chicken_library(reexport-m4 reexport-m4.scm EMIT_IMPORTS reexport-m4
    DEPENDS reexport-m3)
add_chicken_library(reexport-m5 reexport-m5.scm EMIT_IMPORTS reexport-m5)
add_chicken_library(reexport-m6 reexport-m6.scm EMIT_IMPORTS reexport-m6
    DEPENDS reexport-m5)

add_dependencies(check reexport-m1 reexport-m3 reexport-m4 reexport-m5
    reexport-m6)

add_interpreted_test(reexport-m2 reexport-m2.scm)

add_compiled_test(reexport-m2 reexport-m2.scm
    DEPENDS reexport-m1)

add_interpreted_test(reexport reexport-tests.scm)

add_compiled_test(reexport reexport-tests.scm)

add_compiled_test(reexport-2 reexport-tests-2.scm
    DEPENDS reexport-m4 reexport-m6)

# functor tests

add_chicken_module(square-functor square-functor.scm)

add_compiled_test(functor functor-tests.scm)
add_interpreted_test(functor functor-tests.scm)

add_compiled_test(functor-simple simple-functors-test.scm)
add_interpreted_test(functor-simple simple-functors-test.scm)

add_compiled_test(functor-use-square use-square-functor.scm
    DEPENDS square-functor)
add_interpreted_test(functor-use-square use-square-functor.scm)

# compiler syntax tests

add_compiled_test(compiler-syntax compiler-syntax-tests.scm)

# import tests

add_interpreted_test(import import-tests.scm)

# import library tests

add_chicken_module(import-library-test1 import-library-test1.scm)

# add_compiled_test(import-library import-library-test2.scm
#     DEPENDS import-library-test1)

add_interpreted_test(import-library import-library-test2.scm)

# optionals tests

add_interpreted_test(optional test-optional.scm)
add_compiled_test(optional test-optional.scm)

# syntax tests (matchable)

add_interpreted_test(matchable matchable.scm)

# syntax tests (loopy-loop)

add_interpreted_test(loopy loopy-test.scm)

# r4rs tests

add_interpreted_test(r4rs r4rstest.scm -i
    -e "(set! ##sys#procedure->string (constantly \"#<procedure>\"))")

# r5rs pitfalls

add_interpreted_test(r5rs r5rs_pitfalls.scm)

# r7rs tests

add_interpreted_test(r7rs r7rs-tests.scm -i)

# module tests

add_interpreted_test(module1 module-tests.scm)
add_interpreted_test(module2 module-tests-2.scm)

add_compiled_test(module module-tests-compiled.scm)

# module tests (ec)
# add_interpreted_test(ec ec-tests.scm)

# hash-table tests

add_interpreted_test(hash-table hash-table-tests.scm)

# port tests

add_interpreted_test(port port-tests.scm)

# fixnum tests

add_compiled_test(fixnum fixnum-tests.scm)

# string->number tests

add_compiled_test(numbers-string-conversion numbers-string-conversion-tests.scm)

# srfi-4 tests

add_interpreted_test(srfi-4 srfi-4-tests.scm)

# srfi-13 tests

add_interpreted_test(srfi-13 srfi-13-tests.scm)

# srfi-14 tests

add_compiled_test(srfi-14 srfi-14-tests.scm)

# condition tests

add_interpreted_test(condition condition-tests.scm)

# srfi-18 tests

add_interpreted_test(srfi-18-simple-thread simple-thread-test.scm)

add_interpreted_test(srfi-18-mutex mutex-test.scm)

# tries to use sys/time.h unconditionally
if(NOT MSVC)
    add_compiled_test(srfi-18-signal srfi-18-signal-test.scm)
endif()

# data-structures tests

add_interpreted_test(data-structures data-structures-tests.scm)

# path tests

add_interpreted_test(path path-tests.scm)

# srfi-45 tests

add_interpreted_test(srfi-45 srfi-45-tests.scm)

# posix tests

add_compiled_test(posix posix-tests.scm)

# signal tests

add_compiled_test(signal signal-tests.scm)

# regular expression tests

add_interpreted_test(irregex test-irregex.scm)

add_interpreted_test(glob test-glob.scm)

# finalizer tests

add_interpreted_test(finalizers test-finalizers.scm)

add_compiled_test(finalizers test-finalizers.scm)

add_compiled_test(finalizers2 test-finalizers-2.scm)

add_chicken_executable(finalizer-error finalizer-error-test.scm)
add_dependencies(check finalizer-error)

add_test(NAME finalizer-error COMMAND finalizer-error -:hg101)

# locative stress test

add_compiled_test(locative-stress locative-stress-test.scm)

# syntax rules stress test

add_interpreted_test(syntax-rules syntax-rule-stress-test.scm)

# embedding tests

add_compiled_test(embedded1 EMBEDDED C_SOURCES embedded1.c)

add_compiled_test(embedded2 EMBEDDED embedded2.scm)

add_compiled_test(embedded3 EMBEDDED embedded4.scm C_SOURCES embedded3.c)

# private repository test
