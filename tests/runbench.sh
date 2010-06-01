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
COMPILE_OPTIONS="-O5 -d0 -disable-interrupts -b"

if test -n "$MSYSTEM"; then
    CHICKEN="..\\chicken.exe"
    # make compiled tests use proper library on Windows
    cp ../libchicken.dll .
fi

case `uname -s` in
    *BSD*|*bsd*) timeopts="-c";;
    Darwin) timeopts="";;
    *) timeopts="-f '%E elapsed, %U user, %S system'"
esac

run()
{
    /usr/bin/time $timeopts ./a.out
}

echo

compiler_options="-C -Wa,-W"
compile="../csc -w -compiler $CHICKEN -I.. -L.. -include-path .. -o a.out $COMPILE_OPTIONS"

echo -n "null ... "
$compile null.scm -O5
run

echo -n "compilation ... "
/usr/bin/time $timeopts $compile compiler.scm

echo -n "compiler ... "
run

echo -n "slatex ... "
$compile slatex.scm
mkdir -p slatexdir
rm -f slatexdir/*
run

echo -n "grep ... "
$compile sgrep.scm
run

echo -n "fft/boxed ... "
$compile fft.scm
run
echo -n "fft/unboxed ... "
$compile fft.scm -D unboxed
run
