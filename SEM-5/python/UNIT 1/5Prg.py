#Write a program to find out and display the common and the non common elements in the list using membership operators
from operator import le



list = [1,2,3,4,5,6,1,3,5,10]
ectra = []
common = []
noncommon = []
len = len(list)
for i in range(0,len):
    ectra = list[i+1:len]
    print(ectra)
    if (list[i] in ectra):
        common.append(list[i])
    if(list[i] not in common):
        noncommon.append(list[i])
        
print("Common :",common)
print("NonCommon : ",noncommon)    
input()
