import itertools

number = ['1', '2', '3', '4', '5', '6', '7', '8', '9']

funnys = []

for element in itertools.permutations(number, 3):

    ab = float(element[0] + element[1])
    bc = float(element[1] + element[2])
    ab_bc = ab / bc
    ac = float(element[0]) / float(element[2])

    if ab_bc == ac and ac < 1:
        funnys.append([ab, bc])

print(funnys)

ans = 1

for n in funnys:

    ans = ans * n[0] / n[1]

print(ans)
