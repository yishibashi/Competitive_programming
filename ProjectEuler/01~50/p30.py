
import itertools
p = 5

numbers = [
    0 ** p,
    1 ** p,
    2 ** p,
    3 ** p,
    4 ** p,
    5 ** p,
    6 ** p,
    7 ** p,
    8 ** p,
    9 ** p
]
sums = []
for i in range(4, 9):
    sums += list(map(sum, itertools.combinations_with_replacement(numbers, i)))


answer = []

for number in sums:

    numbers = list(str(number))
    check = 0

    for m in numbers:
        m = int(m)
        check += m ** p

    if number == check:
        answer.append(check)
answer = set(answer)

print(sum(answer) - 1)
