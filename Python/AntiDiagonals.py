def Anti(A):
    if len(A)== 0:
            return []
    m = len(A[0])
    result = []
    for i in range(m):
        temp =[]
        j = 0
        k = i
        while (j < m and k >=0):
            temp.append(A[j][k])
            j+=1
            k-=1
        result.append(temp)
    for i in range(1,m):
        temp = []
        j = m-1
        k = i
        while( j > 0 and k <= m-1):
            temp.append(A[k][j])
            j-=1
            k+=1
        result.append(temp)
    return result
test = [
    [
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16]
    ],
    [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
    ]
]
for A in test:
    print(Anti(A))