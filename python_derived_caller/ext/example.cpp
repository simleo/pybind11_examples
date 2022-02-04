#include <iostream>
#include <vector>
#include "pet.hpp"

class Derived : public Pet {
public:
    Derived(const std::string &name) : Pet(name) {}
    std::string getName() {
	std::cout << "  this is getName from Derived\n";
	return name;
    }
};

int main() {
    Pet daisy("Daisy");
    std::cout << daisy.getName() << "\n";
    std::cout << daisy.getNameCaller() << "\n";
    // PetUser pet_user;
    // pet_user.pets = std::vector<Pet*>({&daisy});
    // std::cout << pet_user.pets[0]->name << "\n";

    Derived molly("Molly");
    std::cout << molly.getName() << "\n";
    std::cout << molly.getNameCaller() << "\n";
}
