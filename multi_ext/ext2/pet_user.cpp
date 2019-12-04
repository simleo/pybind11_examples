#include "pet_user.hpp"

Pet buildPet(std::string name) {
    return Pet(name);
}

pptr buildPetPtr(std::string name) {
    return petT::create(name);
}

std::string petName(pptr p) {
    return p->getName();
}
