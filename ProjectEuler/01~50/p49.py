from modules.MyMath import getPrimes as pr
from itertools import combinations as cmb


N = 10000
primes = [n for n in pr(N) if n>1000]
nmbrs = []

for i in primes:
    tmp = set()
    for j in primes:
        if i != j and set(str(i)) == set(str(j)):
            tmp.add(i)
            tmp.add(j)
    if tmp != [] and len(tmp) > 2 and tmp not in nmbrs:
        nmbrs.append(tmp)


answer = []

for elements in nmbrs:
    for el in cmb(elements, 3):
        if abs(el[0]-el[1]) == abs(el[1]-el[2]):
            answer.append(el)

print(answer)
