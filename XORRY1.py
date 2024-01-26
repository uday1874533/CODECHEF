# EE SALA CUP NAMDE
# OSDNMM1CLEAR
def find_array_pair(x):
    a, b = 0, 0
    bit_position = 0

    while (1 << bit_position) <= x:
        bit_position += 1

    msb = 1 << (bit_position - 1)
    a = msb
    b = x ^ a

    return b, a

if __name__ == "__main__":
    t = int(input())

    for _ in range(t):
        x = int(input())
        result = find_array_pair(x)
        print(result[0], result[1])
