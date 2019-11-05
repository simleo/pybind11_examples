# Multiple extensions

This example reproduces a scenario where a C++ library (`pet_user`, under
`ext2`) uses another C++ library as a dependency (`pet`, under `ext1`). The
`buildPet` function from `pet_user` returns a `Pet` object from `pet`. The
example shows how to build two separate Python extensions (`_ext1` and
`_ext2`), where `_ext2.buildPet` returns an object of type `_ext1.Pet`.

To build everything, start with the C++ library and example executable from
`ext1`:

```
$ cd ext1
$ bash build_cpp.sh
```

Now you should have `libpet.so` and `example`.

```
$ ./example
Pet(Daisy)
Daisy
```

Build the Python extension (needs pybind11, `pip3 install pybind11`) and run
the Python example.

```
$ python3 setup.py build_ext
$ python3 example.py
Pet(Daisy)
Daisy
```

Now do the same in `ext2`:

```
$ cd ../ext2/
$ bash build_cpp.sh
$ ./example
Pet(Rose)
Rose
Pet(Violet)
Violet
$ python3 setup.py build_ext
$ python3 example.py
Pet(Molly)
<class '_ext1.Pet'>
Molly
Pet(Mick)
<class '_ext1.Pet'>
Mick
```

Note that the `import _ext1` line in `example.py` is necessary. Without it,
the following error occurs:

```
$ python3 example.py
Pet(Molly)
Traceback (most recent call last):
  File "example.py", line 7, in <module>
    pet = _ext2.buildPet("Molly")
TypeError: Unable to convert function return value to a Python type! The signature was
	(arg0: str) -> Pet
```
