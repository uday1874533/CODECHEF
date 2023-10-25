# cook your dish here

import math

# Read the number of test cases
T = int(input())

# Iterate over the test cases
for _ in range(T):
    # Read the side length of the chart paper and the cutout squares
    N, K = map(int, input().split())

    # Calculate the maximum number of 
 
    # K×K squares Chef can cut
    max_squares = math.floor(N / K) ** 2

    # Output the result
    print(max_squares)

