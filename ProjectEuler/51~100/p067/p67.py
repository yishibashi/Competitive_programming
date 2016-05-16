
tri = [

]

for line in open('p067_triangle.txt', 'r'):
    tri.append(map(int, line.split()))

size = len(tri)-1

while size >= 1:
    for n in range(len(tri[size-1])):
        tri[size-1][n] += max(tri[size][n], tri[size][n+1])
    size -= 1

print(tri[0])
