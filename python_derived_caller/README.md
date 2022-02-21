# Class derivation in Python - method called from other method

Shows how to use a trampoline class to enable method overriding in Python.

**Without** the ``PyPet`` trampoline class, the example compiles and the
bindings seem to work for the most part. In the Python example, however, the
derived class has a problem: when `getName` is called directly on an instance
of ``Turtle``, the overridden version of `getName` is called; but when
`getNameCaller` is called, it calls the base version of `getName`:

```
Pet.getName(): Daisy
Pet.getNameCaller(): Daisy
Turtle.getName(): _Molly
Turtle.getNameCaller(): Molly
```

Adding the trampoline class fixes the above problem:

```
Pet.getName(): Daisy
Pet.getNameCaller(): Daisy
Turtle.getName(): _Molly
Turtle.getNameCaller(): _Molly
```
