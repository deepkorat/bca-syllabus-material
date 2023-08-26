#Write a program to use class method to handle the common features of all the instance of Student class.

class example:
    bird = 2

    @classmethod
    def fly(cls,name):
        print(f"{name} have only {cls.bird} wings")
    
example.fly("flamingo")
example.fly("peacock")