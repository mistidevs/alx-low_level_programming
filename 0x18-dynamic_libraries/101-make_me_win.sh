#!/bin/bash
wget -P /tmp https://github.com/mistidevs/alx-low_level_programming/raw/master/0x18-dynamic_libraries/override.so
export LD_PRELOAD=/tmp/override.so
