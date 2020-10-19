def findPattern(mystr,pat):
    m=len(mystr)
    n=len(pat)
    count=0
    pHash=generateHash(pat)
    for i in range(m-n+1):
        sHash=generateHash(mystr[i:n+i])
        if(pHash==sHash):
            flag=0
            for j in range(n):
                if(mystr[i+j]!=pat[j]):
                    flag=1
            if(flag==0):
                count+=1
    return count


def generateHash(mystr):
    hash=0
    for i in mystr:
        hash+=ord(i)
    return hash

mystr="abceabc"
pat="abc"
print(findPattern(mystr,pat))