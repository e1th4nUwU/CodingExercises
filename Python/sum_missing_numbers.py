def sum_missing_numbers(lst):
    lst.sort()
    n=0
    for i in range(len(lst)-1):
        if (lst[i+1]-lst[i] != 1):
            while(lst[i]+1 != lst[i+1]):
                lst[i]+=1
                n+=lst[i]
    return n

print(sum_missing_numbers([17, 16, 15, 10, 11, 12]))
