#!/bin/bash

CURRENT=$(cd $(dirname $0);pwd)
cd $CURRENT

file_cnt=`ls -al | grep cpp | wc -l`

if [ ${file_cnt} -ge 3 ]; then
    echo "workspace is exists"
    exit 1
else
    echo "make workspace ..."
    cp template/temprate.cpp main_a.cpp
    cp template/temprate.cpp main_b.cpp
    cp template/temprate.cpp main_c.cpp
    cp template/temprate.cpp main_d.cpp
    cp template/temprate.cpp main_e.cpp
    cp template/temprate.cpp main_f.cpp
    echo "...end"
    exit 0
fi