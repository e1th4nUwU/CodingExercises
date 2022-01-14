def return_unique(lst):
    rt = []
    for x in lst:
        if((lst.count(x))==1):
             rt.append(x)
    return rt


print(return_unique([1, 9, 8, 8, 7, 6, 1, 6]))
