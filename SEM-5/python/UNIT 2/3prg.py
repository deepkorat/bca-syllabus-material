# Write a program to understand various methods of array 
# class mentioned: append, insert, remove, pop, index, 
# tolist and count.

from array import *

arr = array('i',[10,20,30,40,50,724,3435])

print("Using Append method")
arr.append(100)
print(f"The update array is : {arr} ")

print("\n Using Insert method")
arr.insert(3,3000)
print(f"The update array is : {arr} ")

print("Using Remove method")
arr.remove(3000)
print(f"The update array is : {arr} ")

print("using pop method")
arr.pop()
print(f"The update array is : {arr} ")

print("Using index method")
n = arr.index(724)
print(f"The index of 724 is {n}")

print("Using tolist method")
lst = arr.tolist()
print(f"The list element {lst}")
print(type(lst))

arr2 = array('i',[10,20,30,10,10,10])
print("The onther array is ")
for i in arr2:
    print(i,end=" ")

n = arr2.count(10)
print(f"\n The occurance of 10 in the array : {n}")