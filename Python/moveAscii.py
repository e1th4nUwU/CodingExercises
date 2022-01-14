def move(word):
    str=""
    for x in word:
        str+=chr(ord(x)+1)
    return str

print(move("hello"))
