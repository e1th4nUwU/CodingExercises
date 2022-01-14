import math

quadratic_equation = lambda a, b, c: (-b + math.sqrt(b*b - 4*a*c))/(2*a)


print(quadratic_equation(1, 3, -154))

n = 7

while(n % 13):
    n+=7

print(n)
