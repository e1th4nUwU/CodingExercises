var getTotalPrice = (groceries) => parseInt(groceries.reduce((sum, grocery) => sum + grocery.price*grocery.quantity, 0) * 100)/100;

console.log(getTotalPrice([
	{ product: "Chocolate", quantity: 1, price: 0.10 },
	{ product: "Lollipop", quantity: 1, price: 0.20 }
]))

console.log(parseInt((0.1 + 0.2)*100)/100)
 
