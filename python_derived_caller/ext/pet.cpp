#include <string>
#include <iostream>
#include "pet.hpp"

Pet::Pet() : name() {}

Pet::Pet(const std::string &name) : name(name) {}

std::string Pet::getName() {
    return name;
}

std::string Pet::getNameCaller() {
    return getName();
}
