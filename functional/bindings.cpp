#include <pybind11/pybind11.h>
#include <pybind11/functional.h>
#include "func.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_ext, m) {
    m.def("func_arg", &func_arg);
}
