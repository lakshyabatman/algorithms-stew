def majorityVote(arr):
    value, count =0,0
    for i in range(len(arr)):
        if(count==0):
            value = arr[i]
            count=1
        elif(value==arr[i]):
            count+=1
        else:
            count-=1
    return value 

arr= [2,2,4,2,1,2,4,4]
m = majorityVote(arr)
print(m)
# Drawback, the algo will fail if the number's count is lesser than n/2 even though other elements are still lesser, for such cases using hashmaps will be a better option!