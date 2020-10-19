def spiralOrder(num):
    A = [[0 for i in range(num)] for i in range(num)]
    upperLevel = 0
    lowerLevel = len(A)-1
    leftLevel = 0
    rightLevel = len(A)-1
    currentNumber = 1
    while (upperLevel<= lowerLevel and leftLevel <= rightLevel):
        for i in range(leftLevel,rightLevel+1):
            A[upperLevel][i] = currentNumber
            currentNumber+=1
        upperLevel+=1
        for i in range(upperLevel,lowerLevel+1):
            A[i][rightLevel] = currentNumber
            currentNumber+=1
        rightLevel-=1
        if (leftLevel<=rightLevel):
            for i in range(rightLevel,leftLevel-1,-1):
                print(i,lowerLevel,currentNumber)
                A[lowerLevel][i] = currentNumber
                currentNumber+=1
            lowerLevel-=1
        if (upperLevel<= lowerLevel):
            for i in range(lowerLevel,upperLevel-1,-1):
                A[i][leftLevel] = currentNumber
                currentNumber+=1
            leftLevel+=1
    return A
print(spiralOrder(2))
