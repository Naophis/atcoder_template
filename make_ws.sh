#!/bin/bash

CURRENT=$(cd $(dirname $0);pwd)
cd $CURRENT

file_cnt=`ls -al | grep cpp | wc -l`

if [ ${file_cnt} -ge 3 ]; then
    echo "workspace is exists"
    exit 1
else
    echo "make workspace ..."
    cp template/temprate.cpp no1.cpp
    cp template/temprate.cpp no2.cpp
    cp template/temprate.cpp no3.cpp
    cp template/temprate.cpp no4.cpp
    cp template/temprate.cpp no5.cpp
    cp template/temprate.cpp no6.cpp
    echo "...end"
    exit 0
fi