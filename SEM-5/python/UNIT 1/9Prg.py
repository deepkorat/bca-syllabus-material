"""Write a menu driven python program which perform the following: 
Find area of circle 
Find area of triangle 
Find area of square 
and 
rectangle
Find Simple Interest Exit.( Hint: Use infinite while loop for Menu)"""

area = 0
n =0
while (n != 6):
    print ("|------------ MENU ------------|")
    print ("|Press 1-Area Of Circle-|")
    print ("|Press 2-Area Of Triangle-|")
    print ("|Press 3-Area Of Square-|")
    print ("|Press 4-Area Of Rectangle-|")
    print ("|Press 5-Simple Interest-|")
    print ("|Press 6-Exit-|")
    print ("|------------ ---- ------------|")
    n = int(input("Enter Your Choice: "))
    if(n == 1):
        r = float(input("Enter The Radius: "))
        area = 3.14 * r * r
        print("########################")
        print ("Area Of Circle ",area)
        print("########################")
    elif(n == 2):
        h = float(input("Enter The Base: "))
        b = float(input("Enter The Height: "))
        area = h * b / 2 
        print("########################")
        print ("Area Of Rectangle ",area)
        print("########################")
    elif(n == 3):
        h = float(input("Enter The Side: "))
        area = h * h
        print("########################")
        print ("Area Of Square: ",area)
        print("########################")
    elif(n == 4):
        w = float(input("Enter The Width: "))
        h = float(input("Enter The Height: "))
        area = w * h
        print("########################")
        print ("Area Of Rectangle: ",area)
        print("########################")
    elif(n == 5):
        p = float(input("Enter The Principle Amount: "))
        r = float(input("Enter The Rate: "))
        n = float(input("Enter The Number Of Month: "))
        i = p * r * n / (100 * 12)
        print("########################")
        print ("Interest Is: ",i)
        print("########################")
    elif(n == 6):
        print("Exit")
    else:
        print ("Invalid Choice")
    

