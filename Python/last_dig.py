def last_dig(a, b, c):
    return ((a%10)*(b%10))%10 == c%10

print(last_dig(15228, 9209, 72162))
