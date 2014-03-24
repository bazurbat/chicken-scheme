# tests

set(CHICKEN_EXECUTABLE ${chicken_BINARY_DIR}/chicken)
set(CHICKEN_OPTIONS -ignore-repository
    -types ${chicken_SOURCE_DIR}/types.db
    -include-path ${chicken_SOURCE_DIR})

# compiler tests
add_chicken_executable(compiler-tests compiler-tests.scm)

add_test(Compiler compiler-tests)

# compiler inlining tests
add_chicken_executable(inlining-tests inlining-tests.scm
    OPTIONS -optimize-level 3)

add_test(CompilerInlining inlining-tests)

# scrutiny tests
add_chicken_executable(typematch-tests typematch-tests.scm
    OPTIONS -specialize -no-warnings)
# add_chicken_executable(scrutiny-tests scrutiny-tests.scm
#     OPTIONS -scrutinize -analyze-only -verbose)
# add_chicken_executable(scrutiny-tests-2 scrutiny-tests-2.scm
#     OPTIONS -scrutinize -analyze-only -verbose)
add_chicken_executable(scrutiny-tests-3 scrutiny-tests-3.scm
    OPTIONS -specialize -block)
# add_chicken_executable(scrutiny-tests-strict scrutiny-tests-strict.scm
#     OPTIONS -sstrict-types -specialize)

# specialization tests
add_chicken_executable(specialization-test-1 specialization-test-1.scm
    OPTIONS -emit-type-file foo.types -specialize -debug ox
    EMIT foo)
add_chicken_executable(specialization-test-2 specialization-test-2.scm
    OPTIONS -types foo.types -specialize -debug ox
    DEPENDS foo.import.scm)

# specialization benchmark
add_chicken_executable(fft fft.scm
    OPTIONS -optimize-level 2 -debug-level 0 -local -disable-interrupts
    -block)
add_chicken_executable(fft-specialized fft.scm
    SUFFIX -specialized
    OPTIONS -optimize-level 2 -debug-level 0 -local -disable-interrupts
    -block -specialize -debug x)

# callback tests
add_chicken_executable(callback-tests callback-tests.scm)

# runtime tests
add_chicken_executable(apply-test apply-test.scm)
add_chicken_executable(test-gc-hooks test-gc-hooks.scm)

# library tests
add_chicken_executable(library-tests library-tests.scm
    OPTIONS -specialize)
add_chicken_executable(records-and-setters-test records-and-setters-test.scm)

# reader tests
# add_chicken_executable(reader-tests reader-tests.scm)

# dynamic-wind tests
add_chicken_executable(dwindtst dwindtst.scm)

# lolevel tests
add_chicken_executable(lolevel-tests lolevel-tests.scm)

# syntax tests (compiled)
add_chicken_executable(syntax-tests syntax-tests.scm)
add_chicken_executable(syntax-tests-2 syntax-tests-2.scm)

# reexport tests
add_chicken_executable(reexport-tests reexport-tests.scm)
# add_chicken_executable(reexport-m2 reexport-m2.scm)
# add_chicken_executable(reexport-tests-2 reexport-tests-2.scm)
