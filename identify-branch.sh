#!/bin/sh
#
# identify-branch.sh - check for .git directory and obtain branchname (unless "master")
#
# usage: identify-branch SOURCEDIR

if test -d "$1/.git"; then
    branchname=`GIT_DIR="$1/.git" git branch --no-color 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/\1/'`
    case ${branchname} in
	"") ;;
	"master") ;;
	*) echo "${branchname}";;
    esac
fi
