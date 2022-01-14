def to_binary(num):
    n=128
    s=""
    while(n>0.5):
        s+= '1' if num>=n else '0'
        num-= n*(num>=n)
        n/=2
    return s

print(to_binary(0xAA))
