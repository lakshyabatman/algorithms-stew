def KadaneAlgo(arr):
    resultMax=currentMax = arr[0]
    start = end = maxStart = 0
    if (currentMax<0):
        start+=1
        currentMax = 0
    for i in range(1,len(arr)):
        currentMax = currentMax+ arr[i]
        if currentMax < 0:
            start = i+1
            currentMax = 0
        elif currentMax > resultMax:
            resultMax = currentMax
            maxStart = start
            end = i
    if maxStart >= end:
        if maxStart == 0:
            if arr[0] == -1:
                return []
        else:
            return [maxStart+1,end+1]
    return [maxStart+1,end+1]

def Flip(A):
    flipped = []
    for i in A:
        if i=="1":
            flipped.append(-1)
        else:
            flipped.append(1)
    return KadaneAlgo(flipped)
tests = [
    "01010101011001011101010101010101010",# [12,13]
    "100101101",# [2,3]
]
for A in tests:
    print(Flip(A))