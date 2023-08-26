# Create a sample list of 7 elements and implement the List methods mentioned: append, insert, copy, extend, 
# count, remove, pop, sort, reverse and clear. 

from audioop import reverse

from pkg_resources import resource_stream


lst = [1,2,3,4,5,6,7]

print("The append method  : ")
lst.append(8)
print(lst)

print("The insert value at 3 position")
lst.insert(3,50)
print(lst)

print("The copy method")
lst2 = lst.copy()
print(lst2)

print("The extend method")
lst1 = [10,20,30,40]
print("The new list is ",lst1)
print("The append list to list")
lst2 = lst.extend(lst1)
print(lst2)

print("occuerence of 4")
n = lst.count(4)
print(n)

print("The remove method")
lst.remove(7)
print(lst)

print("The sorted list")
print(lst.sort())

print("The reverse")
lst2 = reverse(lst)
print(lst2)

print("The pop element :")
print(lst.pop())

print("The clear element")
print(lst.clear())

