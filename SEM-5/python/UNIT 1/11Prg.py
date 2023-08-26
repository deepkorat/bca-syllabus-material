#Write a program to search an element in the list using for loop and also demonstrate the use of “else” with for loop.
list = []
len = int(input("How Many Values You Want To Enter: "))
for i in range(0,len):
    e = int(input("Enter The Value "))
    list.append(e)
print (list)

s = int(input("Enter Search Element: "))
for i in list:
    if(i == s):
        print("Founded")
        break
else:
    print("Not Found")
