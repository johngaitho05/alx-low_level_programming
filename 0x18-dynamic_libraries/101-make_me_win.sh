#!/bin/bash
wget -P /tmp/ https://raw.github.com/johngaitho05/alx-low_level_programming/master/0x18-dynamic_libraries/winner.so
export LD_PRELOAD =/tmp/winner.so