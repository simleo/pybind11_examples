#include "pet_user.hpp"

Pet buildPet(std::string name) {
    return Pet(name);
}

Pet* buildPetPtr(std::string name) {
    return new Pet(name);
}

std::string petName(Pet* p) {
    return p->getName();
}
