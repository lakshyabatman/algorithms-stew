def KnapSack(value,w,maxWeight):
    n=len(value)
    i=0
    j=0
    K=[[0 for m in range(maxWeight+1)] for y in range(n+1)]

    for i in range(n+1):
        for j in range(maxWeight+1):
            if( i==0 or j==0):
                K[i][j]=0
            elif wt[i-1]<=j:
                K[i][j]=max(value[i-1]+K[i-1][j-wt[i-1]],K[i-1][j])   
            else:
                K[i][j]=K[i-1][j]
    
    return K[n][maxWeight]


wt=[1,3,4,5]
value=[1,4,5,7]
maxWeight=7
k=KnapSack(value=value,wt=wt,maxWeight=maxWeight)
print(k)
