# Create a program to retrieve, display and update only a range of elements from an array using indexing and 
# slicing in arrays.

from array import *

arr = array('i',[10,20,30,40,50])

m = len(arr)

for i in range(m):
    print(arr[i],end=" ")

print("\n After update the array")
arr[4] = 300

for i in range(m):
    print(arr[i],end=" ")

print("\n Update the range of elements")

arr[1:4] = array('i',range(50,54))
for i in range(m):
    print(arr[i],end=" ")

