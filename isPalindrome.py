def isPalindrome (st):
    i=0
    j = len(st)-1
    st = str(st).lower()
    while(i<j):
        while(not((st[i]>="0" and st[i] <="9") or (st[i]>="a" and st[i]<="z"  ))):
            i+=1
        while(not((st[j]>="0" and st[j] <="9") or (st[j]>="a" and st[j]<="z"  ))):
            j-=1
        if(st[i]!=st[j]):
            return False
        i+=1
        j-=1
    return True

myStr = "Red rum, sir, is murer"
print(isPalindrome(myStr))