# cook your dish here

n=int(input())
for i in range(n):
    x=int(input())
    ar=list(map(int,input().split()))
    print(sum(ar)-min(ar))