#include <string>

class Pet {
public:
    std::string name;
    Pet(const std::string &name);
    std::string getName();
};


namespace petT {
    #define pptr Pet*
    void info(pptr p);
    Pet* create(const std::string &name);
}
