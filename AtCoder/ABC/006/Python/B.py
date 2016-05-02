N = int(input())
memo = [0,]*1000001
memo[2] = 1

def Trib(n):
    if(n == 1 or n == 0): return memo[1]
    if(memo[n] != 0): return memo[n]
    memo[n] = (Trib(n-1) + Trib(n-2) + Trib(n-3)) % 10007
    return memo[n]
    


print(Trib(N))

