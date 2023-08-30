# cook your dish here
def calculate_flowers(T, test_cases):
    results = []
    
    for t in range(T):
        N, K, M = test_cases[t]
        pluck = (K - 1) % M
        offer = (K * (N - 1)) % M
        results.append((pluck, offer))
    
    return results

T = int(input())
test_cases = []

for _ in range(T):
    N, K, M = map(int, input().split())
    test_cases.append((N, K, M))

results = calculate_flowers(T, test_cases)
for result in results:
    print(result[0], result[1])

