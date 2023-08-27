# cook your dish here

#CODING CONTEST K2 GADD
t=int(input())
for i in range(t):
    n, m=map(int, input().split())
    if(n%m==0):
        if(n//m)%2==0:
            print("yes")
        else:
            print("no")
    else:
        print("no")
