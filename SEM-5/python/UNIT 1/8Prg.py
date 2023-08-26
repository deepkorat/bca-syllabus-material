#Write a python program to find the sum of even numbers using command line arguments.
import sys
n = len(sys.argv)
evenList = []
# print ("Name Of File: ",sys.argv[0])
print("total argument passed: ",n-1)
for i in range(1,n):
    print(sys.argv[i],end=" ")
    if(i % 2 == 0):
        evenList.append(i)

print("\nEven Numbers: ",evenList)