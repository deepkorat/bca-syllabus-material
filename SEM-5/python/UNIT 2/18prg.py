# Write a program to accept elements in the form of a tuple and display its minimum, maximum, sum and average.

tpl = (1,2,3,4,5,6,7)

min = min(tpl)
print("The minimum number :",min)

max = max(tpl)
print("The maximum number : ",max)

sum = 0
n = len(tpl)
for i in tpl:
    sum = sum + i
    
avg = sum / n

print("The sum is : ",sum)
print("The avg is : ",avg)
