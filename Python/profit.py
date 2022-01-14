import math
def profit(info):
    return round((round((info["sell_price"]-info["cost_price"])*100)/100)*info["inventory"])

print(profit({
  "cost_price": 32.67,
  "sell_price": 45.00,
  "inventory": 1200
}))
