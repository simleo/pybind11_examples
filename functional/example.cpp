#include <iostream>
#include "func.hpp"


int square(int i) {
    return i * i;
}


int main() {
    int rval = func_arg(square);
    std::cout << rval << "\n";
}
