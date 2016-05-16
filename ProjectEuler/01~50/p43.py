from itertools import permutations

ans = 0

for n in permutations(range(10)):
    n = ''.join(map(str,list(n)))
    if int("".join(str(n))[1:4]) % 2 == 0:
        if int("".join(str(n))[2:5]) % 3 == 0:
            if int("".join(str(n))[3:6]) % 5 == 0:
                if int("".join(str(n))[4:7]) % 7 == 0:
                    if int("".join(str(n))[5:8]) % 11 == 0:
                        if int("".join(str(n))[6:9]) % 13 == 0:
                            if int("".join(str(n))[7:10]) % 17 == 0:
                                ans += int(n)
print("answer:",ans)



