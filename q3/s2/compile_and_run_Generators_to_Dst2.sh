#!/bin/bash

set -e

g++ Gen1.cpp Nugget.cpp Chan_Dst2.cpp -o Gen1_to_Dst2
./Gen1_to_Dst2 > Gen1.sink2.txt

g++ Gen2.cpp Nugget.cpp Chan_Dst2.cpp  -o Gen2_to_Dst2
./Gen2_to_Dst2 > Gen2.sink2.txt
