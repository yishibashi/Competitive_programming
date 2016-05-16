class Pascal():

    def __init__(self):
        self.triangle = [[1, ], [1, 1, ]]
    
    def pascal(self, N, n=1):
        if n <= N:
            self.triangle.append([1, ] + [int(self.triangle[n][i] + self.triangle[n][i + 1])
                                     for i in range(0, n - 1)] + [1, ])
            #return Pascal.pascal(self, N, n + 1)
            return self.pascal(N, n + 1)
        else:
            return self.triangle


if __name__ == "__main__":
    p = Pascal()
    data = p.pascal(N=100)
    count = 0
    for i in data:
        for n in i:
            if n > 1000000:
                count += 1
    print(count)
