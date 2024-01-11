#!/bin/sh

if [ $# -lt 2 ]; then
  echo 1>&2 "$0: not enough arguments"
  echo 1>&2 "Usage: $0 path/to/sourcefile.c func_name"
  exit 2
elif [ $# -gt 2 ]; then
  echo 1>&2 "$0: too many arguments"
  exit 2
fi

PYTHON=python3
SOURCEFILE=$1
FUNCNAME=$2
M2CFILE=m2cfiles/$FUNCNAME.c
ASMFILE=$(find . -type f -name "*$FUNCNAME.s")

# Support python venv's if one is installed.
PYTHON_VENV=.venv/bin/python3
if test -f $PYTHON_VENV; then
  PYTHON=$PYTHON_VENV
fi

echo "Generating ctx.c from $SOURCEFILE..."
$PYTHON ./tools/m2ctx.py $SOURCEFILE

echo "Generating $M2CFILE..."
echo '#include "../ctx.c"\n' > $M2CFILE
$PYTHON ./tools/m2c/m2c.py --target mips-ido-c --pointer-style left --context ctx.c -f $FUNCNAME $ASMFILE >> $M2CFILE
