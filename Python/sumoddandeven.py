def sum_odd_and_even(lst):
    ret =[0,0]
    for i in range(len(lst)):
        print(i)
        f = (lst[i]%2 != 0)
        ret[f]+=lst[i]

    return ret

print(sum_odd_and_even([1, 2, 3, 4, 5, 6]))
