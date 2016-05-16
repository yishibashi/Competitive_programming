words = []

for line in open('p042_words.txt', 'r'):
    itemList = line.split(',')

for item in itemList:

    words.append(list(item)[1:-1])


numbers = []
for k in range(1, 99):
    numbers.append(str(k * (k + 1) // 2))


counter = 0
for word in words:
    number = 0

    for w in word:
        number += int(ord(w) - 64)

    if str(number) in numbers:
        counter += 1

print(counter)
