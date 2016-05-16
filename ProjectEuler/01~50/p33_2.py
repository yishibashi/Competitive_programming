from fractions import Fraction

import itertools

number = ['1', '2', '3', '4', '5', '6', '7', '8', '9']

funnys = []

for element in itertools.permutations(number, 3):

    ab = int(element[0]+element[1])
    bc = int(element[1]+element[2])

    ab_bc = Fraction(ab, bc)

    ac = Fraction(int(element[0]), int(element[2]))

    if ab_bc == ac and ac < 1:
        funnys.append(ab_bc)

ans = 1

for n in funnys:

    ans = ans * n

print(ans)
