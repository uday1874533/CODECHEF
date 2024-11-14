# cook your dish here
def can_eat_exact_slices(n, k):
    min_slices = n * 10
    max_slices = n * 12
    return min_slices <= k <= max_slices

t = int(input().strip())
results = []
for _ in range(t):
    n, k = map(int, input().strip().split())
    if can_eat_exact_slices(n, k):
        results.append("YES")
    else:
        results.append("NO")

print("\n".join(results))
