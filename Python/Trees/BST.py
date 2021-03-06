
class Node:
    def __init__(self,value):
        self.value=value
        self.left=None
        self.right=None
    
    
def insert(root,value):
    if root is None:
        root = Node(value)
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
def preorder(root):
    if root is not None:
        print(root.value)
        preorder(root.left)
        preorder(root.right)
        
def inorder(root):
    if root is not None:
        inorder(root.left)
        print(root.value)
        inorder(root.right)

root = Node(4)
insert(root,3)
insert(root,5)
insert(root,6)
insert(root,1)
insert(root,10)