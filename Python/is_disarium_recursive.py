def is_disarium(n, i=1):
	#Check if number has more than one digit
	if(n > 9):
		n_ = n #Save a copy of the original number

		#Get the first digit
		while(n > 9):
			n=n // 10
		
		#Base case: the index of the number is one
		if(i == 1):
			return (n**i + is_disarium(int(str(n_)[1:]), i+1)) == n_
		
		# Return the sum up to that point
		else:
			return n**i + is_disarium(int(str(n_)[1:]), i+1)
	else:
		#Single digit
		return n**i if i!=1 else True
	
st = (75, 135, 544, 518, 466, 8)
for x in st:
	print(f"{x} {is_disarium(x)}")
