from BST import *
def addRightPointers(root):
    m = None
    if root is None:
        return 
    queue = list()
    queue.append(root)
    i = 0
    while len(queue) !=0:
        sibling = None
        for i in range(0,2**i):
            if len(queue) == 0:
                break
            print(queue)
            temp = queue.pop(0)
            if temp is None:
                continue
            temp.next = sibling
            queue.append(temp.right)
            queue.append(temp.left)
            sibling = temp
        i+=1
        sibling = None
    return root

root = addRightPointers(root)
print(root.left.left.next)



