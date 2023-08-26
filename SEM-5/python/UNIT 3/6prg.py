 #Write a program to create a static method that counts the number of instances created for a class.

from stringprep import c22_specials
class count:
       
    n = 0
    def __init__(self):
        count.n += 1
    
    @staticmethod
    def c():
        print(f"The instance is {count.n} time created")
    

c1 = count()
c2 = count()
c3 = count()
# c4 = count()
count.c()
    