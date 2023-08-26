#Write a program to create a Emp class and make all the members of the Emp class available to another class 
#(Myclass). [By passing members of one class to another] 

class emp:

    def __init__(self,name,age,salary):
        self.name = name
        self.age = age
        self.salary = salary
    
    def display(self):
        print("Name is :",self.name)
        print("Age is :",self.age)
        print("Salary  is : ",self.salary)
    
class myclass:
    @staticmethod
    def update(e):
        e.salary = e.salary + 1000
        e.display()

e1 = emp("karan",20,3000)
myclass.update(e1)





