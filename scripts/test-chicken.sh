#!/bin/sh
#
# test-chicken.sh

set -e

latest="4.3.0"
version=
treedir=
download=
platform=

function usage () {
    echo "usage: test-chicken.sh [-h] [-t TREEDIR] [-d] [VERSION]"
}

while "$1"; do
    case "$1" in
	-t) treedir="$2"
	    shift
	    shift;;
	-d) download=1
	    shift;;
	-h|-help|--help) 
	    usage
	    exit 0;;
	*) version="$1";;
    esac
done

if test -z "$download"; then
    git clone http://chicken.wiki.br/git/chicken-core.git
    cd chicken-core
    if test -n "$version"; then
	git checkout "$version"
    fi
else
    if test -z "$version"; then
	usage
	exit 1
    else
	if test -z "$version"; then
	    version=$latest
	fi
	wget "http://chicken.wiki.br/releases/${version}/chicken-${version}.tar.gz"
	tar xfz "chicken-${version}.tar.gz"
	cd "chicken-${version}"
    fi
fi

if test -d "c:/"; then
    platform=mingw32-msys
else
    case `uname -s` in
	*bsd*|*BSD*)
	    make="gmake"
	    platform="bsd";;
	darwin|Darwin)
	    platform="macosx";;
	*) make="make"
	    platform="linux";;	# guess
esac

if test -z "$download"; then
    $make PLATFORM=$platform PREFIX=`pwd` bootstrap
fi

$make PLATFORM=$platform PREFIX=`pwd` install check
touch *.scm
$make PLATFORM=$platform PREFIX=`pwd` CHICKEN=bin/chicken clean all
bin/csi -s scripts/makedist.scm --make=$make --platform=$platform CHICKEN=bin/chicken
buildversion=`cat buildversion`
tar xfz chicken-${buildversion}.tar.gz
cd chicken-${buildversion}
$make PLATFORM=$platform PREFIX=`pwd` install check

if test -z "$treedir"; then
    svn co http://chicken.kitten-technologies.co.uk/svn/release/4
    treedir=4
fi

bin/csi -s scripts/mini-salmonella.scm -t "$treedir" `pwd`
