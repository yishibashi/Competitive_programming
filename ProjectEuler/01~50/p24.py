number = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
count = 0
answer = 0
try:
    for a in number:
        for b in number:
            if a != b:
                for c in number:
                    if a != c and b != c:
                        for d in number:
                            if a != d and b != d and c != d:
                                for e in number:
                                    if a != e and b != e and c != e and d != e:
                                        for f in number:
                                            if a != f and b != f and c != f and d != f and e != f:
                                                for g in number:
                                                    if a != g and b != g and c != g and d != g and e != g and f != g:
                                                        for h in number:
                                                            if a != h and b != h and c != h and d != h and e != h and f != h and g != h:
                                                                for i in number:
                                                                    if a != i and b != i and c != i and d != i and e != i and f != i and g != i and h != i:
                                                                        for j in number:
                                                                            if a != j and b != j and c != j and d != j and e != j and f != j and g != j and h != j and i != j:
                                                                                count += 1
                                                                                if count == 1000000:
                                                                                    answer = a + b + c + d + e + f + g + h + i + j
                                                                                    raise END

except:
    print(answer)
