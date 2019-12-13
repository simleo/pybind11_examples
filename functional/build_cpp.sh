#!/bin/bash

set -euo pipefail

g++ -fPIC -c -Wall func.cpp
g++ -shared func.o -o libfunc.so
gcc -Wl,-rpath ${PWD} -o example example.cpp -L${PWD} -Wall -lfunc -lstdc++
