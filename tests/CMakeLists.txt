project(chicken-tests C)

set(CHICKEN_COMPILER $<TARGET_FILE:chicken-compiler>)
set(CHICKEN_INTERPRETER $<TARGET_FILE:csi>)
set(CHICKEN_LIBRARIES libchicken ${CHICKEN_EXTRA_LIBRARIES})
set(CHICKEN_REPOSITORY ${CHICKEN_LOCAL_REPOSITORY}/$<CONFIGURATION>)

set(CHICKEN_OPTIONS -ignore-repository
    -types ${CHICKEN_TYPES_DB}
    -include-path ${chicken_SOURCE_DIR})
set(CHICKEN_IMPORT_LIBRARY_DIR "")
set(CHICKEN_DATA_DIR "")
list(APPEND CHICKEN_INCLUDE_DIRS ${chicken_SOURCE_DIR})

set(CHICKEN_TRIM ${CMAKE_HOME_DIRECTORY}/cmake/ChickenTrim.cmake)

if(WIN32)
    add_custom_target(copy_libchicken
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            $<TARGET_FILE:libchicken>
            ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIGURATION>/$<TARGET_FILE_NAME:libchicken>
        DEPENDS libchicken VERBATIM)
    add_dependencies(BUILD_TESTS copy_libchicken)
    set_property(TARGET copy_libchicken PROPERTY FOLDER "Tests")
endif()

function(add_chicken_test name)
    cmake_parse_arguments(test "" "PATH;OUTPUT_FILE" "ENVIRONMENT" ${ARGN})

    set(environment ${test_ENVIRONMENT})
    list(APPEND environment CHICKEN_REPOSITORY=${CHICKEN_REPOSITORY})
    list(APPEND environment LD_LIBRARY_PATH=${chicken_BINARY_DIR})
    list(APPEND environment DYLD_LIBRARY_PATH=${chicken_BINARY_DIR})

    if(test_PATH)
        file(TO_CMAKE_PATH "$ENV{PATH}" path)
        list(INSERT path 0 "${test_PATH}")
        file(TO_NATIVE_PATH "${path}" path)
        # HACK: have not found a cleaner way to do this yet.
        if(UNIX)
            string(REPLACE ";" ":" path "${path}")
        endif()
        list(APPEND environment "PATH=${path}")
    endif()

    if(test_OUTPUT_FILE)
        add_test(NAME ${name} COMMAND ${CMAKE_COMMAND}
            "-DOUTPUT_FILE=${test_OUTPUT_FILE}"
            "-DCOMMAND=${test_UNPARSED_ARGUMENTS}"
            -P ${CHICKEN_RUN})
    else()
        add_test(NAME ${name} COMMAND ${test_UNPARSED_ARGUMENTS})
    endif()

    set_tests_properties(${name} PROPERTIES
        ENVIRONMENT "${environment}")
endfunction()

function(add_compiled_test name)
    cmake_parse_arguments(test "" "ARGS;OUTPUT_FILE" "" ${ARGN})
    add_chicken_executable(${name} ${test_UNPARSED_ARGUMENTS})
    add_chicken_test(${name} $<TARGET_FILE:${name}> ${test_ARGS}
        OUTPUT_FILE "${test_OUTPUT_FILE}")
    add_dependencies(BUILD_TESTS ${name})
    set_target_properties(${name} PROPERTIES FOLDER "Tests")
endfunction()

function(add_chicken_interpreted_test name)
    cmake_parse_arguments(test "" "SCRIPT" "" ${ARGN})

    set(command ${CHICKEN_INTERPRETER} -bnq
        -I ${CMAKE_CURRENT_SOURCE_DIR}
        -I ${CMAKE_CURRENT_BINARY_DIR})

    if(test_SCRIPT)
        set(args -s ${CMAKE_CURRENT_SOURCE_DIR}/${test_SCRIPT})
    endif()

    # NOTE: order of arguments matters
    add_chicken_test(${name}-i ${command} ${test_UNPARSED_ARGUMENTS} ${args})
endfunction()

