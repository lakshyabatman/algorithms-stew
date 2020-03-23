from BST import *
def pathSum(root,num):
    paths = []
    findPaths(root, Sum = num, current = [], paths = paths)
    return paths

def findPaths(root, Sum,current, paths):
    if root == None:
        return
    current.append(root.value)
    if root.value == Sum and root.left == None and root.right == None:
        paths.append(current)
        return
    findPaths(root.left,Sum-root.value,current = [i for i in current],paths = paths)
    findPaths(root.right,Sum-root.value,current= [i for i in current],paths =paths)

root = Node(4)
insert(root,3)
insert(root,5)
insert(root,6)
insert(root,1)
insert(root,10)
print(pathSum(root,25))

