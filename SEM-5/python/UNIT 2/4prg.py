# Write a program to sort the array elements using bubble sort technique.

from array import *

a = array('i',[10,32,239,5,2,230,44556,23,1])

print("Before sorting array :")

for i in a:
    print(i,end=" ")


n = len(a)

for i in range(n-1):
    for j in range(n-1-i):
        if(a[j] > a[j+1]):
            tmp = a[j]
            a[j] = a[j+1]
            a[j+1] = tmp


print("\n After sorting array :")

for i in a:
    print(i,end=" ")

