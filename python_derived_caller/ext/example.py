import sys
sys.path.insert(0, "build/lib.linux-x86_64-3.6")
sys.path.insert(0, "build/lib.linux-x86_64-3.8")

from pypet._ext1 import Pet


class Turtle(Pet):

    def __init__(self, name):
        super().__init__(name)

    def getName(self):
        return("_" + self.name)


daisy = Pet("Daisy")
print("Pet.getName():", daisy.getName())
print("Pet.getNameCaller():", daisy.getNameCaller())
molly = Turtle("Molly")
print("Turtle.getName():", molly.getName())
print("Turtle.getNameCaller():", molly.getNameCaller())
