#Create a program to display memory locations of two variables using id() function, 
#and then use identity operators two compare whether two objects are same or not.
a = 10
b = 10

print (id(a) , id(b))



if(a is b):
    print ("Same Value")
else:
    print ("Different Value")


if(id(a) == id(b)):
    print ("Same Location")
else:
    print ("Different Location")