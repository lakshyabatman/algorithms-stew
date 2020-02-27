def isMatch(st,pat):
    # Replace a**b**c -> a*b*c

    T= [[False for y in range(len(pat)+1)] for x in range(0,len(st)+1)]
    T[0][0]=True
    # Initialize first row 
    for i in range(1,len(pat)):
        if(pat[i]=="*"):
            T[0][i]=True
    
    for i in range(1,len(st)+1):
        for j in range(1,len(pat)+1):
            if(pat[j-1]=="?" or st[i-1]==pat[j-1]):
                T[i][j]= T[i-1][j-1]
            elif(pat[j-1]=="*"):
                T[i][j] = T[i-1][j] or T[i][j-1]
            else:
                T[i][j]= False

    return T[-1][-1]

st = "xaylmz"
pat = "x?y*z"
print(isMatch(st=st,pat=pat))
