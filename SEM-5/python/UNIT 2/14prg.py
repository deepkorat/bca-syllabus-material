# Write a program to create a list using range functions and perform append, update and delete elements 
# operations in it

lst = []

for i in range(1,11):
    lst.append(i)

print(lst)

lst.insert(2,100)
print("after update index 2 value as a 100")
print(lst)

lst.remove(100)
print("After removing 100 ")
print(lst)