set(expected_FILES
    arithmetic-test.32.expected
    arithmetic-test.64.expected
    dwindtst.expected
    r4rstest.out
    scrutiny-2.expected
    scrutiny.expected)
set(expected_FILES_prepared "")

foreach(file ${expected_FILES})
    add_custom_command(OUTPUT ${file}
        COMMAND ${CMAKE_COMMAND}
            -D INPUT_FILE=${CMAKE_CURRENT_SOURCE_DIR}/${file}
            -D OUTPUT_FILE=${CMAKE_CURRENT_BINARY_DIR}/${file}
            -P ${CHICKEN_TRIM}
        DEPENDS ${file} VERBATIM)
endforeach()

add_custom_command(OUTPUT ${CHICKEN_LOCAL_REPOSITORY}/types.db
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CHICKEN_TYPES_DB} ${CHICKEN_LOCAL_REPOSITORY}
        DEPENDS ${CHICKEN_TYPES_DB} VERBATIM)

add_custom_target(prepare-tests
    DEPENDS ${expected_FILES} ${CHICKEN_LOCAL_REPOSITORY}/types.db)
set_property(TARGET prepare-tests PROPERTY FOLDER "Tests")

add_dependencies(BUILD_TESTS prepare-tests)

# version tests

add_chicken_interpreted_test(version SCRIPT version-tests.scm)

# compiler tests

add_compiled_test(compiler compiler-tests.scm)

# compiler inlining tests

add_compiled_test(compiler-inlining inlining-tests.scm
    OPTIONS -optimize-level 3)

# scrutiny tests

add_compiled_test(typematch typematch-tests.scm
    OPTIONS -specialize -no-warnings)

add_chicken_sources(scrutiny_SOURCES scrutiny-tests.scm
    OPTIONS -analyze-only -scrutinize -verbose
    ERROR_FILE scrutiny.out)
add_chicken_sources(scrutiny_SOURCES scrutiny-tests-2.scm
    OPTIONS -analyze-only -scrutinize -verbose
    ERROR_FILE scrutiny-2.out)

add_custom_target(scrutiny-tests-build
    DEPENDS ${scrutiny_SOURCES})
set_property(TARGET scrutiny-tests-build PROPERTY FOLDER "Tests")

foreach(file scrutiny.out scrutiny-2.out)
    add_custom_command(OUTPUT ${file}.trim
        COMMAND ${CMAKE_COMMAND}
            -D INPUT_FILE=${file}
            -D OUTPUT_FILE=${file}.trim
            -D PATTERN=${CMAKE_CURRENT_SOURCE_DIR}/
            -P ${CHICKEN_TRIM}
        DEPENDS ${file} VERBATIM)
endforeach()

add_custom_target(scrutiny-tests-prepare
    DEPENDS scrutiny.out.trim scrutiny-2.out.trim)
add_dependencies(BUILD_TESTS scrutiny-tests-prepare)
add_dependencies(scrutiny-tests-prepare prepare-tests)
set_target_properties(scrutiny-tests-prepare PROPERTIES FOLDER "Tests")

add_test(NAME scrutiny COMMAND ${CMAKE_COMMAND} -E compare_files
    scrutiny.expected scrutiny.out.trim)
add_test(NAME scrutiny-2 COMMAND ${CMAKE_COMMAND} -E compare_files
    scrutiny-2.expected scrutiny-2.out.trim)

add_compiled_test(scrutiny-3 scrutiny-tests-3.scm
    OPTIONS -specialize -block)

add_compiled_test(scrutiny-strict scrutiny-tests-strict.scm
    OPTIONS -strict-types -specialize)

# specialization tests

add_compiled_test(specialization-test-1 specialization-test-1.scm
    EMIT_IMPORTS foo
    OPTIONS -specialize -debug ox -emit-type-file foo.types)

add_compiled_test(specialization-test-2 specialization-test-2.scm
    OPTIONS -types foo.types -specialize -debug ox
    DEPENDS ${CHICKEN_IMPORT_LIBRARY_DIR}/foo.import.scm)

# specialization benchmark

