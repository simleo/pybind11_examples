# Experiments with class derivation in Python

Check that PetUser.pets elements do NOT get coerced to the base class if it's
polymorphic. See [this
section](https://pybind11.readthedocs.io/en/stable/classes.html#inheritance-and-automatic-downcasting)
of the pybind11 docs.

For things to work, on the C++ side, things should be as follows:

* attributes should use pointers, e.g., `std::vector<Pet*> pets` rather than `std::vector<Pet> pets`
* for methods to be overridable in derived classes, they should be defined as `virtual`
