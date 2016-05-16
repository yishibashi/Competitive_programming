N = 100

numbers = []

for n in range(2, N+1):
    for m in range(2, N+1):
        numbers.append(n**m)

print(len(set(numbers)))
