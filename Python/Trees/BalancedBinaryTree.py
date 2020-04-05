from BST import *

def isBalanced(root):
    if root == None:
        return True
    if getHeight(root) == -1:
        return False
    return True

def getHeight(root):
    if root == None:
        return 0
    l = getHeight(root.left)
    r = getHeight(root.right)
    if (l==-1 or r==-1):
        return -1
    if abs(l-r)>1:
        return -1
    return (max(l,r)+1)

print(isBalanced(root))