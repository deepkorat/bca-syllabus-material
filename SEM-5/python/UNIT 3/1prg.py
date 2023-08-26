# Write a program to create a Student class with name, age and marks as data members. Also create a method 
# named display() to view the student details. Create an object to Student class and call the method using the 
# object.

from hashlib import shake_128


class student:
    
    name = "karan"
    age  = 20
    marks = 90
    

    def display(self):
        print("The name is :",self.name)
        print("The age is  : ",self.age)
        print("The mark is : ",self.marks)


s1 = student()
s1.display()





