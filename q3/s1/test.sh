#!/bin/bash

set -e

g++ p1.cpp -o p1
./p1 > p1.out.txt
diff p1.out.txt p1.ref.txt

g++ p2.cpp -o p2
./p2 > p2.out.txt
diff p2.out.txt p2.ref.txt                                                                                                                                                                                                                                            .txt
