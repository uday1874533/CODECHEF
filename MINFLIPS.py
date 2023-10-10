# 10th october ma

# cook your dish here
t = int(input())
for i in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]
    if n&1==1: print(-1)
    else: print(abs(sum(a))//2)
