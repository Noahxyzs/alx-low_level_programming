#!/bin/bash
wget -O /tmp/encode.so https://github.com/Noahxyzs/alx-low_level_programming/raw/master/0x18-dynamic_libraries/encode.so
export LD_PRELOAD=/tmp/encode.so
