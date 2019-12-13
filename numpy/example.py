import sys
sys.path.insert(0, "build/lib.linux-x86_64-3.6")

import _ext
import numpy as np


t = _ext.create([2, 2])
t.info()
print()

a = np.arange(6).reshape(2, 3).astype(np.float32)
t = _ext.create(a)
t.info()
print()

b = np.array([1, 2]).astype(np.float32)
u = _ext.create(b)
u.info()
