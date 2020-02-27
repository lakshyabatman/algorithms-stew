def addBinary(num1,num2):
    carry =0
    result = []
    # Normalise both numbers in array of same size with numbers pushed to right side
    num1List = [i for i in str(num1)]
    num2List = [i for i in str(num2)]
    num1Size = len(str(num1))
    num2Size = len(str(num2))
    if(num1Size> num2Size):
        for i in range(num1Size - num2Size):
            num2List.insert(0,0)
    if(num1Size - num2Size):
        for i in range(num2Size - num1Size):
            num1List.insert(0,0)
    
    for i in range(1,len(num1List)+1):
        tmp = carry+ int(num1List[-i])+ int(num2List[-i])
        carry = 1 if tmp>=2 else 0
        tmp = 0 if tmp%2==0 else 1
        result.insert(0,tmp)
    result.insert(0,carry)
    return result
        


            
num1 = 10
num2 = 1
print(addBinary(num1,num2))