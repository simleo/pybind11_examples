#include <iostream>
#include "pet.hpp"

class Turtle : public Pet {
public:
    Turtle(const std::string &name) : Pet(name) {}
    std::string getName() {
	return "_" + name;
    }
};

int main() {
    Pet daisy("Daisy");
    std::cout << "Pet.getName(): " << daisy.getName() << "\n";
    std::cout << "Pet.getNameCaller(): " << daisy.getNameCaller() << "\n";
    Turtle molly("Molly");
    std::cout << "Turtle.getName(): " << molly.getName() << "\n";
    std::cout << "Turtle.getNameCaller(): " << molly.getNameCaller() << "\n";
}
