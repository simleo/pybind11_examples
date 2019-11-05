#include <string>
#include <iostream>
#include "pet.hpp"

Pet::Pet(const std::string &name) : name(name) {
    std::cout << "Pet(" + name + ")\n";
}

std::string Pet::getName() {
    return name;
}
