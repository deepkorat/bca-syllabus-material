#Write a program to override super class constructor and method in sub class.

class Base:
    def  __init__(self):
        self.name = "karan"
    
    def display(self):
        print("The name is :",self.name)
    
class child(Base):
    
    def __init__(self):
        self.name = "gosai"
    
    def display(self):
        print("The name is :",self.name)
    
c1 = child()
c1.display()
