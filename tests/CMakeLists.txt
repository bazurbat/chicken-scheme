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

# Helper script for stripping absolute paths and converting CRLFs
set(CHICKEN_RUN_TRIM ${CHICKEN_TMP_DIR}/ChickenTrim.cmake)
set(CMAKE_CONFIGURABLE_FILE_CONTENT
"foreach(f \${FILES})
    file(READ \${f} input_data)
    if(PATTERN)
        string(REGEX REPLACE \"\${PATTERN}\" \"\" output_data \"\${input_data}\")
    else()
        set(output_data \"\${input_data}\")
    endif()
    file(WRITE \${f}.t \"\${output_data}\")
endforeach()")
configure_file(${CMAKE_ROOT}/Modules/CMakeConfigurableFile.in
    ${CHICKEN_RUN_TRIM} @ONLY)

set(CHICKEN_RUN_FAIL ${CHICKEN_TMP_DIR}/ChickenRunFail.cmake)
set(CMAKE_CONFIGURABLE_FILE_CONTENT
"execute_process(COMMAND \${COMMAND}
    RESULT_VARIABLE RESULT)
if(NOT RESULT)
    message(FATAL_ERROR \"Test failed: \${RESULT}\")
endif()")
configure_file(${CMAKE_ROOT}/Modules/CMakeConfigurableFile.in
    ${CHICKEN_RUN_FAIL} @ONLY)

if(WIN32)
    add_custom_target(copy_libchicken
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            $<TARGET_FILE:libchicken>
            ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIGURATION>/$<TARGET_FILE_NAME:libchicken>
        DEPENDS libchicken VERBATIM)
    add_dependencies(tests copy_libchicken)
endif()

function(add_chicken_test name)
    cmake_parse_arguments(test "" "PATH" "" ${ARGN})
    if(test_PATH)
        set(CHICKEN_RUN_PATH ${test_PATH})
    endif()

    set(CHICKEN_COMMAND ${test_UNPARSED_ARGUMENTS})
    set(ERROR_FILE ${name}.out)
    if(NOT test_WORKING_DIRECTORY)
        set(dir ${CMAKE_CURRENT_BINARY_DIR})
    endif()
    add_test(NAME ${name} COMMAND ${CMAKE_COMMAND}
        "-DCHICKEN_COMMAND=${CHICKEN_COMMAND}"
        "-DCHICKEN_REPOSITORY=${CHICKEN_REPOSITORY}/$<CONFIGURATION>"
        "-DPATH=${CHICKEN_RUN_PATH}"
        "-DERROR_FILE=${ERROR_FILE}"
        -P ${CHICKEN_RUN}
        WORKING_DIRECTORY ${dir})
endfunction()

function(add_interpreted_test name)
    cmake_parse_arguments(test "" "SCRIPT;WORKING_DIRECTORY" "" ${ARGN})

    set(command $<TARGET_FILE:csi> -bnq -R chicken-syntax
        -I ${chicken_BINARY_DIR}
        -I ${CMAKE_CURRENT_SOURCE_DIR}
        -I ${CMAKE_CURRENT_BINARY_DIR})

    if(test_SCRIPT)
        set(args -s ${CMAKE_CURRENT_SOURCE_DIR}/${test_SCRIPT})
    endif()
    
    add_chicken_test(${name}-i ${command} ${test_UNPARSED_ARGUMENTS} ${args})
endfunction()

function(add_compiled_test name)
    cmake_parse_arguments(test "" "ARGS" "" ${ARGN})

    add_chicken_executable(${name} ${test_UNPARSED_ARGUMENTS})

    add_chicken_test(${name} $<TARGET_FILE:${name}> ${test_ARGS})

    add_dependencies(tests ${name})
endfunction()

set(used_FILES
    compiler.scm
    ec-tests.scm
    ec.scm
    import-library-test1.scm
    meta-syntax-test.scm
    r4rstest.scm
    re-tests.txt
)

set(expected_FILES
    arithmetic-test.32.expected
    arithmetic-test.64.expected
    dwindtst.expected
    r4rstest.out
    scrutiny-2.expected
    scrutiny.expected
)
set(expected_FILES_prepared "")

file(COPY ${used_FILES} DESTINATION .)

foreach(f ${expected_FILES})
    list(APPEND expected_FILES_prepared ${f}.t)
    add_custom_command(OUTPUT ${f}
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${CMAKE_CURRENT_SOURCE_DIR}/${f}
            ${CMAKE_CURRENT_BINARY_DIR}/${f}
        DEPENDS ${f} VERBATIM)
    add_custom_command(OUTPUT ${f}.t
        COMMAND ${CMAKE_COMMAND} "-DFILES=${f}" -P ${CHICKEN_RUN_TRIM}
        DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/${f} VERBATIM)
endforeach()

add_custom_target(prepare_expected_files
    DEPENDS ${expected_FILES_prepared})

add_dependencies(tests prepare_expected_files)

# version tests

add_interpreted_test(version SCRIPT version-tests.scm)

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

add_custom_command(
    OUTPUT scrutiny.out.t scrutiny-2.out.t
    COMMAND ${CMAKE_COMMAND}
        "-DFILES=scrutiny.out;scrutiny-2.out"
        "-DPATTERN=${CMAKE_CURRENT_SOURCE_DIR}/"
        -P ${CHICKEN_RUN_TRIM}
    DEPENDS scrutiny-tests-build VERBATIM)

add_custom_target(scrutiny-tests-prepare
    DEPENDS scrutiny.out.t scrutiny-2.out.t)
add_dependencies(tests scrutiny-tests-prepare)

add_test(NAME scrutiny COMMAND ${CMAKE_COMMAND} -E compare_files
    scrutiny.out.t scrutiny.expected.t)
add_test(NAME scrutiny-2 COMMAND ${CMAKE_COMMAND} -E compare_files
    scrutiny-2.out.t scrutiny-2.expected.t)

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

add_dependencies(tests fft-normal fft-specialized)

add_test(NAME fft-normal COMMAND fft-normal 1000 7)
add_test(NAME fft-specialized COMMAND fft-specialized 1000 7)

# callback tests

# fails to compile with: C2375
if(NOT MSVC)
    add_compiled_test(callback callback-tests.scm)

    add_test(NAME callback-2
        COMMAND ${CMAKE_COMMAND}
            "-DCOMMAND=$<TARGET_FILE:callback>;twice"
            -P ${CHICKEN_RUN_FAIL})
endif()

# runtime tests

add_compiled_test(apply apply-test.scm)

add_interpreted_test(apply SCRIPT apply-test.scm)

add_compiled_test(gc-hooks test-gc-hooks.scm)

# library tests

add_compiled_test(library library-tests.scm
    OPTIONS -specialize)

add_interpreted_test(library SCRIPT library-tests.scm)

add_compiled_test(records-and-setters records-and-setters-test.scm)

add_interpreted_test(records-and-setters SCRIPT records-and-setters-test.scm)

# reader tests

add_interpreted_test(reader SCRIPT reader-tests.scm)

# dynamic-wind tests

add_interpreted_test(dynamic-wind SCRIPT dwindtst.scm)

add_compiled_test(dynamic-wind dwindtst.scm)

add_test(NAME dynamic-wind-out COMMAND ${CMAKE_COMMAND} -E compare_files
    dynamic-wind.out dwindtst.expected.t)
set_tests_properties(dynamic-wind-out PROPERTIES DEPENDS dynamic-wind)

add_test(NAME dynamic-wind-i-out COMMAND ${CMAKE_COMMAND} -E compare_files
    dynamic-wind-i.out dwindtst.expected.t)
set_tests_properties(dynamic-wind-i-out PROPERTIES DEPENDS dynamic-wind-i)

# takes very long time
# add_interpreted_test(dynamic-wind-feeley SCRIPT feeley-dynwind.scm)

# lolevel tests

add_interpreted_test(lolevel SCRIPT lolevel-tests.scm)

add_compiled_test(lolevel lolevel-tests.scm)

# arithmetic tests

add_interpreted_test(arithmetic SCRIPT arithmetic-test.scm -D tests)

# pretty printer tests

add_interpreted_test(pretty-printer SCRIPT pp-test.scm)

# evaluation environment tests

add_interpreted_test(environment SCRIPT environment-tests.scm)

# syntax tests

add_interpreted_test(syntax SCRIPT syntax-tests.scm)

add_compiled_test(syntax syntax-tests.scm)

add_compiled_test(syntax2 syntax-tests-2.scm)

# meta syntax tests

add_compiled_test(meta-syntax meta-syntax-test.scm
    EMIT_IMPORTS meta-syntax-test)

add_interpreted_test(meta-syntax meta-syntax-test.scm
    -e "(import meta-syntax-test)"
    -e "(assert (equal? '((1)) (bar 1 2)))"
    -e "(assert (equal? '(list 1 2 3) (listify)))"
    -e "(import meta-syntax-test-usage)"
    -e "(assert (equal? '(1) (foo-user)))")

add_interpreted_test(meta-syntax-2
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

add_dependencies(tests reexport-m1 reexport-m3 reexport-m4 reexport-m5
    reexport-m6)

add_interpreted_test(reexport-m2 SCRIPT reexport-m2.scm)

add_compiled_test(reexport-m2 reexport-m2.scm
    DEPENDS reexport-m1)

add_interpreted_test(reexport SCRIPT reexport-tests.scm)

add_compiled_test(reexport reexport-tests.scm)

add_compiled_test(reexport-2 reexport-tests-2.scm
    DEPENDS reexport-m4 reexport-m6)

# functor tests

add_chicken_module(square-functor square-functor.scm)

add_compiled_test(functor functor-tests.scm)
add_interpreted_test(functor SCRIPT functor-tests.scm)

add_compiled_test(functor-simple simple-functors-test.scm)
add_interpreted_test(functor-simple SCRIPT simple-functors-test.scm)

add_compiled_test(functor-use-square use-square-functor.scm
    DEPENDS square-functor)
add_interpreted_test(functor-use-square SCRIPT use-square-functor.scm)

# compiler syntax tests

add_compiled_test(compiler-syntax compiler-syntax-tests.scm)

# import tests

add_interpreted_test(import SCRIPT import-tests.scm)

# import library tests
# TODO: handle running with or without compiled import library

add_chicken_module(import-library-test1 import-library-test1.scm
    EMIT_IMPORTS import-library-test1-m)
add_dependencies(tests import-library-test1)

add_interpreted_test(import-library SCRIPT import-library-test2.scm)

add_compiled_test(import-library import-library-test2.scm)

# optionals tests

add_interpreted_test(optional SCRIPT test-optional.scm)
add_compiled_test(optional test-optional.scm)

# syntax tests (matchable)

add_interpreted_test(matchable SCRIPT matchable.scm)

# syntax tests (loopy-loop)

add_interpreted_test(loopy SCRIPT loopy-test.scm)

# r4rs tests

add_interpreted_test(r4rs SCRIPT r4rstest.scm -i
    -e "(set! ##sys#procedure->string (constantly \"#<procedure>\"))")

add_test(NAME r4rs-out COMMAND ${CMAKE_COMMAND} -E compare_files
    r4rs-i.out r4rstest.out.t)
set_tests_properties(r4rs-out PROPERTIES DEPENDS r4rs)

# r5rs pitfalls

add_interpreted_test(r5rs SCRIPT r5rs_pitfalls.scm -i)

# r7rs tests

add_interpreted_test(r7rs SCRIPT r7rs-tests.scm -i)

# module tests

add_interpreted_test(module1 SCRIPT module-tests.scm)
add_interpreted_test(module2 SCRIPT module-tests-2.scm)

add_compiled_test(module module-tests-compiled.scm)

# module tests (chained)

add_chicken_module(chained-modules test-chained-modules.scm
    EMIT_IMPORTS m3)
add_dependencies(tests chained-modules)

add_interpreted_test(modules-chained SCRIPT test-chained-modules.scm)

add_interpreted_test(modules-chained-2
    $<TARGET_FILE:chained-modules>)

add_interpreted_test(modules-chained-3
    $<TARGET_FILE:chained-modules>
    -e "(import m3) (s3)")

# module tests (ec)

add_chicken_module(ec-mod ec.scm EMIT_IMPORTS ec)
add_dependencies(tests ec-mod)

add_interpreted_test(ec ec.scm ec-tests.scm)

add_interpreted_test(ec-2 $<TARGET_FILE:ec-mod> ec-tests.scm)

# add_compiled_test(ec ec-tests.scm
#     DEPENDS ec-mod)

# hash-table tests

add_interpreted_test(hash-table SCRIPT hash-table-tests.scm)

# port tests

add_interpreted_test(port SCRIPT port-tests.scm)

# fixnum tests

add_compiled_test(fixnum fixnum-tests.scm)

# string->number tests

add_compiled_test(numbers-string-conversion numbers-string-conversion-tests.scm)

# srfi-4 tests

add_interpreted_test(srfi-4 SCRIPT srfi-4-tests.scm)

# srfi-13 tests

add_interpreted_test(srfi-13 SCRIPT srfi-13-tests.scm)

# srfi-14 tests

add_compiled_test(srfi-14 srfi-14-tests.scm)

# condition tests

add_interpreted_test(condition SCRIPT condition-tests.scm)

# srfi-18 tests

add_interpreted_test(srfi-18-simple-thread SCRIPT simple-thread-test.scm)

add_interpreted_test(srfi-18-mutex SCRIPT mutex-test.scm)

# tries to use sys/time.h unconditionally
if(NOT MSVC)
    add_compiled_test(srfi-18-signal srfi-18-signal-test.scm)
endif()

# data-structures tests

add_interpreted_test(data-structures SCRIPT data-structures-tests.scm)

# path tests

add_interpreted_test(path SCRIPT path-tests.scm)

# srfi-45 tests

add_interpreted_test(srfi-45 SCRIPT srfi-45-tests.scm)

# posix tests

add_custom_command(OUTPUT tmpdir/.dotfile
    COMMAND ${CMAKE_COMMAND} -E touch tmpdir/.dotfile
    VERBATIM)

if(UNIX)
    add_custom_command(OUTPUT tmpdir/symlink
        COMMAND ${CMAKE_COMMAND} -E create_symlink /usr tmpdir/symlink
        VERBATIM)
    add_custom_target(prepare-posix-tests
        DEPENDS tmpdir/.dotfile tmpdir/symlink)
else()
    add_custom_target(prepare-posix-tests
        DEPENDS tmpdir/.dotfile)
endif()

add_dependencies(tests prepare-posix-tests)

add_compiled_test(posix posix-tests.scm ARGS $<TARGET_FILE:csi>)

add_interpreted_test(posix
    -R posix -e "(delete-directory \"tmpdir\" #t)")

# signal tests

# causes debugger hook
if(NOT MSVC)
    add_compiled_test(signal signal-tests.scm)
endif()

# regular expression tests

add_interpreted_test(irregex SCRIPT test-irregex.scm)

add_interpreted_test(glob SCRIPT test-glob.scm)

# compiler/nursery stress test

foreach(s 100000 120000 200000 250000 300000 350000 400000 450000 500000)
    add_chicken_test(compiler-nursery-stress-${s} $<TARGET_FILE:chicken>
        -ignore-repository ${chicken_SOURCE_DIR}/utils.scm -:s${s}
        -include-path ${chicken_SOURCE_DIR})
endforeach()

# symbol-GC tests

add_compiled_test(symbol-gc symbolgc-tests.scm ARGS "-:w")

# finalizer tests

add_interpreted_test(finalizers SCRIPT test-finalizers.scm)

add_compiled_test(finalizers test-finalizers.scm)

add_compiled_test(finalizers-2 test-finalizers-2.scm)

add_compiled_test(finalizer-error finalizer-error-test.scm ARGS "-:hg101")

# locative stress test

add_compiled_test(locative-stress locative-stress-test.scm)

# syntax rules stress test

add_interpreted_test(syntax-rules SCRIPT syntax-rule-stress-test.scm)

# embedding tests

add_compiled_test(embedded1 EMBEDDED C_SOURCES embedded1.c)

add_compiled_test(embedded2 EMBEDDED embedded2.scm)

add_compiled_test(embedded3 EMBEDDED embedded4.scm C_SOURCES embedded3.c)

# private repository test

# compilation failes with multiple errors
if(NOT MSVC)

add_chicken_executable(private-repository private-repository-test.scm
    DEFINITIONS C_PRIVATE_REPOSITORY)
add_dependencies(tests private-repository)

add_chicken_test(private-repository $<TARGET_FILE:private-repository>
    ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIGURATION>)

add_chicken_test(private-repository-path $<TARGET_FILE:private-repository>
    ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIGURATION>
    PATH ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIGURATION>)

endif()

# reinstall tests

# NOTE: these are pretty nasty

# add_chicken_test(reinstall-uninstall $<TARGET_FILE:chicken-uninstall>
#     -force reverser)
#
# add_chicken_test(reinstall-install $<TARGET_FILE:chicken-install>
#     -t local -l ${CMAKE_CURRENT_BINARY_DIR} -csi $<TARGET_FILE:csi>
#     reverser:1.0)

# deployment tests

# NOTE: these are too
