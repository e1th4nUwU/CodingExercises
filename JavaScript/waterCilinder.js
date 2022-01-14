/*Given radius r and height h (in cm), calculate the mass of a cylinder when it's filled with water and the cylinder itself doesn't weigh anything. The desired output should be given in kg and rounded to two decimal places.

How to solve:

Calculate the volume of the cylinder.
Convert cm³ into dm³.
1dm³ = 1L, 1L is 1Kg.*/

const weight = (r,h) => Number(((r*r*h*Math.PI)/1000).toFixed(2))

console.log(weight(1,2))
