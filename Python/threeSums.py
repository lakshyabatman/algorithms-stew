def threeSums(myArr,target):
    myArr.sort()
    result=[]
    for i in range(len(myArr)):
        j=i+1
        k = len(myArr)-1
        if(i>0 and myArr[i]==myArr[i-1]):
            continue
        while(j<k):
            print(myArr[i],myArr[j],myArr[k])
            if(k<len(myArr)-1 and myArr[k]==myArr[k+1]):
                continue
            if(myArr[i]+myArr[k]+myArr[j]>target):
                k-=1
            elif(myArr[i]+myArr[j]+myArr[k]<target):
                j+=1
            elif(myArr[i]+myArr[j]+myArr[k]==target):
                result.append([myArr[i],myArr[j],myArr[k]])
                k-=1
                j+=1
    return result


myArr = [-1,1,0,2,-1,-4]
target = 0
print(threeSums(myArr,target))