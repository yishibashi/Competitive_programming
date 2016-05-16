def primes(N):
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
    return prms[::-1]


def r_to_l(primes):
    ans = []
    setprimes = set(primes)

    for p in primes:
        if str(p)[0] != '1' and str(p)[0] != '9':
            tmp = p
            while p > 9:
                if int(str(p)[:-1]) in setprimes:
                    p = int(str(p)[:-1])
                else:
                    break
            if p == 2 or p == 3 or p == 5 or p == 7:
                ans.append(tmp)
        else:
            pass
    return ans


def l_to_r(primes):
    ans = []
    setprimes = set(primes)
    for p in primes:
        if str(p)[-1] != '1' and str(p)[-1] != '9':
            tmp = p
            while p > 9:
                if int(str(p)[1:]) in setprimes:
                    p = int(str(p)[1:])
                else:
                    break
            if p == 2 or p == 3 or p == 5 or p == 7:
                ans.append(tmp)
        else:
            pass
    return ans


if __name__ == '__main__':

    N = primes(999999)
    RL = set(r_to_l(N))
    LR = set(l_to_r(N))

    print(RL & LR - {2, 3, 5, 7})

    print(sum(RL & LR - {2, 3, 5, 7}))

