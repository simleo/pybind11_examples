#include <string>
#include <vector>

class Pet {
public:
    std::string name;
    Pet();
    Pet(const std::string &name);
    std::string getName();
};

class PetUser {
public:
    std::vector<Pet> pets;
    PetUser();
};
