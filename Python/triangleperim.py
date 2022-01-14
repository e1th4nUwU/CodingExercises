import math

def perimeter(lst):
    l1 = math.sqrt(pow(lst[0][0]-lst[1][0],2) + pow(lst[0][1]-lst[1][1], 2))
    print(l1)
    l2 = math.sqrt(pow(lst[1][0]-lst[2][0],2) + pow(lst[1][1]-lst[2][1], 2))
    print(l2)
    l3 = math.sqrt(pow(lst[0][0]-lst[2][0],2) + pow(lst[0][1]-lst[2][1],2))
    print(l3)
    return round(l1+l2+l3, 2)

print(perimeter([[15, 7], [5, 22], [11, 1]]))
