
count =0
day = 1

year = 1901

month = {1:31,2:28,3:31,4:30,5:31,6:30,7:31,8:31,9:30,10:31,11:30,12:31}

lmonth = {1:31,2:29,3:31,4:30,5:31,6:30,7:31,8:31,9:30,10:31,11:30,12:31}


for m in month.values():
    day += m
    if day % 7 == 0:
        count += 1

dcount = count 
print(count)




for year in range(1901,2001):
    if year % 4 != 0 or (year % 400 != 0 and year % 100 ==0):
            for m in month.values():
                day += m
                if day % 7 == 0:
                    count += 1


    elif year % 4 == 0:
        for m in lmonth.values():
            day += m
            if day % 7 == 0:
                count += 1
    print(year,count)

print(count - dcount )
