import sys
sys.path.insert(0, "build/lib.linux-x86_64-3.6")
sys.path.insert(0, "build/lib.linux-x86_64-3.8")

import pypet._ext1


class Derived(pypet._ext1.Pet):
    def __init__(self, name):
        pypet._ext1.Pet.__init__(self)
        self.name = name
        self.derived = True
    def getName(self):
        return(f'{self.name}: Moooo')


daisy = pypet._ext1.Pet("Daisy")
print(daisy.getName())

print()
pu1 = pypet._ext1.PetUser()
pu1.pet = daisy
print(pu1.pet)

print()
molly = Derived('Molly')
pu2 = pypet._ext1.PetUser()
pu2.pet = molly
print(molly.getName())
print(pu2.pet)
print(pu2.pet.getName())
