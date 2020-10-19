import math
def Prime(num):
    A=[]
    for i in range(num):
        A.append(1)
    A[0]=0
    A[1]=0
    for i in range(2,math.ceil(math.sqrt(num))):
        if(A[i]==1):
            for j in range(i*2,num,i):
                A[j]=0
    return A

print(Prime(15))