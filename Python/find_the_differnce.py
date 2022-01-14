def find_the_difference(s, t):
    l1=list(s)
    l2=list(t)
    
    l1 = sorted(l1, key = lambda s: sum(map(ord, s)))
    l2 = sorted(l2, key = lambda s: sum(map(ord, s)))
    for i in range(len(l1)):
        if(l1[i] != l2[i]):
            return l2[i]
    return l2[-1]

print(find_the_difference("", "y"))
