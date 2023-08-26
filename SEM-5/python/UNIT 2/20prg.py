#Write a program to create a dictionary from the user and display the elements.
dic = {}

n = int(input("How many value enter ?"))

for i in range(n):
    print("Enter key :",end="")
    k = input()
    print("Enter its value :",end="")
    v = input()
    dic.update({k:v})

print(dic)
