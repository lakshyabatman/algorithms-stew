def findLongestConsecutiveSubseq(arr):
    arr.sort()
    results = [1 for i in arr]
    for i in range(1,len(arr)):
        if(arr[i]== arr[i-1]+1):
            results[i]= results[i-1]+1
    return max(results)



myArr=[1,7,8,2,3,4]
print(findLongestConsecutiveSubseq(myArr))