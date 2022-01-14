import math

def is_sastry(n):
    return math.sqrt(float(str(n) + str(n+1)))%1 == 0

print(is_sastry(184))
print(is_sastry(106755))
print(is_sastry(157175907513603))
