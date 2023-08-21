#!/bin/bash
wget -P /tmp https://github.com/johngaitho05/alx-low_level_programming/tree/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
