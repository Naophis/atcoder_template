#!/bin/bash

if [ $# != 1 ]; then
    echo "引数で数字を指定してください"
    exit 1;
fi

if [ ! -e ${ACLib_dir} ]; then
    echo "atcoder-lib(ACL)がインストールされていません"
fi

CURRENT=$(cd $(dirname $0);pwd)
cd $CURRENT

g++ no${1}.cpp -std=c++14 -I ${ACLib_dir} -o no${1} 

exit 0
