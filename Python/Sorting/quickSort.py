
def Parition(arr,start,end):
    pivot = arr[end]
    pIndex = start
    for i in range(start,end):
        if(arr[i]<=pivot):
            arr[i],arr[pIndex]= arr[pIndex],arr[i]
            pIndex+=1
    arr[pIndex],arr[end] = arr[end],arr[pIndex]
    return pIndex

def QuickSort(arr,start,end):
    if(start<end):
        pivot = Parition(arr,start,end)
        QuickSort(arr,start,pivot-1)
        QuickSort(arr,pivot+1,end)
    

arr=[2,4,7,3,1]
QuickSort(arr,0,len(arr)-1)
print(arr)