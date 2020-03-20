def KadaneAlgo(arr):
    resultMax=currentMax = arr[0]
    start = end = maxStart = maxEnd = 0
    if(currentMax<0):
        start+=1
        currentMax=0
    for i in range(1,len(arr)):
        currentMax = currentMax+ arr[i]
        if currentMax < 0:
            start = i+1
            currentMax = 0
        elif currentMax > resultMax:
            resultMax = currentMax
            maxStart = start
            end = i
    maxEnd = end 
    return [maxStart,maxEnd]

def KadaneAlgo2(arr):
    [maxStart,maxEnd]=KadaneAlgo(arr)
    if maxStart < 0 and maxStart == maxEnd:
            return
    return arr[maxStart:maxEnd+1]

test = [
    [0,0,-1,0],
    [-1,-1]
]
print(KadaneAlgo2(test[0]))
