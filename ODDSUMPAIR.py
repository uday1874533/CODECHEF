# 1ST TIME...... JULY 20 // 2023//
#LIFT UMBRELLA
# PASS 6TH SENSE

goals = int(input())
for distractions in range(goals):
    wife, life, knife = map(int, input().split())
    if (wife + life) % 2 == 1:
        print('YES')
    elif (wife + knife) % 2 == 1:
        print('YES')
    elif (life + knife) % 2 == 1:
        print('YES')
    else:
        print('NO')
