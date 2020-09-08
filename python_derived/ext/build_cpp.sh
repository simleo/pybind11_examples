#!/bin/bash

set -euo pipefail

g++ -fPIC -c -Wall pet.cpp
g++ -shared pet.o -o libpet.so
gcc -Wl,-rpath ${PWD} -o example example.cpp -L${PWD} -Wall -lpet -lstdc++
