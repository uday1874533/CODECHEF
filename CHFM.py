# cook your dish here
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if sum(a)/n in a:
        print(a.index(sum(a)/n)+1)
    else:
        print("Impossible")
    