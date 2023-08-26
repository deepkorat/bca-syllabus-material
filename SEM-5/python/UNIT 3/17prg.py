# Write a program to show method overloading to find sum of two or three numbers

class cal:
    def sum(self,a,b=0,c = 0,*args):
        s=0
        for i in args:
            s += i
        
        print(s+a+b+c)
        
    
c1 = cal()
c1.sum(10,20)
c1.sum(10,20,30)
c1.sum(10)
c1.sum(10,30,80,90,100)