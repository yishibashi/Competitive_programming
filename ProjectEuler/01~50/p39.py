from MyMath import isCoprimes
import itertools


psCounter = {}
elements = []

def isPytagorean(a,b,c):
    if int(a)**2 + int(b)**2 == int(c)**2:
        return True
    else:
        return False


for pair in itertools.combinations(range(1,23),2):
    if isCoprimes(pair[0],pair[1]):
        m,n = max(pair[0],pair[1]),min(pair[0],pair[1])
        if 2*m**2 + 2*m*n <= 1000:
            if str(2*m**2 + 2*m*n) not in psCounter:
                psCounter[str(2*m**2 + 2*m*n)] = 1
            else:
                psCounter[str(2*m**2 + 2*m*n)] += 1
        elements.append([m**2 - n**2,2*m*n,m**2 + n**2])

for e in elements:
    for k in range(2,13):

        a, b, c = k*e[0], k*e[1], k*e[2]
        if isPytagorean(a,b,c):
            if a+b+c <= 1000:
                if str(a+b+c) not in psCounter:
                    psCounter[str(a+b+c)] = 1
                else:
                    psCounter[str(a+b+c)] += 1

print(psCounter)
print(max(psCounter.values()))

