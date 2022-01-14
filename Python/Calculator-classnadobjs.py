class Calculator:
	# Write methods to add(), subtract(), multiply() and divide()
	def add(self, a,b):
		return a+b
	def subtract(self,a,b):
		return a-b
	def multiply(self,a,b):
		return a*b
	def divide(self,a,b):
		return a/b

calculator = Calculator()
print(calculator.add(10,5))
