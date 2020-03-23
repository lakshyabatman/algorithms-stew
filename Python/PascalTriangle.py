def Pascal(A):
    if A == 0:
        return []
    result = [[]for i in range(A)]
    result[0].append(1)
    for i in range(1,A):
        for j in range(i+1):
            if j == 0 or j == i:
                result[i].append(1)
            else:
                temp = 0 or result[i-1][j-1]
                temp2 = 0 or result[i-1][j]
                result[i].append(temp+temp2)
    return result

def KthRowOfPascal(A):
    return Pascal(A+1)[-1]
print(KthRowOfPascal(2))