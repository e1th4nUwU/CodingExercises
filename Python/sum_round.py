import math

def sum_round(num):
    i = 0
    s = ""
    while num > 0:
        if num%10:
            s+= str(int(math.pow(10,i)*(num%10)))
            if num>10 :
                s+=' '
        num = math.floor( num/10 )
        i+=1
    return s

print(sum_round(101))
