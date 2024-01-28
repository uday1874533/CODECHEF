# cook your dish here
# TOMORROW IND VS ENG 1ST TEST 
t = int(input())

for _ in range(t):
    N, M = map(int, input().split())
    ans = N // M
    result = ans

    for _ in range(M):
        print(result, end=" ")
        result += ans

    print()

