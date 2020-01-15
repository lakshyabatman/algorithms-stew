def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)

def rotateArr(ar,rotate):
    g_c_d = gcd(len(ar),rotate)
    for i in range(g_c_d):
        temp= ar[i]
        j = i
        while(1):
            k = (j+rotate)%len(ar)
            if(k==i):
                break
            ar[j] = ar[k]
            j= k
        ar[j] = temp
    print(ar)

myArr =[1,2,3,4,5,6]
rotate = 3

rotateArr(myArr,rotate)