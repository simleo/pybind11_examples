#include <iostream>
#include "pet.hpp"

int main() {
    Pet pet("Daisy");
    std::cout << pet.getName() << "\n";
    pptr pet2 = new Pet("Ginger");
    petT::info(pet2);
    delete(pet2);
    pptr pet3 = petT::create("Bubble");
    petT::info(pet3);
    delete(pet3);
}
