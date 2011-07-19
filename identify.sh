#!/bin/sh
#
# identify.sh - check for .git directory and obtain checked out revision and branch
#
# usage: identify.sh SOURCEDIR


# make sure file exists anyway, since branchname is a special case
if test \! -e "buildbranch"; then
    echo >buildid
fi

rev0=`cat buildid || echo ""`
branchname0=`cat buildbranch || echo ""`
tag0=`cat buildtag || echo ""`
buildtime=`date +%Y-%m-%d`
host=`hostname`
usys=`uname`

if test -d "$1/.git"; then
    rev=`GIT_DIR="$1/.git" git rev-parse --short HEAD 2>/dev/null`
    branchname=`GIT_DIR="$1/.git" git branch --no-color 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/\1/'`
    tag="compiled ${buildtime} on ${host} (${usys})"

    case ${branchname} in
	"") branchname="";;
	"master") branchname="";;
    esac
    if test "${rev0}" \!= "${rev}"; then
	echo ${rev} >buildid
    fi
    if test "${branchname0}" \!= "${branchname}"; then
	echo ${branchname} >buildbranch
    fi
    if test "${tag0}" \!= "${tag}"; then
	echo ${tag} >buildtag
    fi
fi
