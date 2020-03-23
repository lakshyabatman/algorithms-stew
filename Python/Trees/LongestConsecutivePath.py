from BST import *
def LongestConPathUtil(root, previousNodeValue):
    if root is None:
        return 0
    if previousNodeValue == root.value -1 or root.value == previousNodeValue-1:
        return 1+ max(LongestConPathUtil(root.left,previousNodeValue=root.value),LongestConPathUtil(root.right,previousNodeValue=root.value))
    else:
        return max(LongestConPathUtil(root.left,previousNodeValue=root.value),LongestConPathUtil(root.right,previousNodeValue=root.value))

def LongestConPath(root):
    return 1+ LongestConPathUtil(root=root,previousNodeValue=root.value)

root = Node(4)
insert(root,3)
insert(root,5)
insert(root,6)
insert(root,2)
insert(root,1)
print(LongestConPath(root=root))