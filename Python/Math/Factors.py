import math
def Factors(num):
    A = []
    startIndex = 0
    endingIndex = -1
    for i in range(1,math.floor(math.sqrt(num))+1):
        if num%i==0:
            A.insert(startIndex,i)
            startIndex+=1
        if i != num//i:
            A.insert(endingIndex,num//i)
            endingIndex-=1
    A.sort()
    return A

print(Factors(12))
