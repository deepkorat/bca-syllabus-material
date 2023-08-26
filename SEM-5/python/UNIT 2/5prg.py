# Create a program to search the position of an element in an array using index() method of array class.

from array import *
from operator import index

x = array('i',[10,20,323,54,643,5663,4657,7678,899])

print("The array elements are : ")
for i in x:
    print(i,end = " ")

search = int(input("\n Enter the search element "))
print(f"\n the search element is {search}")
n = len(x)

c = False
for i in range(n):
    if(search == x[i]):
        print("The element is at {} posotion".format(x.index(search)))
        c = True
   
        
if(c == False):
    print("The element is not there")