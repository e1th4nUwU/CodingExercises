def stupid_addition(a, b):
    if(type(a) == type(b)):
         return str(a)+str(b) if isinstance(a,int) else int(a)+int(b)

print(stupid_addition(1, 2))
print(stupid_addition("1", "2"))
print(stupid_addition(1, "2"))