add_chicken_executable(fft-normal fft.scm
    OPTIONS -optimize-level 2 -debug-level 0 -local -disable-interrupts
        -block)

add_chicken_executable(fft-specialized fft.scm
    SUFFIX -specialized
    OPTIONS -optimize-level 2 -debug-level 0 -local -disable-interrupts
        -block -specialize -debug x)

add_dependencies(BUILD_TESTS fft-normal fft-specialized)

add_test(NAME fft-normal COMMAND fft-normal 1000 7)
add_test(NAME fft-specialized COMMAND fft-specialized 1000 7)

set_property(TARGET fft-normal fft-specialized PROPERTY FOLDER "Tests")


# callback tests

# fails to compile with: C2375
if(NOT MSVC)
    add_compiled_test(callback callback-tests.scm)

    add_chicken_test(callback-twice
        $<TARGET_FILE:callback> twice)
    set_tests_properties(callback-twice PROPERTIES WILL_FAIL TRUE)
endif()

# runtime tests

add_compiled_test(apply apply-test.scm)

add_chicken_interpreted_test(apply SCRIPT apply-test.scm)

add_compiled_test(gc-hooks test-gc-hooks.scm)

# library tests

add_compiled_test(library library-tests.scm
    OPTIONS -specialize)

add_chicken_interpreted_test(library SCRIPT library-tests.scm)

add_compiled_test(records-and-setters records-and-setters-test.scm)

add_chicken_interpreted_test(records-and-setters SCRIPT records-and-setters-test.scm)

# reader tests

add_chicken_interpreted_test(reader SCRIPT reader-tests.scm)

# dynamic-wind tests

add_chicken_interpreted_test(dynamic-wind SCRIPT dwindtst.scm
    OUTPUT_FILE dynamic-wind-i.out)

add_compiled_test(dynamic-wind dwindtst.scm
    OUTPUT_FILE dynamic-wind.out)

add_test(NAME dynamic-wind-expected COMMAND ${CMAKE_COMMAND} -E compare_files
    dynamic-wind.out dwindtst.expected.t)
set_tests_properties(dynamic-wind-expected PROPERTIES DEPENDS dynamic-wind)

add_test(NAME dynamic-wind-i-expected COMMAND ${CMAKE_COMMAND} -E compare_files
    dynamic-wind-i.out dwindtst.expected.t)
set_tests_properties(dynamic-wind-i-expected PROPERTIES DEPENDS dynamic-wind-i)

# lolevel tests

add_chicken_interpreted_test(lolevel SCRIPT lolevel-tests.scm)

add_compiled_test(lolevel lolevel-tests.scm)

# arithmetic tests

add_chicken_interpreted_test(arithmetic SCRIPT arithmetic-test.scm -D check)

# pretty printer tests

add_chicken_interpreted_test(pretty-printer SCRIPT pp-test.scm)

# evaluation environment tests

add_chicken_interpreted_test(environment SCRIPT environment-tests.scm)

# syntax tests

add_chicken_interpreted_test(syntax SCRIPT syntax-tests.scm)

add_compiled_test(syntax syntax-tests.scm)

add_compiled_test(syntax2 syntax-tests-2.scm)

# meta syntax tests

add_custom_command(OUTPUT meta-syntax-test.scm COMMAND ${CMAKE_COMMAND}
    -E copy ${CMAKE_CURRENT_SOURCE_DIR}/meta-syntax-test.scm meta-syntax-test.scm
    VERBATIM)
add_custom_target(prepare-meta-syntax-tests
    DEPENDS meta-syntax-test.scm)
add_dependencies(BUILD_TESTS prepare-meta-syntax-tests)
set_property(TARGET prepare-meta-syntax-tests PROPERTY FOLDER "Tests")

add_compiled_test(meta-syntax meta-syntax-test.scm
    EMIT_IMPORTS meta-syntax-test)

add_chicken_interpreted_test(meta-syntax meta-syntax-test.scm
    -e "(import meta-syntax-test)"
    -e "(assert (equal? '((1)) (bar 1 2)))"
    -e "(assert (equal? '(list 1 2 3) (listify)))"
    -e "(import meta-syntax-test-usage)"
    -e "(assert (equal? '(1) (foo-user)))")

