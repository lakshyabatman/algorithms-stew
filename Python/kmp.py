def patArr(pat):
    patA=[]
    patA.append(0)
    j=0
    n=len(pat)
    i=1
    while i<n:
        if(pat[i]==pat[j]):
            patA.append(j+1)
            i+=1
            j+=1
        else:
            if(j!=0):
                j=patA[patA[j-1]]
            else:
                patA.append(0)
                i+=1
    return patA

def KMPSearch(pat,txt):
    n=len(txt)
    count=0
    i=0
    j=0
    patA=patArr(pat)
    print(patA)
    while i<n:
        if pat[j]==txt[i]:
            i+=1
            j+=1
        elif(pat[j]!=txt[i]):
            if j!=0:
                j=patA[j-1]
            else:
                i+=1
        if(j==len(pat)):
            count+=1
            j=patA[j-1]
    return count


str="abcdaabca"
pat="abc"
myPat=KMPSearch(pat=pat,txt=str)
print(myPat)