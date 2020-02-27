def merge(arr,start,mid,end):
    temp = [0]* (end-start+1)
    i,j,k = start,mid+1,0
    while i <=mid and j<=end:
        if(arr[i]<=arr[j]):
            temp[k]=arr[i]
            i+=1
        else:
            temp[k]=arr[j]
            j+=1
        k+=1
    while i <=mid:
        temp[k]=arr[i]
        i+=1
        k+=1
    while j<=end:
        temp[k]=arr[j]
        j+=1
        k+=1
    for i in range(start,end+1):
        arr[i]= temp[i-start]


def mergeSort(arr,start,end):
    if start < end:
        mid = int((start+end)/2)
        mergeSort(arr,start,mid)
        mergeSort(arr,mid+1,end)
        merge(arr,start,mid,end)

arr=[2,3,5,4,1]
mergeSort(arr,0,4)
print(arr)