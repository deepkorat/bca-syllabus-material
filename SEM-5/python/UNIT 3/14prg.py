#Write a program to understand the order of execution of methods in several base classes according to method 
#resolution order (MRO). 

class A(object):
    def method(self):
        print("A class")
        super().method()
    
class B(object):
    def method(self):
        print("B class")
        super().method()

class C(object):
    def method(self):
        print("C method")
       
        
class X(A,B):
    def method(self):
        print("X method")
        super().method()

class Y(B,C):
     def method(self):
        print("Y method")
        super().method()
    
class P(X,Y,C):
    def method(self):
        print("P method")
        super().method()

p1 = P()
p1.method()