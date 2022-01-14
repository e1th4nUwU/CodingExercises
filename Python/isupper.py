def normalize(txt):
	return txt[0] + txt[1:].lower() + "!" if txt.isupper() else txt

print(normalize("HELLO"))
