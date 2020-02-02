#!/bin/bash

set -e

g++ Gen1.cpp Nugget.cpp Chan_Dst2.cpp -o Gen1_to_Dst2
g++ Gen2.cpp Nugget.cpp Chan_Dst2.cpp  -o Gen2_to_Dst2
