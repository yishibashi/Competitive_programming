from math import sqrt
x1, y1, r = list(map(int, input().split()))
x2, y2, x3, y3 = list(map(int, input().split()))


def d(x, y):
    return sqrt(x ** 2 + y ** 2)


def dd(p1, p2):
    return sqrt((p2[0] - p1[0]) ** 2 + (p2[1] - p1[1]) ** 2)



