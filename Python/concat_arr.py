def concat(*args):
	ls = []
	for a in args:
		ls += a
	return ls

print(concat([1, 2, 3], [4, 5], [6, 7]))
