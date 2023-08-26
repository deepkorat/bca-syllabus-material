# Write a python program that removes any repeated items 
# from a list so that each item appears at most once. For 
# instance, the list [1,1,2,3,4,3,0,0] would become 
# [1,2,3,4,0].

lst = [1,1,2,3,4,0,0]
arr = []

for i in lst:
    if i not in arr:
        arr.append(i)

lst = arr
print(lst)