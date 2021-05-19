#!/bin/bash

CURRENT=$(cd $(dirname $0);pwd)
cd $CURRENT

mkdir -p tmp
cd tmp

cmake ..
make

exit 0
