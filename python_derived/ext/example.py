import sys
sys.path.insert(0, "build/lib.linux-x86_64-3.6")

import pypet._ext1


class Derived(pypet._ext1.Pet):
    pass


daisy = pypet._ext1.Pet("Daisy")
print(daisy.getName())

print()
pu1 = pypet._ext1.PetUser()
pu1.pet = daisy
print(pu1.pet)

print()
molly = Derived()
pu2 = pypet._ext1.PetUser()
pu2.pet = molly
print(pu2.pet)
