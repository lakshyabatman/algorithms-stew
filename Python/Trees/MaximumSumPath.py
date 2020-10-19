from BST import *
def FindMaxSum(root,maxValue):
    if root is None:
        return 0
    l = FindMaxSum(root.left,maxValue)
    r = FindMaxSum(root.right,maxValue)
    currentMax = root.value + max(l,r)
    maxValue[0] = max(maxValue[0],l+r+root.value)
    return currentMax


root = Node(4)
insert(root,3)
insert(root,5)
insert(root,6)
insert(root,1)
insert(root,10)
maxValue=[float('-inf')]
FindMaxSum(root,maxValue)
print(maxValue[0])