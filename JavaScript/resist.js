function parallelResistance(arr) {
  var n = Math.max.apply(null,arr)
  for(var i=0; i<arr.length; i++){
    arr[i]= n/arr[i]
  }
  return Math.round(n*10/arr.reduce((a, b) => a + b, 0))/10
}

console.log(parallelResistance([6,3,6]))
