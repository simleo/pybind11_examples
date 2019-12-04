import sys
sys.path.insert(0, "build/lib.linux-x86_64-3.6")

import _ext


def square(i):
    return i * i


rval = _ext.func_arg(square)
print(rval)
