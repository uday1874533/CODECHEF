# cook your dish here

# Function to calculate the maximum number of walls Chef can paint with given budget
def max_walls_painted(T, test_cases):
    for case in test_cases:
        X, Y, Z = case
        area_per_wall = X * Y
        max_walls = Z // 2  # Each m^2 costs 2 rupees

        walls_painted = max_walls // area_per_wall
        print(walls_painted)

# Input reading and function call








# 

#
# SALAAR 

# KOHLI







T = int(input())
test_cases = []
for _ in range(T):
    case = list(map(int, input().split()))
    test_cases.append(case)

max_walls_painted(T, test_cases)

