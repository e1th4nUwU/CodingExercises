import math

wash_hands = lambda N,nM: str(math.floor((N*21*30*nM)/60))+" minutes and "+str(int(((N*21*30*nM)/60%1)*60))+" seconds"

print(wash_hands(7, 9))