add_chicken_interpreted_test(meta-syntax-2
    -e "(require-library meta-syntax-test)"
    -e "(import meta-syntax-test)"
    -e "(assert (equal? '((1)) (bar 1 2)))"
    -e "(assert (equal? '(list 1 2 3) (listify)))"
    -e "(import meta-syntax-test-usage)"
    -e "(assert (equal? '(1) (foo-user)))")

set_tests_properties(meta-syntax-i meta-syntax-2-i
    PROPERTIES DEPENDS meta-syntax)

# reexport tests

add_chicken_library(reexport-m1 reexport-m1.scm EMIT_IMPORTS reexport-m1)
add_chicken_library(reexport-m3 reexport-m3.scm EMIT_IMPORTS reexport-m3)
add_chicken_library(reexport-m4 reexport-m4.scm EMIT_IMPORTS reexport-m4
    DEPENDS reexport-m3)
add_chicken_library(reexport-m5 reexport-m5.scm EMIT_IMPORTS reexport-m5)
add_chicken_library(reexport-m6 reexport-m6.scm EMIT_IMPORTS reexport-m6
    DEPENDS reexport-m5)
set_property(TARGET reexport-m1 reexport-m3 reexport-m4 reexport-m5 reexport-m6
    PROPERTY FOLDER "Tests")

add_dependencies(BUILD_TESTS reexport-m1 reexport-m3 reexport-m4 reexport-m5
    reexport-m6)

add_chicken_interpreted_test(reexport-m2 SCRIPT reexport-m2.scm)

add_compiled_test(reexport-m2 reexport-m2.scm
    DEPENDS reexport-m1)

add_chicken_interpreted_test(reexport SCRIPT reexport-tests.scm)

add_compiled_test(reexport reexport-tests.scm)

add_compiled_test(reexport-2 reexport-tests-2.scm
    DEPENDS reexport-m4 reexport-m6)

# functor tests

add_chicken_module(square-functor square-functor.scm)
set_property(TARGET square-functor PROPERTY FOLDER "Tests")

add_compiled_test(functor functor-tests.scm)
add_chicken_interpreted_test(functor SCRIPT functor-tests.scm)

add_compiled_test(functor-simple simple-functors-test.scm)
add_chicken_interpreted_test(functor-simple SCRIPT simple-functors-test.scm)

add_compiled_test(functor-use-square use-square-functor.scm
    DEPENDS square-functor)
add_chicken_interpreted_test(functor-use-square SCRIPT use-square-functor.scm)

# compiler syntax tests

add_compiled_test(compiler-syntax compiler-syntax-tests.scm)

# import tests

add_chicken_interpreted_test(import SCRIPT import-tests.scm)

# import library tests
# TODO: handle running with or without compiled import library

add_chicken_module(import-library-test1 import-library-test1.scm
    EMIT_IMPORTS import-library-test1-m)
set_property(TARGET import-library-test1 PROPERTY FOLDER "Tests")
set_property(TARGET import-library-test1-m.import PROPERTY FOLDER "Tests")
add_dependencies(BUILD_TESTS import-library-test1)

add_chicken_interpreted_test(import-library SCRIPT import-library-test2.scm)

add_compiled_test(import-library import-library-test2.scm
    DEPENDS import-library-test1)

# optionals tests

add_chicken_interpreted_test(optional SCRIPT test-optional.scm)
add_compiled_test(optional test-optional.scm)

# syntax tests (matchable)

add_chicken_interpreted_test(matchable SCRIPT matchable.scm)

# syntax tests (loopy-loop)

add_chicken_interpreted_test(loopy SCRIPT loopy-test.scm)

# r4rs tests

add_custom_command(OUTPUT r4rstest.scm COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_CURRENT_SOURCE_DIR}/r4rstest.scm r4rstest.scm)
add_custom_target(prepare-r4rs-tests
    DEPENDS r4rstest.scm)
add_dependencies(BUILD_TESTS prepare-r4rs-tests)

set_property(TARGET prepare-r4rs-tests PROPERTY FOLDER "Tests")

