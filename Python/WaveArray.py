def Wave(arr):
    arr.sort()
    for i in range(0,len(arr),2):
        if i == len(arr)-1:
            break
        else:
            arr[i],arr[i+1] = arr[i+1],arr[i]
    return arr


arr = [1,2,3,4]
print(Wave(arr))