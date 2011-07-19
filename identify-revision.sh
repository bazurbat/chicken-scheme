#!/bin/sh
#
# identify-revision.sh - check for .git directory and obtain checked out revision
#
# usage: identify-revision.sh SOURCEDIR

if test -d "$1/.git"; then
    GIT_DIR="$1/.git" git rev-parse --short HEAD 2>/dev/null
fi
