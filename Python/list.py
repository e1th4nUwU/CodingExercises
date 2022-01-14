def list_of_multiples (num, n):
	arr  = []
	for i in range(1,n+1):
		arr.append(num*i)
	return arr

print(list_of_multiples(7, 5))
