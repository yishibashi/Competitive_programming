def primes(N):
    """Sieve of Eratosthenes
    return primes
    ->> [2,3,5,...,p] (p<=N)
    """
    prms = []
    sieve = [0] * N
    sieve[0] = 1

    for n in range(N):
        if sieve[n] == 0:
            prms.append(n + 1)
            for m in range(n, N, n + 1):
                sieve[m] = 1
        else:
            pass
    return set(prms)


def isCP(primes, CPs=[]):
    tmp = []
    tf = True
    for p in primes:
        tf = True
        # print('top',tmp,tf)
        lngth = len(str(p))
        p = str(p)*2

        for n in range(lngth):

            if int(p[n:n+lngth]) in primes:
                tmp.append(int(p[n:n+lngth]))
                tf *= True

            elif int(p[n:n+lngth]) not in primes:
                # print(int(p[n:n+lngth]))
                tf *= False
                tmp = []
                break

        if tf == 1:
            tmp = list(set(tmp))
            CPs.append(tmp)
            tmp = []

    return CPs


ps = primes(1000000)

print(len(isCP(ps)))
