def digit_occurrences(start, end, digit):
	s=""
	while(start != end+1):
		s+=str(start)
		start+=1

	return s.count(str(digit))

print(digit_occurrences(51, 55, 5))
