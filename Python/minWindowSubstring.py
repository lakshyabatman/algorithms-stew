
def minWindowSubString(st,pat):
    n = len(st)
    m = len(pat)
    hashPat = {}
    hashStr = {}
    # Boundary conditions
    if(n<m):
        return ""
    if(n==m):
        if(st==pat):
            return pat
        else:
            return ""
    start, startIndex,minLength = st[0] , -1 ,float('inf')
    cnt = 0
    # Building HashMap for pattern
    for i in pat:
        if str(i) in hashPat:
            hashPat[str(i)]+=1
        else:
            hashPat[str(i)]=1
    print(hashPat)
    for i in range(n):
        if str(i) in hashStr:
            hashStr[str(i)]+=1
        else:
            hashStr[str(i)]=1
        if(hashPat[str(i)]!=0 and hashPat[str(i)] >= hashStr[str(i)]):
            cnt+=1
        if(cnt==m):
            while(hashStr[str(start)]>hashPat[str(start)] or hashPat[str(start)]==0):
                if(hashPat[str(start)]<hashStr[str(start)]):
                    hashStr[str(start)]-=1
                
            windowSize = i -+1
            minLength = min(minLength,windowSize)
            startIndex = start
    return st[startIndex:startIndex+minLength]




st = "this is a test string"
pat = "tist"

print(minWindowSubString(st,pat))