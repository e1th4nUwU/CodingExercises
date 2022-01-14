var histogram = (arr,char) => arr.map(x => char.repeat(x)+"\n").join('').slice(0,-1);

console.log(histogram([2,4,5,6], "o"));
