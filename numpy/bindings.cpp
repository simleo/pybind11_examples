#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/numpy.h>
#include <vector>
#include <iostream>

namespace py = pybind11;


class Tensor {
public:
    int size;
    std::vector<int> shape;
    float *data;
    Tensor(const std::vector<int>& shape) {
	this->shape = shape;
	size = 1;
	for (size_t i = 0; i < shape.size(); ++i) {
	    size *= shape[i];
	}
	data = new float[size];
    }
    void info() {
	std::cout << "shape: [ ";
	for (size_t i = 0; i < shape.size(); ++i) {
	    std::cout << shape[i] << " ";
	}
	std::cout << "]" << std::endl;
	std::cout << "data: [ ";
	for (int i = 0; i < size; ++i) {
	    std::cout << data[i] << " ";
	}
	std::cout << "]" << std::endl;
    }
};


Tensor* create(const std::vector<int>& shape) {
    return new Tensor(shape);
}


PYBIND11_MODULE(_ext, m) {
    py::class_<Tensor>(m, "Tensor")
	.def(py::init<const std::vector<int>&>())
	.def("info", &Tensor::info);
    m.def("create", [](py::array_t<float, py::array::c_style | py::array::forcecast> array) -> class Tensor* {
        py::buffer_info info = array.request();
        std::vector<int> shape(info.shape.begin(), info.shape.end());
        Tensor* t = new Tensor(shape);
        std::copy((float*)info.ptr, ((float*)info.ptr) + t->size, t->data);
        return t;
    }, "create(array) --> Tensor", py::arg("array"));
    // moving this binding before the previous one triggers
    // https://github.com/pybind/pybind11/issues/2027
    m.def("create", (class Tensor* (*)(const std::vector<int>&)) &create,
	  "create(list) --> Tensor", pybind11::arg("shape"));
}
