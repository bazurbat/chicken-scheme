#!/bin/sh
#
# usage: build-boot-chicken.sh CHICKEN PLATFORM [ARCH]


CHICKEN="$1"
PLATFORM="$2"
ARCH="$3"
MAKE=make
EXE=
VERSION=`cat buildversion`
FULLSTATIC=-static

if test -z "${PLATFORM}${CHICKEN}"; then
    echo "usage: build-boot-chicken.sh CHICKEN PLATFORM [ARCH]"
    exit 1
fi

case `uname -s` in
    *bsd*|*BSD*)
	MAKE=gmake;;
    MINGW*)
	EXE=.exe;;
    Darwin)
	FULLSTATIC=;;
esac

BOOTCHICKEN=chicken-boot-${VERSION}-${PLATFORM}-${ARCH}${EXE}

$MAKE -f Makefile.${PLATFORM} \
  PLATFORM=${PLATFORM} ARCH=${ARCH} PREFIX=/nowhere STATICBUILD=1 \
  PROGRAM_SUFFIX=-boot-1 CHICKEN=${CHICKEN} DEBUGBUILD=1 \
  LINKER_OPTIONS=${FULLSTATIC} \
  confclean clean chicken-boot-1${EXE}
touch *.scm
$MAKE -f Makefile.${PLATFORM} \
  PLATFORM=${PLATFORM} ARCH=${ARCH} PREFIX=/nowhere STATICBUILD=1 \
  PROGRAM_SUFFIX=-boot-2 CHICKEN=./chicken-boot-1${EXE} \
  LINKER_OPTIONS=${FULLSTATIC} \
  confclean chicken-boot-2${EXE}
$MAKE -f Makefile.${PLATFORM} PLATFORM=${PLATFORM} confclean
rm -f chicken-boot-1${EXE}

strip chicken-boot-2${EXE}
mv chicken-boot-2${EXE} ${BOOTCHICKEN}
bzip2 ${BOOTCHICKEN}
