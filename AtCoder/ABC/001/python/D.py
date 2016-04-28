N = int(input())

times = []



for i in range(N):
    start, end = map(int, input().split('-'))
    start = start - start % 5

    if(start%100 == 60):
        start = start + 100 - start%100
    if(end % 5 != 0):
        end = end + (5 - end % 5)
        if(end%100 == 60):
            end = end + 100 - end%100
    time = [start, end]
    times.append(time)
times.sort(key=lambda x: x[0])

times.append([9999, 9999])
i = 0
while(i < len(times) - 1):
    if(times[i][1] >= times[i + 1][0]):
        times[i:i + 2] = [ [times[i][0], max(times[i][1], times[i + 1][1])] ]
        i = 0
        continue
    i += 1

for time in times[:-1]:
    print("{0:04d}-{1:04d}".format(time[0],time[1]))
