#Write a program to access the base class constructor from a sub class by using super() method and also 
#without using super() method.

class base:

    def __init__(self,name):
        self.name = name
    
    def dispaly(self):
        print("The name is :",self.name)
   

class child(base):

    def __init__(self,name):
        base.__init__(self,name)
    
#withount super method
c1 = child("karan")
c1.dispaly()

class Base2:
    def __init__(self,name):
        self.lname = name
    
    def show(self):
        print("The name is ",self.lname)
    
class child2(Base2):

    def __init__(self,name):
        super().__init__(name)

#using super method
c2 = child2("karan")
c2.show()