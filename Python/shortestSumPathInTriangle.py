def shortestPath(ar,previndex=0,i=0):
    m = i+1
    if len(ar)==0:
        return 0
    if(i>= len(ar)):
        return 0
    if(i==0):
            return ar[i][0] + shortestPath(ar,0,1)
    if(previndex == 0 ):
            result = min(ar[i][0],ar[i][1])
            index = ar[i].index(result)
            return result + shortestPath(ar,index,m)
    elif(previndex == len(ar[i])-1):
            result = min(ar[i][-2],ar[i][-1])
            index = ar[i].index(result)
            return result + shortestPath(ar,index,m)
    else:
            result = min(ar[i][previndex-1],ar[i][previndex],ar[i][previndex+1])
            index = ar[i].index(result)
            return result + shortestPath(ar,index,m)


triangles = [[2],[3,4],[6,5,7],[4,1,8,3]]

print(shortestPath(triangles))