add_chicken_interpreted_test(r4rs SCRIPT r4rstest.scm -i
    OUTPUT_FILE r4rs-i.out
    -e "(set! ##sys#procedure->string (constantly \"#<procedure>\"))")

add_test(NAME r4rs-expected COMMAND ${CMAKE_COMMAND} -E compare_files
    r4rs-i.out r4rstest.out.t)
set_tests_properties(r4rs-expected PROPERTIES DEPENDS r4rs)

# r5rs pitfalls

add_chicken_interpreted_test(r5rs SCRIPT r5rs_pitfalls.scm -i)

# r7rs tests

add_chicken_interpreted_test(r7rs SCRIPT r7rs-tests.scm -i)

# module tests

add_chicken_interpreted_test(module1 SCRIPT module-tests.scm)
add_chicken_interpreted_test(module2 SCRIPT module-tests-2.scm)

add_compiled_test(module module-tests-compiled.scm)

# module tests (chained)

add_chicken_module(chained-modules test-chained-modules.scm
    EMIT_IMPORTS m3)
set_property(TARGET chained-modules PROPERTY FOLDER "Tests")
set_property(TARGET m3.import PROPERTY FOLDER "Tests")
add_dependencies(BUILD_TESTS chained-modules)

add_chicken_interpreted_test(modules-chained SCRIPT test-chained-modules.scm)

add_chicken_interpreted_test(modules-chained-2
    $<TARGET_FILE:chained-modules>)

add_chicken_interpreted_test(modules-chained-3
    $<TARGET_FILE:chained-modules>
    -e "(import m3) (s3)")

# module tests (ec)

add_custom_command(OUTPUT ec.scm ec-tests.scm
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/ec.scm ec.scm
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/ec-tests.scm ec-tests.scm
    VERBATIM)
add_custom_target(prepare-ec-tests
    DEPENDS ec.scm ec-tests.scm)
add_dependencies(BUILD_TESTS prepare-ec-tests)

add_chicken_module(ec-mod ec.scm EMIT_IMPORTS ec)
set_property(TARGET prepare-ec-tests ec-mod PROPERTY FOLDER "Tests")
set_property(TARGET ec.import PROPERTY FOLDER "Tests")
add_dependencies(BUILD_TESTS ec-mod)

add_chicken_interpreted_test(ec ec.scm ec-tests.scm)

add_chicken_interpreted_test(ec-2 $<TARGET_FILE:ec-mod> ec-tests.scm)

# add_compiled_test(ec ec-tests.scm
#     DEPENDS ec-mod)

# hash-table tests

if(NOT CHICKEN_5)
    add_chicken_interpreted_test(hash-table SCRIPT hash-table-tests.scm)
endif()

# port tests

add_custom_command(OUTPUT compiler.scm COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_CURRENT_SOURCE_DIR}/compiler.scm compiler.scm
    VERBATIM)
add_custom_target(prepare-port-tests
    DEPENDS compiler.scm)
add_dependencies(BUILD_TESTS prepare-port-tests)

set_property(TARGET prepare-port-tests PROPERTY FOLDER "Tests")

add_chicken_interpreted_test(port SCRIPT port-tests.scm)

# fixnum tests

add_compiled_test(fixnum fixnum-tests.scm)

# string->number tests

add_compiled_test(numbers-string-conversion numbers-string-conversion-tests.scm)

# srfi-4 tests

add_chicken_interpreted_test(srfi-4 SCRIPT srfi-4-tests.scm)

if(NOT CHICKEN_5)
    add_chicken_interpreted_test(srfi-13 SCRIPT srfi-13-tests.scm)
    add_compiled_test(srfi-14 srfi-14-tests.scm)
endif()

# condition tests

add_chicken_interpreted_test(condition SCRIPT condition-tests.scm)

# srfi-18 tests
if(NOT CHICKEN_5)
    add_chicken_interpreted_test(srfi-18-simple-thread SCRIPT simple-thread-test.scm)
    add_chicken_interpreted_test(srfi-18-mutex SCRIPT mutex-test.scm)

    # tries to use sys/time.h unconditionally
    if(NOT MSVC)
        add_compiled_test(srfi-18-signal srfi-18-signal-test.scm)
    endif()
