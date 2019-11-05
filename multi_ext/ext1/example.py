import sys
sys.path.append("build/lib.linux-x86_64-3.6")

import _ext1
pet = _ext1.Pet("Daisy")
print(pet.getName())
