#!/bin/bash
wget -P /tmp https://github.com/johngaitho05/alx-low_level_programming/raw/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.so
