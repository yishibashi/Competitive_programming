A, B = map(int, input().split())

C = abs(B - A)

ml = [0, 1, 2, 3, 2, 1, 2, 3, 3, 2]


def ans(C):
    return C // 10 + ml[C % 10]


print(ans(C))


