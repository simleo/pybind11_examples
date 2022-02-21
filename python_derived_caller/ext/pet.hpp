#include <string>

class Pet {
public:
    std::string name;
    Pet();
    Pet(const std::string &name);
    virtual std::string getName();
    std::string getNameCaller();
};
