#Write a program to create a byte type array, read, modify, and display the elements of the array
l = []
#create byte type array
num = int(input("How Many Number You Want Enter: "))

for i in range(0,num):
    n = int(input("Enter Number: "))
    l.append(n)
bta = bytearray(l)

#read byte type array
for i in bta:
    
    print(i , end=" ")
print()
#modify btye type array
m = int(input("Which Element You want to modify: "))
value = int(input("Enter The New Value Of {0} Position: ".format(m)))
bta[m-1]=value
for i in bta:
    print(i , end=" ")