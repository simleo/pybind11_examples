#include <iostream>
#include "pet_user.hpp"

int main() {
    Pet pet = buildPet("Rose");
    std::cout << pet.getName() << "\n";
    Pet* petptr = buildPetPtr("Violet");
    std::cout << petptr->getName() << "\n";
    delete petptr;
}
