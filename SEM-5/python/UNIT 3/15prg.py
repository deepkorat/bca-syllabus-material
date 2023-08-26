#Write a program to check the object type to know whether the method exists in the object or not.

from dis import dis
from tkinter.tix import DisplayStyle


class A:
    def show(self):
        print("A class ")
    
class B:
    def show(self):
        print("B class")
    
def display(obj):
    obj.show()

a = A()
display(a)
b = B()
display(b)


