#!/bin/bash
while true
do
    dmesg -c
    sleep 1
done
#该脚本每隔一秒打印一次终端信息，且不重复打印，推荐后台运行
#./demo.sh