endif()

# data-structures tests

add_chicken_interpreted_test(data-structures SCRIPT data-structures-tests.scm)

# path tests

add_chicken_interpreted_test(path SCRIPT path-tests.scm)

# srfi-45 tests

add_chicken_interpreted_test(srfi-45 SCRIPT srfi-45-tests.scm)

# posix tests

add_custom_command(OUTPUT tmpdir
    COMMAND ${CMAKE_COMMAND} -E make_directory tmpdir
    VERBATIM)
add_custom_command(OUTPUT tmpdir/.dotfile
    COMMAND ${CMAKE_COMMAND} -E touch tmpdir/.dotfile
    DEPENDS tmpdir VERBATIM)

if(UNIX)
    add_custom_command(OUTPUT tmpdir/symlink
        COMMAND ${CMAKE_COMMAND} -E create_symlink /usr tmpdir/symlink
        DEPENDS tmpdir VERBATIM)
    add_custom_target(prepare-posix-tests
        DEPENDS tmpdir/.dotfile tmpdir/symlink)
else()
    add_custom_target(prepare-posix-tests
        DEPENDS tmpdir/.dotfile)
endif()

set_target_properties(prepare-posix-tests PROPERTIES FOLDER "Tests")
add_dependencies(BUILD_TESTS prepare-posix-tests)

add_compiled_test(posix posix-tests.scm ARGS $<TARGET_FILE:csi>)

add_chicken_interpreted_test(posix
    -R posix -e "(delete-directory \"tmpdir\" #t)")
set_tests_properties(posix-i PROPERTIES REQUIRED_FILES tmpdir/.dotfile)

# signal tests

# causes debugger hook
if(NOT MSVC)
    add_compiled_test(signal signal-tests.scm)
endif()

# regular expression tests

add_custom_command(OUTPUT re-tests.txt COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_CURRENT_SOURCE_DIR}/re-tests.txt re-tests.txt
    VERBATIM)
add_custom_target(prepare-regex-tests
    DEPENDS re-tests.txt)
add_dependencies(BUILD_TESTS prepare-regex-tests)

set_property(TARGET prepare-regex-tests PROPERTY FOLDER "Tests")

add_chicken_interpreted_test(irregex SCRIPT test-irregex.scm)

add_chicken_interpreted_test(glob SCRIPT test-glob.scm)

# compiler/nursery stress test

foreach(s 100000 120000 200000 250000 300000 350000 400000 450000 500000)
    add_chicken_test(compiler-nursery-stress-${s} $<TARGET_FILE:chicken-compiler>
        -ignore-repository ${chicken_SOURCE_DIR}/utils.scm -:s${s}
        -include-path ${chicken_SOURCE_DIR})
endforeach()

# symbol-GC tests

add_compiled_test(symbol-gc symbolgc-tests.scm ARGS "-:w")

# finalizer tests

add_chicken_interpreted_test(finalizers SCRIPT test-finalizers.scm)

add_compiled_test(finalizers test-finalizers.scm)

add_compiled_test(finalizers-2 test-finalizers-2.scm)

add_compiled_test(finalizer-error finalizer-error-test.scm ARGS "-:hg101")

# locative stress test

add_compiled_test(locative-stress locative-stress-test.scm)

# syntax rules stress test

add_chicken_interpreted_test(syntax-rules SCRIPT syntax-rule-stress-test.scm)

# embedding tests

add_compiled_test(embedded1 EMBEDDED C_SOURCES embedded1.c)

add_compiled_test(embedded2 EMBEDDED embedded2.scm)

add_compiled_test(embedded3 EMBEDDED embedded4.scm C_SOURCES embedded3.c)

# private repository test

if(NOT MSVC)

add_compiled_test(private-repository private-repository-test.scm
    DEFINITIONS C_PRIVATE_REPOSITORY
    ARGS ${CMAKE_CURRENT_BINARY_DIR})

