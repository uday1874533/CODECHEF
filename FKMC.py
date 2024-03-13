def max_present_days(N, S):
    max_present = S.count('1')
    max_present_with_op = max_present
    for i in range(N):
        if S[i] == '0':
            j = i
            while j < N and S[j] == '0':
                j += 1
            max_present_with_op = max(max_present_with_op, j - i + max_present)
    return max_present_with_op

T = int(input())

for _ in range(T):
    N = int(input())  # Length of the string
    S = input()        # Binary string representing attendance sheet
    print(max_present_days(N, S))
