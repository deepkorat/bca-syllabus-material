#Write a program to create one array from another array.

from array import *

arr = array('i',[10,20,30,40,50])

arr2 = array(arr.typecode,(a for a in arr))


print("The elements of array1")
for i in arr:
    print(i)


print("The elements of array2")
for i in arr2:
    print(i)

