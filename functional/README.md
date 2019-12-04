# Functions as arguments

Tries the binding of functions that take other functions as arguments. See
https://pybind11.readthedocs.io/en/stable/advanced/cast/functional.html.

Firs build the C++ library and example executable:

```
$ bash build_cpp.sh
```

Then Build the Python extension (needs pybind11, `pip3 install pybind11`).

```
$ python3 setup.py build
```
