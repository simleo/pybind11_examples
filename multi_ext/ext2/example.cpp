#include <iostream>
#include "pet_user.hpp"

int main() {
    Pet pet = buildPet("Rose");
    std::cout << pet.getName() << "\n";
    pptr petptr = buildPetPtr("Violet");
    std::cout << petptr->getName() << "\n";
    delete petptr;
    pptr p = new Pet("Daisy");
    std::cout << petName(p) << "\n";
    delete p;
}
