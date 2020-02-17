#!/bin/bash

set -e

g++ Nugget.hpp
g++ test_Nugget_io_task3.cpp -o test_Nugget_io_task3

<test_Nugget_io_in.txt ./test_Nugget_io_task3 > test_Nugget_io_in_actual.txt

cat test_Nugget_io_in.txt | tr -d "\n "  > test_Nugget_io_strippedinput.txt
cat test_Nugget_io_in_actual.txt | tr -d "\n "  > test_Nugget_io_strippedoutput.txt

diff --ignore-space-change test_Nugget_io_strippedoutput.txt test_Nugget_io_strippedinput.txt

echo "Success"
