#Write a program to create Student class with a constructor having more than one parameter

class student:

    def __init__(self):
        self.name = "deep"
        self.age = 52
        self.marks = 150
    
    def show(self):
        print("The name is : ",self.name)
        print("The age is : ",self.age)
        print("The marks is : ",self.marks)
    

s1 = student()
# s1 = student("karan",20,90)
s1.show()
