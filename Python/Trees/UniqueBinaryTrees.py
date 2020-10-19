from BST import *
def findResult(num):
    if num == 0:
        return []
    return helper(1,num)

def helper(n,m):
    result = []
    if (n>m):
        result.append(None)
        return result
    
    for i in range(n,m+1):
        r= helper(i+1,m)
        l = helper(n,i-1)
        print(i)
        for lt in l :
            for rt in r:
                curr = Node(i)
                curr.left = lt
                curr.right = rt
                result.append(curr)
    return result

result = findResult(2)
print(result)