add_chicken_test(private-repository-with-path
    $<TARGET_FILE:private-repository> ${CMAKE_CURRENT_BINARY_DIR}
    PATH ${CMAKE_CURRENT_BINARY_DIR})

# reinstall tests

set(CSC_OPTIONS -compiler $<TARGET_FILE:chicken-compiler> -v
    -I${chicken_SOURCE_DIR} -I${chicken_BINARY_DIR}
    -L${chicken_SOURCE_DIR} -L${chicken_BINARY_DIR}
    -rpath ${chicken_BINARY_DIR}
    -include-path ${chicken_SOURCE_DIR})
_chicken_join(CSC_OPTIONS ${CSC_OPTIONS})

set(CSI_OPTIONS "-e (use files setup-api)"
    "-e (register-program \"csc\" \"$<TARGET_FILE:csc>\")"
    "-e (register-program \"chicken\" \"$<TARGET_FILE:chicken-compiler>\")"
    "-e (register-program \"csi\" \"$<TARGET_FILE:csi>\")")
_chicken_join(CSI_OPTIONS ${CSI_OPTIONS})

add_chicken_test(reinstall-uninstall
    $<TARGET_FILE:chicken-uninstall> -force reverser)

add_chicken_test(reinstall-install
    $<TARGET_FILE:chicken-install> -t local -l ${CMAKE_CURRENT_SOURCE_DIR}
    -csi $<TARGET_FILE:csi> reverser:1.0
    ENVIRONMENT CSC_OPTIONS=${CSC_OPTIONS} CSI_OPTIONS=${CSI_OPTIONS})
set_tests_properties(reinstall-install PROPERTIES
    DEPENDS reinstall-uninstall)

add_chicken_interpreted_test(reinstall-run-rev-app
    ${chicken-tests_SOURCE_DIR}/rev-app.scm 1.0)
set_tests_properties(reinstall-run-rev-app-i PROPERTIES
    DEPENDS reinstall-install)

add_chicken_test(reinstall-force
    $<TARGET_FILE:chicken-install> -t local -l ${CMAKE_CURRENT_SOURCE_DIR}
    -reinstall -force -csi $<TARGET_FILE:csi>
    ENVIRONMENT CSC_OPTIONS=${CSC_OPTIONS} CSI_OPTIONS=${CSI_OPTIONS})
set_tests_properties(reinstall-force PROPERTIES
    DEPENDS reinstall-run-rev-app-i)

add_chicken_interpreted_test(reinstall-run-rev-app-2
    ${chicken-tests_SOURCE_DIR}/rev-app.scm 1.0)
set_tests_properties(reinstall-run-rev-app-2-i PROPERTIES
    DEPENDS reinstall-force)

# deployment tests

# the same as CSC_OPTIONS2 but without rpath
set(CSC_OPTIONS2 -compiler $<TARGET_FILE:chicken-compiler> -v
    -I${chicken_SOURCE_DIR} -I${chicken_BINARY_DIR}
    -L${chicken_SOURCE_DIR} -L${chicken_BINARY_DIR}
    -include-path ${chicken_SOURCE_DIR})
_chicken_join(CSC_OPTIONS2 ${CSC_OPTIONS2})

add_custom_target(prepare-deployment-tests
    COMMAND ${CMAKE_COMMAND} -E remove
        ${chicken-tests_SOURCE_DIR}/reverser/tags/1.1/reverser.import.scm
        ${chicken-tests_SOURCE_DIR}/reverser/tags/1.1/reverser.import.so
        ${chicken-tests_SOURCE_DIR}/reverser/tags/1.1/reverser.so
    VERBATIM)
add_dependencies(BUILD_TESTS prepare-deployment-tests)

add_chicken_test(deployment-install $<TARGET_FILE:chicken-install>
    -t local -l ${CMAKE_CURRENT_SOURCE_DIR} -csi $<TARGET_FILE:csi> reverser
    ENVIRONMENT CSC_OPTIONS=${CSC_OPTIONS2} CSI_OPTIONS=${CSI_OPTIONS}
                TARGET_LIB_PATH=${chicken_BINARY_DIR})
