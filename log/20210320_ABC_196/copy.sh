#!/bin/bash

CURRENT=$(cd $(dirname $0);pwd)
cd $CURRENT

if [ $# != 1 ]; then
    echo "引数で数字を指定してください"
    exit 1;
fi
mkdir -p log/$1

cp $CURRENT/*.cpp $CURRENT/log/$1/
cp $CURRENT/CMakeLists.txt $CURRENT/log/$1/
cp $CURRENT/*.sh $CURRENT/log/$1/
exit 0
