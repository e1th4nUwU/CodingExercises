def emphasise(txt):
    s = ""
    for i in range(len(txt)):
        if txt[i-1] == ' ' or i==0: s+=txt[i].upper()
        else: s+=txt[i].lower()
    return s

print(emphasise("99 red balloons!"))
