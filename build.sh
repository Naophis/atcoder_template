#!/bin/bash

CURRENT=$(cd $(dirname $0);pwd)
cd $CURRENT

if [ $# != 1 ]; then
    echo "引数で数字を指定してください"
    exit 1;
fi

if [ ! -e ${ACLib_dir} ]; then
    echo "atcoder-lib(ACL)がインストールされていません"
    exit 1
fi

if [ ! -e ./main_${1}.cpp ]; then
    echo "対象ファイルがありません main_${1}.cpp "
    exit 1
fi

g++ main_${1}.cpp -std=c++14 -I ${ACLib_dir} -o exe_${1} 

exit 0
