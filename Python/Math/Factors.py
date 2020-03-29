import math
def Factors(num):
    A = []
    startIndex = 0
    endingIndex = -1
    for i in range(1,math.ceil(math.sqrt(num))):
        if num%i==0:
            A.insert(startIndex,i)
            startIndex+=1
        if i != num//i:
            A.insert(endingIndex,num//i)
            endingIndex-=1
    A.sort()
    return A

print(Factors(12))
