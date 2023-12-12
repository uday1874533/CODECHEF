# cook your dish here

from collections import Counter
t = int(input())
for _ in range(t):
    n = int(input())
    A = list(map(int,input().split()))
    D = list(map(int,input().split()))
    arr = list(zip(A,D))
    D = Counter()
    for i,j in arr:
        D[i] += 1
        D[j] += 1
    A = sorted(D.values())
    print(A[-1])
            
