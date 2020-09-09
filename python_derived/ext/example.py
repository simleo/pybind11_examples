import sys
sys.path.insert(0, "build/lib.linux-x86_64-3.6")

import pypet._ext1


class Derived(pypet._ext1.Pet):
    pass


daisy = pypet._ext1.Pet("Daisy")
print(daisy.getName())

print()
pu1 = pypet._ext1.PetUser()
pu1.pets = [daisy]
print(pu1.pets[0])

print()
molly = Derived("Molly")
pu2 = pypet._ext1.PetUser()
print(molly)
print(molly.getName())
pu2.pets = [molly]
print(pu2.pets[0])
print(pu2.pets[0].getName())
