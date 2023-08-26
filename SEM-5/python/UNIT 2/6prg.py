# Write a program to generate prime numbers with the 
# help of a function to test prime or not.

def prime(n):
    x = 1

    for i in range(2,n):
        if n%i == 0:
            x = 0
            break
        else:
            x = 1
    return x


n = int(input("Enter the number you want"))

for i in range(2,n):
    res = prime(i)
    if(res == 1):
        print(i)
    

