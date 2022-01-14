var specialReverse = (str, c) => str.split(' ').map(s => s[0] == c? s.split('').reverse().join('') : s ).join(' ')

console.log(specialReverse("word searches are super fun", "s"))
