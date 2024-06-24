# cook your dish here



def calculate_salary(t, test_cases):
    results = []
    for i in range(t):
        X, Y = test_cases[i][:2]
        binary_string = test_cases[i][2]
        
        total_working_days = binary_string.count('1')
        total_salary = total_working_days * X
        
        longest_streak = 0
        current_streak = 0
        
        for char in binary_string:
            if char == '1':
                current_streak += 1
                longest_streak = max(longest_streak, current_streak)
            else:
                current_streak = 0
        
        bonus = longest_streak * Y
        
        final_salary = total_salary + bonus
        results.append(final_salary)
    
    return results
# NEW PHONE EWWWWWWWWWWWWWWW 19-6-2024
t = 3
test_cases = [
    (6, 3, '111100110101100000101100011111'),
    (8, 2, '111010111101001010100100111101'),
    (5, 6, '011101010100101000001101000010')
]

result = calculate_salary(t, test_cases)
for res in result:
    print(res)
