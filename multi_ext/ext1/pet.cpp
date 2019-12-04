#include <string>
#include <iostream>
#include "pet.hpp"

Pet::Pet(const std::string &name) : name(name) {
    std::cout << "Pet(" + name + ")\n";
}

std::string Pet::getName() {
    return name;
}


namespace petT {
    void info(pptr p) {
	std::cout << p->name << "\n";
    }
    Pet* create(const std::string &name) {
	return new Pet(name);
    }
}
