#Write a python program that asks the user to enter a length in centimeters. 
#If the user enters a negative length, the program should tell the user that the 
#entry is invalid. Otherwise, the program should convert the length to inches and print out the result. (2.54 = 1 inch)
from tarfile import LENGTH_NAME


length = float(input("Enter The Length In Centimeters: "))
inch = 0 
if(length < 0):
    print ("Length Is Invalid")
else:
    inch = length * 1 / 2.54
    print (length," CM = ", "{:.4f}".format(inch) ,  "inch")

    # print (length," CM = ", "{:.4f}".format(inch)," inch")
