#PRIORITY ALGORITHM

# cook your dish here
a=[10,5]
for i in range(int(input())):
    n=int(input())
    b=0
    for j in range(2):
        if(a[j]<=n):
            b=b+(n//a[j])
            n=n%a[j]
    
    if(n==0):
        print(b)
    else:
        print(-1)
