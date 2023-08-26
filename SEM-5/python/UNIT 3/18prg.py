#Write a program to override the super class method in subclass.

class base:
    def show(self):
        print("The base class")

class child(base):
    def show(self):
        print("The child class")
    
c1 = child()
c1.show()



