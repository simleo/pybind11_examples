#!/bin/bash

set -euo pipefail

g++ -fPIC -c -Wall -I../ext1 pet_user.cpp
g++ -shared pet_user.o -o libpet_user.so
gcc -Wl,-rpath ${PWD} -Wl,-rpath ${PWD}/../ext1 -o example example.cpp -I../ext1 -L${PWD} -L${PWD}/../ext1 -Wall -lpet_user -lpet -lstdc++
