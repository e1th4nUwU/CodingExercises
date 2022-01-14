const isDisarium = (n) => (n.toString().split('').map((n,i) => Math.pow(parseInt(n),i+1)).reduce((a,b) => a+b)) == n;

console.log(isDisarium(75))
