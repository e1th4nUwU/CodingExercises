def make_rug(m, n, s='#'):
    row = ""
    for i in range(n): row+=s
    arr = []
    for i in range(m): arr.append(row)
    return arr

print(make_rug(3, 5, '$'))
