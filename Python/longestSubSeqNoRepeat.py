def longestSubSeq(st):
    myset=[]
    i=0
    while(i<len(st)):
        if st[i] in myset:
            myset.pop(-1)
        else:
            myset.append(st[i])
            i+=1
    return len(myset)

mystr=""
print(longestSubSeq(mystr))