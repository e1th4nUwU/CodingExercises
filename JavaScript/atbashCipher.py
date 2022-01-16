#The Atbash cipher is an encryption method in which each letter of a word is replaced with its "mirror" letter in the alphabet: A <=> Z; B <=> Y; C <=> X; etc.

Create a function that takes a string and applies the Atbash cipher to it.

def atbash(txt):
    s = ""
    for i in range(len(txt)): s += chr(-ord(txt[i])+155*txt[i].isupper()+219*txt[i].islower()) if (txt[i].isalpha()) else txt[i]
    return s

print(atbash("abcdefghijklmnopqrstuvwxyz"))
