# TMR CHEM
# LEMON 
# cook your dish here
t = int(input())
for i in range(t):
    x,y = map(int,input().split())
    a = x*y
    if(9999< a <100000):
        print("yes")
    else:
        print("no")
