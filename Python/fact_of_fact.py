def fact_of_fact(n):
    ans = 1
    for i in range(2,n+1):
        aux = 1
        for j in range(2,i+1):
            aux*=j
        ans*=aux
    return ans

print(fact_of_fact(5))
