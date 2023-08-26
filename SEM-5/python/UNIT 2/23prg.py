#Create a python function to accept python function as a dictionary and display its elements.

def show(dic):
    for i,j in dic.items():
        print(i," ---- ",j)
dic = {1:"karan",2:"dp",3:"meet"}
show(dic)