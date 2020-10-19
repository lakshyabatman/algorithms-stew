def twoSums(myArr,target):
    myHash = {}
    for i in range(len(myArr)):
        myHash[myArr[i]]= [target-myArr[i],i]
    for i in range(len(myArr)):
        if(myHash[myHash[myArr[i]][0]]):
            return [i,myHash[myHash[myArr[i]][0]][1]]
        


myArr = [2,7,1,8,11,15]
target = 9
print(twoSums(myArr,target))