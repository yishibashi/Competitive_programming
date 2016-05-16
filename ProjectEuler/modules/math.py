import math


def getPrimes(N):
    """Sieve of Eratosthenes
    return primes
    ->> (2,3,5,...,p) (p<=N)
    """
    prms = ()
    sieve = [0] * N
    sieve[0] = 1
    for n in range(N):
        if sieve[n] == 0:
            prms += (n + 1,)
            for m in range(n, N, n + 1):
                sieve[m] = 1
        else:
            pass
    return prms


def isCoprimes(m, n):
    if m < n:
        # return False
        m, n = n, m
    if m >= n:
        if n == 0:
            if m == 1:
                return True
            else:
                return False
        m, n = n, m % n
        return isCoprimes(m, n)


def gcd(m, n):
    if m < n:
        return gcd(n, m)
    if m >= n:
        if n == 0:
            return m
        m, n = n, m % n
        return gcd(m, n)


def lcm(m, n):
    return m * n // gcd(m, n)

def fibs(n,a=1,b=0):
    fibonaccis = [0,]
    if n <= 0:
        return None
    elif n == 1:
        return [0,]
    else:
        for i in range(n-1):
            a,b = a+b,a
            fibonaccis.append(a)
    return fibonaccis

def fib(n):
    f = math.sqrt(5)
    return int((1/f)*(((1+f)/2)**(n+1) - ((1-f)/2)**(n+1)))



if __name__ == "__main__":
    getPrimes(1000000)
