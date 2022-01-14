const MOVES = ["Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"];

function danceConvert(pin) {
  if (!/^[0-9]+$/.test(pin) || pin.length != 4){ return "Invalid input." }
  pin=pin.toString().split("").map(a => parseInt(a))
  var ret=[]
  for(var i=0; i<4; i++){
    ret.push(MOVES[ ( i+pin[i] ) % MOVES.length ])
  }
  return ret
}

console.log(danceConvert("8765"))
