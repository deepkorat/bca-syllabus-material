#Write a program to implement multiple inheritance using two base classes.

class base1:
    def show(self):
        print("The base1 class")
    
class base2:
    def show2(self):
        print("The base2 class")
    
class child(base1,base2):
    def show3(self):
        print("The child class")
    
c1 = child()
c1.show()
c1.show2()
c1.show3()
