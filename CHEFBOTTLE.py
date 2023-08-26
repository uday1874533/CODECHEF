# cook your dish here
t=int(input())
for i in range(t):
    n,x,k=map(int,input().split())
    if n*x<=k:
        print(n)
    else:
        print(k//x)
