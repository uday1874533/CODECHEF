import math
# HITMAN 100
def main():
    t = int(input())
    for _ in range(t):
        h, x, y1, y2, k = map(int, input().split())
        p1 = math.ceil(h / x)
        p2 = min(math.ceil(h / y1), k)
        if p2 == k:
            p2 += max(0, math.ceil((h - k * y1) / y2))
        print(min(p1, p2))

if __name__ == "__main__":
    main()
