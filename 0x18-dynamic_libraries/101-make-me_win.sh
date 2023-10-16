#!/bin/bash
wget --user iyad-m-mahroud --password mahro03ma -P /tmp https://github.com/iyad-m-mahrous/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD = /tmp/win.so
