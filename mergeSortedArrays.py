
def merge(arr,arr1):
    result=[]
    i=0
    j=0
    while(i<len(arr) and j<len(arr1)):
        if(arr[i]> arr1[j]):
            result.append(arr1[j])
            j+=1
        else:
            result.append(arr[i])
            i+=1
    while(i<len(arr)):
        result.append(arr[i])
        i+=1
    while(j<len(arr1)):
        result.append(arr1[j])
        j+=1
    return result


input1 =[1,3,4,5]
input2 =[2,4,6,8]

print(merge(input1,input2))