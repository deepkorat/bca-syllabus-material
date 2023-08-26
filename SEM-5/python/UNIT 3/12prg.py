#Write a program to implement single inheritance in which two sub classes are derived from a single base 
#class.

class person:
    def __init__(self,name,age):
        self.name = name
        self.age = age
     
    def display(self):
        print("The name is :",self.name)
        print("The age is :",self.age)
    
class student(person):
    def __init__(self, name, age,fees):
        super().__init__(name, age)
        self.fees = fees
    
    def show(self):
        super().display()
        print("The fees :",self.fees)
    
class teacher(person):
    def __init__(self, name, age,salary):
        super().__init__(name, age)
        self.salary = salary
    
    def show1(self):
        super().display()
        print("The salary :",self.salary)

print("Student Details")
s1 = student("karan",30,9000)
s1.show()

print("Teacher Details")
t1 = teacher("dp",50,93000)
t1.show1()

    
    