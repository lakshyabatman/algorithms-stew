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
        
    # Here comes for removing an bug:
    '''
    the end always go the indices last checked even if it shouldn't be part of maxArr, 
        so maxEnd should be decreased by one, except when there is only +ve number till end of arr.
    '''
    # if end == len(arr)-1:
    #     if arr[end] > 0:
    #         maxEnd-=1
    return [maxStart,maxEnd]

arr = [-1, 1,2,3, 8, - 7, - 9]
print(KadaneAlgo(arr))
