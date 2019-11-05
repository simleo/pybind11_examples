import sys
sys.path.append("../ext1/build/lib.linux-x86_64-3.6")
sys.path.append("build/lib.linux-x86_64-3.6")

import _ext1
import _ext2
pet = _ext2.buildPet("Molly")
print(type(pet))
print(pet.getName())
