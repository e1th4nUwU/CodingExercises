"""
Given two strings containing integer digits, sum them and return them as a string
"""


def add(n1, n2):
    return str(int(n1)+int(n2)) if (n1 and n2) else "Invalid Operation"

print(add("1","1"))
