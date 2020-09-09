#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "pet.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_ext1, m) {
    py::class_<Pet>(m, "Pet")
	.def(py::init<>())
        .def(py::init<const std::string &>())
        .def("getName", &Pet::getName);
    py::class_<PetUser>(m, "PetUser", py::dynamic_attr())
	.def_readwrite("pets", &PetUser::pets)
	.def(py::init<>());
}
