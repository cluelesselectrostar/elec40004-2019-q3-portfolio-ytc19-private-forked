#!/bin/bash

set -e

g++ Gen1.cpp Nugget.cpp Chan_Dst1.cpp -o Gen1_to_Dst1
./Gen1_to_Dst1 > Gen1.sink1.txt

g++ Gen2.cpp Nugget.cpp Chan_Dst1.cpp  -o Gen2_to_Dst1
./Gen2_to_Dst1 > Gen2.sink1.txt
