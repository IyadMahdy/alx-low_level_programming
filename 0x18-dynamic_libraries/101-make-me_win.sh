#!/bin/bash
wget --user iyad-m-mahroud --password mahro03ma https://github.com/iyad-m-mahrous/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD = win.so:$LD_PRELOAD
