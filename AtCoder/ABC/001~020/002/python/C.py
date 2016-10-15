points = input().split()
points = list(map(int, points))

a = points[2] - points[0]
b = points[3] - points[1]
c = points[4] - points[0]
d = points[5] - points[1]

print(abs(a*d-b*c)/2.0)

