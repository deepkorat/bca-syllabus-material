#Write a program to convert the elements of two lists into key-value pairs of a dictionary.

l1 = [1,2,3,4]
l2 = ["karan","dp","meet","jay"]

z = zip(l1,l2)
dic = dict(z)
print(dic)