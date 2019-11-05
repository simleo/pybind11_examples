#include <pybind11/pybind11.h>
#include "pet_user.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_ext2, m) {
    m.def("buildPet", &buildPet);
}
