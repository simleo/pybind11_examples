#include <pybind11/pybind11.h>
#include "pet.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_ext1, m) {
    py::class_<Pet>(m, "Pet")
	.def_readwrite("name", &Pet::name)
	.def(py::init<>())
        .def(py::init<const std::string &>())
        .def("getName", &Pet::getName)
        .def("getNameCaller", &Pet::getNameCaller);
}
