def multiply(ls):
    res =[]
    for i in ls:
        aux = []
        for j in range(len(ls)): aux.append(i)
        res.append(aux)
    return res

print(multiply(["*", "%", "$"]))
