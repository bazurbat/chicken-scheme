#!/bin/sh
# runbench.sh - run benchmarks
#
# - Note: this needs a proper shell, so it will not work with plain mingw
#   (just the compiler and the Windows shell, without MSYS)

set -e
TEST_DIR=`pwd`
export DYLD_LIBRARY_PATH=${TEST_DIR}/..
export LD_LIBRARY_PATH=${TEST_DIR}/..

CHICKEN=../chicken

if test -n "$MSYSTEM"; then
    CHICKEN="..\\chicken.exe"
    # make compiled tests use proper library on Windows
    cp ../libchicken.dll .
fi

run()
{
    /usr/bin/time -f '%E elapsed, %U user, %S system' ./a.out
}

compiler_options="-C -Wa,-W"
compile="../csc -w -compiler $CHICKEN -I.. -L.. -include-path .. -o a.out $compiler_options"

echo -n "null ... "
$compile null.scm -O5
run

echo -n "compiler ... "
$compile compiler.scm -O5
run

echo -n "slatex ... "
$compile slatex.scm -O5
mkdir -p slatexdir
rm -f slatexdir/*
run

echo -n "grep ... "
$compile sgrep.scm -O5
run

echo -n "fft/boxed ... "
$compile fft.scm -O5
run
echo -n "fft/unboxed ... "
$compile fft.scm -O5 -D unboxed
run
