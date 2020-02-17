#!/bin/bash

set -e

g++ ProxyA_Impl1.cpp ProxyA_Impl2.cpp Stub1.cpp ProxyA_factory.cpp -o Stub1
g++ ProxyA_Impl1.cpp ProxyA_Impl2.cpp Stub2.cpp ProxyA_factory.cpp -o Stub2

./Stub1 Impl1 > Stub1.Impl1actual.txt
diff Stub1.Impl1actual.txt Stub1.Impl1.txt

./Stub1 Impl2 > Stub1.Impl2actual.txt
diff Stub1.Impl2actual.txt Stub1.Impl2.txt

./Stub2 Impl1 > Stub2.Impl1actual.txt
diff Stub2.Impl1actual.txt Stub2.Impl1.txt

./Stub2 Impl2 > Stub2.Impl2actual.txt
diff Stub2.Impl2actual.txt Stub2.Impl2.txt