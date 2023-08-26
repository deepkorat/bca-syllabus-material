#  Write a program to show variable length argument and  its use.

def arithmetic(*number):
    sum = 0
    for i in number:
        sum = sum + i;
    
    print("Total is : ",sum)

arithmetic(10,20,30,50,60)
    