import sys
sys.path.append("../ext1/build/lib.linux-x86_64-3.6")
sys.path.append("build/lib.linux-x86_64-3.6")

import _ext1
import _ext2

pet = _ext2.buildPet("Molly")
print(type(pet))
print(pet.getName())

petptr = _ext2.buildPetPtr("Mick")
print(type(petptr))
print(petptr.getName())

p = _ext1.Pet("Ruby")
print(_ext2.petName(p))
