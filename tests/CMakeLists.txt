project(chicken-tests C)

set(CHICKEN_EXECUTABLE chicken)
set(CHICKEN_OPTIONS -ignore-repository
    -types ${chicken_SOURCE_DIR}/types.db
    -include-path ${chicken_SOURCE_DIR})
set(CHICKEN_INCLUDE_DIRS ${chicken_SOURCE_DIR})

set(INTERPRET csi -n -R chicken-syntax
    -I ${chicken_BINARY_DIR} -I ${CMAKE_CURRENT_SOURCE_DIR})

function(add_interpreted_test name target)
    add_test(NAME ${name}-i COMMAND
        ${INTERPRET} -s ${CMAKE_CURRENT_SOURCE_DIR}/${target} ${ARGN})
endfunction()

function(add_compiled_test name)
    add_chicken_executable(${name} ${ARGN})
    add_test(NAME ${name} COMMAND ${name})
endfunction()

file(COPY compiler.scm re-tests.txt
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

add_compiled_test(scrutiny-tests-3 scrutiny-tests-3.scm
    OPTIONS -specialize -block)

add_compiled_test(scrutiny-tests-strict scrutiny-tests-strict.scm
    OPTIONS -strict-types -specialize)

# specialization tests

add_compiled_test(specialization-test-1 specialization-test-1.scm
    EMIT foo EMIT_TYPES
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

add_test(NAME fft-normal COMMAND fft-normal 1000 7)
add_test(NAME fft-specialized COMMAND fft-specialized 1000 7)

# callback tests

add_chicken_executable(callback-tests callback-tests.scm)

add_test(NAME callback COMMAND callback-tests)

# runtime tests

add_chicken_executable(apply-test apply-test.scm)
add_chicken_executable(test-gc-hooks test-gc-hooks.scm)

add_test(NAME apply
    COMMAND ${INTERPRET} -s ${CMAKE_CURRENT_SOURCE_DIR}/apply-test.scm)
add_test(NAME apply-compiled COMMAND apply-test)
add_test(NAME gc-hooks COMMAND test-gc-hooks)

# library tests

add_chicken_executable(library-tests library-tests.scm
    OPTIONS -specialize)
add_test(NAME library COMMAND
    ${INTERPRET} -s ${CMAKE_CURRENT_SOURCE_DIR}/library-tests.scm)
add_test(NAME library-compiled COMMAND library-tests)

add_chicken_executable(records-and-setters-test records-and-setters-test.scm)
add_test(NAME records-and-setters COMMAND
    ${INTERPRET} -s ${CMAKE_CURRENT_SOURCE_DIR}/records-and-setters-test.scm)
add_test(NAME records-and-setters-compiled COMMAND records-and-setters-test)

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

# syntax tests (compiled)

add_compiled_test(syntax syntax-tests.scm)
add_compiled_test(syntax2 syntax-tests-2.scm)

# reexport tests

add_interpreted_test(reexport reexport-tests.scm -bnq)
add_compiled_test(reexport reexport-tests.scm)

# optionals tests

add_interpreted_test(optional test-optional.scm)
add_compiled_test(optional test-optional.scm)

# syntax tests (matchable)

add_interpreted_test(matchable matchable.scm)

# syntax tests (loopy-loop)

add_interpreted_test(loopy loopy-test.scm)

# r7rs tests

add_interpreted_test(r7rs r7rs-tests.scm -i)

# module tests

add_interpreted_test(module1 module-tests.scm)
add_interpreted_test(module2 module-tests-2.scm)

add_compiled_test(module module-tests-compiled.scm)

# module tests (ec)
# add_interpreted_test(ec ec-tests.scm -bnq)

# ....
add_interpreted_test(hash-table hash-table-tests.scm)

add_interpreted_test(port port-tests.scm)

add_compiled_test(fixnum fixnum-tests.scm)

add_compiled_test(numbers-string-conversion numbers-string-conversion-tests.scm)

add_interpreted_test(srfi-4 srfi-4-tests.scm)

add_interpreted_test(srfi-13 srfi-13-tests.scm)

add_compiled_test(srfi-14 srfi-14-tests.scm)

add_interpreted_test(condition condition-tests.scm)

add_interpreted_test(srfi-18-simple-thread simple-thread-test.scm)
add_interpreted_test(srfi-18-mutex mutex-test.scm)
add_compiled_test(srfi-18-signal srfi-18-signal-test.scm)

add_interpreted_test(data-structures data-structures-tests.scm)

add_interpreted_test(path path-tests.scm -bnq)

add_interpreted_test(srfi-45 srfi-45-tests.scm)

add_compiled_test(posix posix-tests.scm)

add_compiled_test(signal signal-tests.scm)

add_interpreted_test(irregex test-irregex.scm)

add_interpreted_test(glob test-glob.scm)

add_interpreted_test(finalizers test-finalizers.scm)
add_compiled_test(finalizers test-finalizers.scm)
add_compiled_test(finalizers2 test-finalizers-2.scm)
add_chicken_executable(finalizer-error finalizer-error-test.scm)
add_test(NAME finalizer-error COMMAND finalizer-error -:hg101)

add_compiled_test(locative-stress locative-stress-test.scm)

add_interpreted_test(syntax-rules syntax-rule-stress-test.scm)

add_compiled_test(embedded1 EMBEDDED C_SOURCES embedded1.c)
add_compiled_test(embedded2 EMBEDDED embedded2.scm)
add_compiled_test(embedded3 EMBEDDED embedded4.scm C_SOURCES embedded3.c)
