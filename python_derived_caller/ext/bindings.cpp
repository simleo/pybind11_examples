#include <pybind11/pybind11.h>
#include "pet.hpp"

namespace py = pybind11;

class PyPet : public Pet {
public:
    using Pet::Pet;
    std::string getName() override {
	PYBIND11_OVERLOAD(std::string, Pet, getName);
    };
};


PYBIND11_MODULE(_ext1, m) {
    py::class_<Pet, PyPet>(m, "Pet")
	.def_readwrite("name", &Pet::name)
	.def(py::init<>())
        .def(py::init<const std::string &>())
        .def("getName", &Pet::getName)
        .def("getNameCaller", &Pet::getNameCaller);
}
