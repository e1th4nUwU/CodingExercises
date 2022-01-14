fizz_buzz = lambda num: "Fizz"*(num%3==0) + "Buzz"*(num%5==0) or str(num)

for x in range(16):
    print(fizz_buzz(x))
