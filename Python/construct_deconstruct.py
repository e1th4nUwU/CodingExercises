def construct_deconstruct(s):
    arr = []
    for i in range(len(s)):
        arr.append(s[0:i+1])
    for i in range(len(s)-1):
        arr.append(s[0:len(s) - (i+1)])
    return arr

print(construct_deconstruct("Hello"))
