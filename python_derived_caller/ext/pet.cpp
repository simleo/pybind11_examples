#include <string>
#include <iostream>
#include "pet.hpp"

Pet::Pet() : name() {
    std::cout << "Pet()\n";
}

Pet::Pet(const std::string &name) : name(name) {
    std::cout << "  Pet(" + name + ")\n";
}

std::string Pet::getName() {
    std::cout << "  this is getName from Pet\n";
    return name;
}

std::string Pet::getNameCaller() {
    std::cout << "  calling getName\n";
    return getName();
}


PetUser::PetUser() {
}
