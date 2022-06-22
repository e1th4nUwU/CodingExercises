"""
A number is said to be Disarium if the sum of its digits raised to their respective positions is the number itself.

Create a function that determines whether a number is a Disarium or not.
"""

#Get the length of the number without using str()
def num_len(n):
	n = abs(n)
	i = 1
	while(n>9):
		n/=10
		i+=1
	return i

def is_disarium(n):
	n_ = n
	len = num_len(n)
	sum = 0
	#Sum the digits
	while(len):
		sum += (n%10)**len #Raise to the power of the current position
		n = int(n/10)
		len-=1
	return n_ == sum
	

st = {75, 135, 544, 518, 466, 8}

for x in st:
	print(x, is_disarium(x))
