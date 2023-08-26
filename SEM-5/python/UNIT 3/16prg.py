#Write a program to overload the addition operator (+) to make it act on the class objects.

class x:
    def __init__(self,n1):
        self.n1 = n1
    
    def __add__(self,other):
        return self.n1 + other.n2
    
class y:
    def __init__(self,n2):
        self.n2 = n2
    
x1 = x(100)
x2 = y(200)
print("The total is :",x1+x2)
