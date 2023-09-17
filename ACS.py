# FULL ENJ AND CLEANING 

# cook your dish here
t = int(input())
for i in range(t):
    p = int(input())
    r = (p%100)+(p//100)
    print(r) if r<=10 else print(-1)
