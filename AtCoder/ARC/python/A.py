n = int(input())
anss = list(input())


A = []

for i in range(1, 5):
    i = str(i)
    A.append(sum([x == i for x in anss if x == i]))

print(max(A), min(A))
