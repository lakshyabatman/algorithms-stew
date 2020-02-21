def bubbleSort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] =arr[j+1],arr[j]
    return arr


arr= [2,3,5,4,1,6]
arr = bubbleSort(arr)
print(arr)