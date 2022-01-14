function findBrokenKeys(str1, str2) {
  var arr = []
	for(var i=0; i<str1.length; i++){
    if(str1[i] != str2[i] && arr.indexOf(str1[i]) == -1){
      arr.push(str1[i])
    }
  }
  return arr;
}

console.log(findBrokenKeys("happy birthday", "hawwy birthday"))
