import math
def primeFactors (num):
    A =[]
    for i in range(2,math.ceil(math.sqrt(num))):
        while num%i==0:
            A.append(i)
            num = num//i
    if num!=1:
        A.append(num)
    return A

print(primeFactors(11))