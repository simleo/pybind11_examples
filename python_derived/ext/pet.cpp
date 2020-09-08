#include <string>
#include <iostream>
#include "pet.hpp"

Pet::Pet() : name() {
    std::cout << "Pet()\n";
}

Pet::Pet(const std::string &name) : name(name) {
    std::cout << "Pet(" + name + ")\n";
}

std::string Pet::getName() {
    return name;
}


PetUser::PetUser() {
}

void PetUser::setPet(const Pet& pet_) {
    pet = pet_;
}
