
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
