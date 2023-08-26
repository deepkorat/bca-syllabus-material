#Create a program to sort tuple with nested tuples.

t1 = ((10,"hello",30),(40,"how",60),(-10,"are",-30),(70,"you",90))

#sorted
print(sorted(t1))
#sort in reverce
print(sorted(t1,reverse = True))
#sort in key or index of 1
print(sorted(t1,key = lambda x : x[1]))
#sort in key or index of 2
print(sorted(t1,key = lambda x : x[2]))
