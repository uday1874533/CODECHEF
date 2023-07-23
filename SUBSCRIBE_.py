
# cook your dish here
import math
t=int(input())
for i in range(t):
    n,x=map(int,input().split())
    n=math.ceil(n/6)
    print(n*x)
