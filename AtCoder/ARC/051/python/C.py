N, A, B = list(map(int,input().split()))
a_i = list(map(int,input().split()))

for b in range(B):
    a_i.sort()
    a_i[0] = a_i[0] * A

a_i.sort()
for n in range(N):
    print(a_i[n]%(10**9 + 7))

