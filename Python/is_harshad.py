def is_harshad(n):
    return n%sum(list(map(lambda x: int(x), list(str(n)))))==0

print(is_harshad(481))
