#include <pet.hpp>
#include <string>

Pet buildPet(std::string name);
Pet* buildPetPtr(std::string name);
std::string petName(Pet* p);
