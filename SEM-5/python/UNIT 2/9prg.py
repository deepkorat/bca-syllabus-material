# Write a program to demonstrate the use of Positional argument, keyword argument and default arguments.

def displayname(fname,lname='gosai'):
    print(fname + " " +  lname)

displayname('karan','gosai')
displayname('meet','sohaliya')
displayname(fname="divyesh",lname="panchal")