import math

N = math.factorial(100)

lg = int(math.log10(N))


answer = 0

while 10**lg > 1:

    k = N // (10**lg)
    answer += k
    N -= k * (10**lg)
    lg -= 1


print(answer)
