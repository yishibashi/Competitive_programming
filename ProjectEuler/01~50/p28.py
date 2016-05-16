"""
21 22 23 24 25
   ________
20| 7  8  9|10
19| 6 |1| 2|11
18| 5  4  3|12
   --------<- 3x3 square: lng = 3
17 16  15  14 13


5x5 -> n = (2N-1) => N = (n+1)/2 ->3
1001x1001 -> N = 501
"""


N = 501
answer = 0
a_n1 = 3

for n in range(2, N+1):

    lng = 2*n - 1  # size of side

    answer += 4*a_n1 + 12*n - 12  # add per squre

    a_n1 = a_n1 + 3 * (2*n - 2) + 2*n

print(answer+1)
