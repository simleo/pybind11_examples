#include <iostream>
#include "pet.hpp"

int main() {
    Pet daisy("Daisy");
    std::cout << daisy.getName() << "\n";
    PetUser pet_user;
    pet_user.setPet(&daisy);
    std::cout << pet_user.pet->name << "\n";
}
