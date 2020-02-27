def compareInterval(a):
    return a[0]

def insertAndMerge(intervals,intervalToAdd):
    # Insert
    for i in range(0,len(intervalToAdd)):
        intervals.append(intervalToAdd[i])
    intervals.sort(key=compareInterval)

    # Merge
    stack=[]
    tmp = intervals.pop(0)
    stack.append(tmp)
    while(len(intervals)!=0):
        tmp = intervals.pop(0)
        if(stack[-1][1]>= tmp[0] or (stack[-1][0]>=tmp[0] and stack[-1][1]<=tmp[1])):
            # If overlapping occurs
            startingIndex = stack[-1][0] if stack[-1][0] < tmp[0] else tmp[0]
            endingIndex = stack[-1][1] if stack[-1][1] > tmp[1] else tmp[1]
            temp = [startingIndex,endingIndex]
            stack.pop(-1)
            stack.append(temp)
        else:
            stack.append(tmp)
    return stack





    # for i in range(0,len(intervalToAdd)):
    #     intervals.append(intervalToAdd[i])
    # intervals.sort(key=compareInterval)
    # i=0
    # while i< len(intervals)-1:
    #     firstInt=intervals[i]
    #     secondInt = intervals[i+1]
    #     print(firstInt,secondInt)
    #     startingIndex = intervals[i][0] if intervals[i][0] < intervals[i+1][0] else intervals[i+1][0]
    #     endingIndex = intervals[i][1] if intervals[i][1] > intervals[i+1][1] else intervals[i+1][1]
    #     if(intervals[i+1][0]<=intervals[i+1][0]):
    #         tmp=[startingIndex,endingIndex]
    #         intervals.remove(firstInt)
    #         intervals.remove(secondInt)
    #         intervals.append(tmp)
    #         intervals.sort(key=compareInterval)
    #     i+=1


            

    

intervals=[[1,3],[2,3],[4,5],[7,9]]
intervalToAdd =[[6,10]]

print(insertAndMerge(intervals=intervals,intervalToAdd=intervalToAdd))