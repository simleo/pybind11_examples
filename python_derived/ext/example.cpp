#include <iostream>
#include <vector>
#include "pet.hpp"

int main() {
    Pet daisy("Daisy");
    std::cout << daisy.getName() << "\n";
    PetUser pet_user;
    pet_user.pets = std::vector<Pet*>({&daisy});
    std::cout << pet_user.pets[0]->name << "\n";
}
