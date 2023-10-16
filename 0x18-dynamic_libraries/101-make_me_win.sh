#!/bin/bash
wget -P /home https://github.com/Youness91-tech/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/home/libgiga.so
