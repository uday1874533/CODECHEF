# cook your dish here

#  1-2 RESULTS CAME WHILE EATING BREAD OMLETE 
#   PYTHON AND CO EAT 5 * DO NOTHING 
# BUT M2 ///
# M1 PASS A OSDKMNAMAHA 

T = int(input())
for tc in range(T):
    # x=Chef , Y=Chefina, K=Move per step
    (x, y, k) = map(int, input().split(' '))
    
    diff = abs(y - x)
    move = diff // k 
    if diff%k > 0:
        move += 1 
    print(move)
