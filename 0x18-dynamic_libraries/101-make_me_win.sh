#!/bin/bash
wget -P /tmp/ https://github.com/edgaryungo/alx-low_level_programming/tree/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
