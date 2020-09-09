#include <string>

class Pet {
public:
    std::string name;
    Pet();
    Pet(const std::string &name);
    virtual ~Pet() {}  
    virtual std::string getName();
};

class PetUser {
public:
    Pet* pet;
    PetUser();
    void setPet(Pet* pet);
};
