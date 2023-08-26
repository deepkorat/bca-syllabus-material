#Create a dictionary that will accept cricket players name and scores in a match. Also we are retrieving runs by 
#entering the player’s name.

dic = {}
x = int(input("How many palyer you want ?"))

for i in range(x):
    k = input("Enter player name : ")
    v = int(input("Enter run un match : "))
    dic.update({k:v})

print("The cricker are in match")
for i in dic.keys():
    print(i)

name = input("Enter player name :")

n = dic.get(name,1)

if(n == 1):
    print("player not found")
else:
    print(f"{name} hit {n} runs")


