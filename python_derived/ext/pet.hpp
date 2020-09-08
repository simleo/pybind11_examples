#include <string>

class Pet {
public:
    std::string name;
    Pet();
    Pet(const std::string &name);
    std::string getName();
};

class PetUser {
public:
    Pet pet;
    PetUser();
    void setPet(const Pet& pet);
};
