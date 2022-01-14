const values = [5,3,1,-1,-3,-5]
const symbols = ['#', 'O', 'X', '!', '!!', '!!!']
const func = str => str.reduce((a,b) => a.concat(b)).map( a => values[ symbols.indexOf(a) ]).reduce((a, b) => a + b, 0)
const checkScore = str => Math.max(func(str),0)

console.log(checkScore([['!!', '!', '!!!', '!!!', '!!', '!', 'X'], ['#', '!!', '!!', '#', '#', '!', '!!!'], ['X', 'O', 'X', '!', '!', '!', 'X'], ['!!', 'X', '!!', '!', 'O', '!', '#'], ['!', 'X', '!', 'O', 'O', '#', 'O'], ['X', '!!!', 'O', 'X', 'X', '#', '!'], ['!', '!', '#', '!!!', 'O', '#', '!']]))
