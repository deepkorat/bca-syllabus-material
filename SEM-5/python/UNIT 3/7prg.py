#Create a Bank class with two variables name and balance. Implement a constructor to initialize the 
#variables. Also implement deposit and withdrawals using instance methods. 




from tkinter.tix import Balloon


class Bank:

    def __init__(self,name,bal):
        self.name = name
        self.bal = bal
    
    def show(self):
        print(f"The amount is :{self.bal} ")
        print(f"The name is :  {self.name}")

    def deposite(self,add):
        self.bal += add
    
    def withdraw(self,sub):
        self.bal -= sub
    

name = input("Enter your name")
bal = int(input("Enter your bal"))

b1 = Bank(name,bal)

while(True):

    print("Press 1 for Deposite")
    print("Press 2 for withdraw")
    print("Press 3 for Check balance")
    print("Press 4 for Exit")

    n = int(input("Enter your choice"))
    if(n == 1):
        dep = int(input("Enter your deposite value "))
        b1.deposite(dep)
        print("After deposite")
        b1.show()
        break
    
    elif(n == 2):
        w = int(input("Enter withdraw amount :"))
        b1.withdraw(w)
        print("After withdrw")
        b1.show()
        break
    
    elif(n == 3):
        b1.show()
        break
    
    else:
        break
    
