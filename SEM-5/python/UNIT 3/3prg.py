#Write a program to demonstrate the use of instance and class/static variables.

class example:
    #class or static variable
    fname = "karan"
    lname = "gosai"

    def display(self):
        print("First name is :",self.fname)
        print("Last name is :",self.lname)


#instance of the class
o1 = example()
o1.display()
