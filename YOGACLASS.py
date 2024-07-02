# cook your dish here
# KALKI 2898 TOMOROW RELEASE

def max_earnings(T, test_cases):
    results = []
    for case in test_cases:
        N, X, Y = case
        num_type2_sessions = N // 2
        remaining_hours = N % 2
        total_earnings = num_type2_sessions * Y + remaining_hours * X
        results.append(total_earnings)
    return results

T = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(T)]

results = max_earnings(T, test_cases)

for result in results:
    print(result)
