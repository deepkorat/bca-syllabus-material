# Write a lambda/Anonymous function to find bigger  number in two given numbers. 

n1 = int(input("Enter The first number : "))
n2 = int(input("Enter The second number :"))

max = lambda n1,n2 : n1 if n1 > n2 else n2

print("The bigger number is : ",max(n1,n2))