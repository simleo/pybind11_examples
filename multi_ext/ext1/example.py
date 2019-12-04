import sys
sys.path.insert(0, "build/lib.linux-x86_64-3.6")

import pypet._ext1
pet = pypet._ext1.Pet("Daisy")
print(pet.getName())
pypet._ext1.petT.info(pet)
pet2 = pypet._ext1.petT.create("Jumbo")
pypet._ext1.petT.info(pet2)
