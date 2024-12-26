# cook your dish here
import sys
from math import prod

input = sys.stdin.read
data = input().split()

idx = 0
T = int(data[idx]);
idx += 1
res = []

while T > 0:
    T -= 1
    N, L, R = int(data[idx]), int(data[idx+1]), int(data[idx+2])
    A = list(map(int, data[idx+3:idx+3+N]))
    idx += 3 + N

    if len(set(A)) != N:
        res.append("YES" if L <= 0 <= R else "NO")
        continue

    if N > 12:
        fA = 1
        exceeded = False
        for i in range(N):
            for j in range(i + 1, N):
                xor_val = A[i] ^ A[j]
                fA *= xor_val
                if fA > R:
                    exceeded = True
                    break
            if exceeded:
                break
        if exceeded:
            res.append("NO")
        else:
            res.append("YES" if L <= fA <= R else "NO")
    else:
        xor_vals = [A[i] ^ A[j] for i in range(N) for j in range(i + 1, N)]
        fA = prod(xor_vals)
        res.append("YES" if L <= fA <= R else "NO")

sys.stdout.write("\n".join(res) + "\n")
