class Node:
    def __init__(self,value):
        self.value = value
        self.left = None
        self.right = None

def insert(root,value):
    if root is None:
        root = Node(value)
        return root
    else:
        if(root.value> value):
            if root.left is None:
                root.left = Node(value)
            else:
                insert(root.left,value)
        else:
            if root.right is None:
                root.right = Node(value)
            else:
                insert(root.right,value)
    balance = getBalance(root)
    if(balance> 1 or balance<-1):
        if balance>1:
            # Disbalance comes from left side
            if root.left.right is None:
                # We need to run left rotate
                print("Left rotate")
                # root = leftRotate(root)
            else:
                # Have to left right rotate
                print("Hello")

 

def getBalance(root):
    leftHeight = findHeight(root.left)
    rightHeight = findHeight(root.right)
    return abs(rightHeight-leftHeight)

def findHeight(root):
    if root is None:
        return -1
    leftHeight = findHeight(root.left)
    rightHeight = findHeight(root.right)
    return max(leftHeight,rightHeight)+1

def leftRotate(root):
    tmp = root.left
    tmp.right = root
    return tmp

    
root = Node(3)
insert(root,2)
insert(root,1)
insert(root,4)
insert(root,5)
