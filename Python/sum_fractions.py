def sum_fractions(lst):
    dvs = lst[0][1]
    for i in range(len(lst)):
        if(dvs%lst[i][1] != 0):
            dvs = dvs * lst[i][1]

    dvd=0
    for i in range(len(lst)):
        dvd = dvd + (lst[i][0]*(dvs/lst[i][1]))


    return round(dvd/dvs)

print(sum_fractions([ [36, 4], [22, 60] ]))
