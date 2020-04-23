def MaxUnsortedArray(A):
    s= 0
    e= len(A)-1
    for i in range(1,len(A)):
        if A[i]< A[i-1]:
            s=i-1
            break
    for i in range(len(A)-1,-1,-1):
        if A[i]<A[i-1]:
            e = i
            break
    print(s,e)
    if (s == 0 and e==len(A)-1) or s==e:
        return [-1]
    MinInSE = min(A[s:e+1])
    MaxInSE = max(A[s:e+1])
    for i in range(s):
        if(A[i]>MinInSE):
            s=i
            break
    for i in range(len(A)-1,e,-1):
        if A[i]< MaxInSE:
            e=i
            break
    return [s,e]

print(MaxUnsortedArray([ 13,13,15 ]))

