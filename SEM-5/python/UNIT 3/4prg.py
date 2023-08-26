#Write a program to store data into instances using mutator methods and to retrieve data from the instances 
#using accessor methods.

class example:

    def get_date(self,name,age):
        self.name = name
        self.age = age  
    
    def set_date(self):
        print("The name is : ",self.name)
        print("The age is :",self.age)
    

o1 = example()
o1.get_date("karan",20)
o1.set_date()