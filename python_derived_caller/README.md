# Class derivation in Python - method called from other method

This currently has a problem: when `getName` is called directly on an instance
of `Derived`, the overridden version of `getName` is called; but when
`getNameCaller` is called, it calls the base version of `getName`.
