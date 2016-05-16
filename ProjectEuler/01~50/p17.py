nLeters_one_to_nineteennine = {0: 0, 1: 3, 2: 3, 3: 5, 4: 4, 5: 4, 6: 3, 7: 5,
                               8: 5, 9: 4, 10: 3, 11: 6, 12: 6, 13: 8, 14: 8,
                               15: 7, 16: 7, 17: 9, 18: 8, 19: 8}

nLeters_tens = {0: 0, 2: 6, 3: 6, 4: 5, 5: 5, 6: 5, 7: 7, 8: 6, 9: 6, }


def gethundred(N):
    if N - (N // 100) * 100 != 0:
        return int(nLeters_one_to_nineteennine[N // 100]) + 10
    else:
        return int(nLeters_one_to_nineteennine[N // 100]) + 7


def getTenstep_from_twenty(N):
    return int(nLeters_tens[N // 10])


def getOne_to_nienteen_nine(N):
    return int(nLeters_one_to_nineteennine[N])

Ans = 0


def check(N):
    ans = 0
    if N > 99:
        ans += gethundred(N)
        N = N - (N // 100) * 100
    if N > 19:
        ans += getTenstep_from_twenty(N)
        N = N - (N // 10) * 10

    ans += getOne_to_nienteen_nine(N)
    return ans


for i in range(1, 1000):
    Ans += int(check(i))

print(Ans + 11)
