#!/bin/bash
wget -P .. https://raw.githubusercontent.com/CVisionk/alx-low_level_programming/main/0x18-dynamic_libraries/lib_injectcode.so
export LD_PRELOAD="$PWD/../lib_injectcode.so"
