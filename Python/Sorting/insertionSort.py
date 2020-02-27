# Sorting
#  [2,3,4,5,1,6]
# First iteration with i->1 j->0 => [2,3,4,5,1,6]
# Second iteration with i->2 j->1 => [2,3,4,5,1,6]
# Third iteration with i->3 j->2 => [2,3,4,5,1,6]
# Fourth iteration with i->4 j->3 => [2,3,4,5,1,6]
#   Now kay <- arr[i]
#       arr[j+1] <- arr[j] arr[4] <- arr[3]
#       arr[3] <- arr[2]
#       arr[2] <- arr[1]
#       arr[1] <- arr[0]
#       arr[0] <- key! 

def insertionSort(arr):
    for i in range(1,len(arr)-1):
        key=arr[i]
        j=i-1
        while j>=0 and key<arr[j]:
            print("Shifting",arr[j],"to",arr[j+1])
            arr[j+1]=arr[j]
            j-=1
        arr[j+1] = key
        
        
    return arr

arr = [2,3,4,5,1,6]
arr = insertionSort(arr)
print(arr)