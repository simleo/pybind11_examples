import sys
sys.path.append("../ext1/build/lib.linux-x86_64-3.6")
sys.path.insert(0, "build/lib.linux-x86_64-3.6")

import pypet._ext1
import pypet_user._ext2

pet = pypet_user._ext2.buildPet("Molly")
print(type(pet))
print(pet.getName())

petptr = pypet_user._ext2.buildPetPtr("Mick")
print(type(petptr))
print(petptr.getName())

p = pypet._ext1.Pet("Ruby")
print(pypet_user._ext2.petName(p))
