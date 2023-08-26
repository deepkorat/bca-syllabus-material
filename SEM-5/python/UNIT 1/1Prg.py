# Write a program to swap two numbers without taking a temporary variable.
a = int(input("Enter The First Number: "));
b = int(input("Enter The Sec Number: "));
print("\n ------------------------ \n")
print ("Before Swap Value A: ",a)
print ("Before Swap Value B: ",b)
a , b = b , a
print("\n ------------------------ \n")
print ("After Swap Value A: ",a)
print ("After Swap Value B: ",b)
