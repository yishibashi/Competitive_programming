ans = 0

for k in range(1,1001):
    ans += int(k)**int(k)

ans = list(str(ans))

print(ans[-10:])
