# cook your dish here
def find_permutation(N):
    permutation =[]
    permutation.extend([1,2])
    even_number = 4
    odd_number = 3
    for i in range(3, N + 1):
        if i % 2 == 0:
            permutation.append(even_number)
            even_number += 2
        else:
            permutation.append(odd_number)
            odd_number +=2
    return permutation
T = int(input())
for _ in range(T):
    N = int(input())
    permutation = find_permutation(N)
    print(" ".join(map(str , permutation)))
