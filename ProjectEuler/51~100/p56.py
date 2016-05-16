Max = 0

for a in range(1,100):
    for b in range(1,100):

        if Max < sum([int(n) for n in list(str(a**b))]):
            Max = sum([int(n) for n in list(str(a**b))])

        if b == 99: print(a)

print(Max)
