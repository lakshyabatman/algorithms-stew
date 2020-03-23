from BST import *

def PathSum(root,Sum):
    if root is None:
        return (Sum == 0)
    ans = 0
    subSum = Sum - root.value
    if subSum == 0 and root.left == None and root.right == None:
        return 1
    if root.left:
        ans = ans or PathSum(root.left,subSum)
    if root.right: 
        ans = ans or PathSum(root.right,subSum)
    return ans


root = Node(4)
insert(root,3)
insert(root,5)
insert(root,6)
insert(root,1)
insert(root,10)
print(PathSum(root,25))