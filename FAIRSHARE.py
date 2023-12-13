import math
for i in range (int(input())):
    N,K=map(int,input().split())
    Friend_share=math.floor(N/(K+1))
    print(N-(Friend_share*K))