set_tests_properties(deployment-install PROPERTIES
    DEPENDS reinstall-run-rev-app-2-i)

add_chicken_test(deployment-deploy $<TARGET_FILE:csc>
    -deploy -o rev-app
    ${chicken-tests_SOURCE_DIR}/rev-app.scm
    ENVIRONMENT CSC_OPTIONS=${CSC_OPTIONS2} CSI_OPTIONS=${CSI_OPTIONS}
                TARGET_LIB_PATH=${chicken_BINARY_DIR})
set_tests_properties(deployment-deploy PROPERTIES
    DEPENDS deployment-install)

add_chicken_test(deployment-prefix $<TARGET_FILE:chicken-install>
    -t local -l ${CMAKE_CURRENT_SOURCE_DIR} -csi $<TARGET_FILE:csi>
    -deploy -prefix rev-app reverser
    ENVIRONMENT CSC_OPTIONS=${CSC_OPTIONS2} CSI_OPTIONS=${CSI_OPTIONS}
                TARGET_LIB_PATH=${chicken_BINARY_DIR})
set_tests_properties(deployment-prefix PROPERTIES
    DEPENDS deployment-deploy)

add_test(NAME deployment-copy-rev-app
    COMMAND ${CMAKE_COMMAND} -E copy_directory rev-app rev-app-2)
set_tests_properties(deployment-copy-rev-app PROPERTIES
    DEPENDS deployment-prefix)

# TODO: figure out why it insists on linking with the system libchicken

add_chicken_test(deployment-run-1
    ${CMAKE_CURRENT_BINARY_DIR}/rev-app/rev-app 1.1)
set_tests_properties(deployment-run-1 PROPERTIES
    DEPENDS deployment-prefix)

add_chicken_test(deployment-run-2
    ${CMAKE_CURRENT_BINARY_DIR}/rev-app-2/rev-app 1.1)
set_tests_properties(deployment-run-2 PROPERTIES
    DEPENDS deployment-prefix)

endif(NOT MSVC)

### benchmarks

function(chicken_add_benchmark name)
    set(_name benchmark-${name})
    set(_options -optimize-level 5 -debug-level 0 -no-warnings
                 -disable-interrupts -block)
    cmake_parse_arguments(benchmark "" "SOURCE;SUFFIX" "OPTIONS" ${ARGN})
    add_chicken_executable(${_name}
        SUFFIX -benchmark${benchmark_SUFFIX}
        SOURCES ${benchmark_SOURCE}
        OPTIONS ${_options} ${benchmark_OPTIONS})
    add_dependencies(BUILD_TESTS ${_name})
    add_test(NAME ${_name} COMMAND ${_name} ${benchmark_UNPARSED_ARGUMENTS})
    set_tests_properties(${_name} PROPERTIES LABELS "benchmark")
    set_target_properties(${_name} PROPERTIES FOLDER "Tests")
endfunction()

chicken_add_benchmark(null -:Hd
    SOURCE null.scm)

chicken_add_benchmark(compiler -:Hd
    SOURCE compiler.scm)

chicken_add_benchmark(slatex
    SOURCE slatex.scm)
set_tests_properties(benchmark-slatex PROPERTIES
    WORKING_DIRECTORY ${chicken-tests_SOURCE_DIR})

chicken_add_benchmark(sgrep compiler.scm
    SOURCE sgrep.scm)

chicken_add_benchmark(fft-boxed 2000 11
    SOURCE fft.scm)

chicken_add_benchmark(fft-unboxed 2000 11
    SOURCE fft.scm SUFFIX 2
    OPTIONS -feature unboxed)

chicken_add_benchmark(thread-list 1000000
    SOURCE thread-list.scm
    OPTIONS -fixnum-arithmetic)

chicken_add_benchmark(gobble 1000000000
    SOURCE gobble.scm)

add_chicken_interpreted_test(benchmark-irregex test-irregex.scm)
set_tests_properties(benchmark-irregex-i PROPERTIES
    WORKING_DIRECTORY ${chicken-tests_SOURCE_DIR}
    LABELS "benchmark")
