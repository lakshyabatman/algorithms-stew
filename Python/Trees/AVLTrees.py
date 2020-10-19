class AVLTREE:
    def __init__(self,value):
        self.value = value
        self.left = None
        self.right = None
        self.height = 1
    def insert(self,root,value):
        if not root:
            return AVLTREE(value)
        elif value > root.value:
            root.right = self.insert(root.right,value)
        else:
            root.left = self.insert(root.left,value)
        
        root.height = 1+ max(self.getHeight(root.left) , self.getHeight(root.right))
        balance = self.getBalance(root)

        if balance > 1 and value<root.left.value:
            return self.leftRotate(root)

        if balance > 1 and value > root.left.value:
            root.left = self.rightRotate(root.left)
            return self.leftRotate(root)
        
        if balance < -1 and value > root.right.value:
            return self.rightRotate(root)
        
        if balance < -1 and value < root.right.value:
            #Right left rotate
            root.right = self.leftRotate(root.right)
            return self.rightRotate(root)
        
        return root
    def getHeight(self,root):
        if not root:
            return 0
        return root.height
    
    def getBalance(self,root):
        if not root:
            return 0
        return self.getHeight(root.left) - self.getHeight(root.right)
    
    def leftRotate(self,root):
        if not root.left:
            return root
        temp = root.left
        root.left = temp.right
        temp.right = root
        return temp
    
    def rightRotate(self,root):
        if not root.right:
            return root
        temp = root.right
        root.right = temp.left
        temp.left = root
        return temp



newTree = AVLTREE(5)
newTree = newTree.insert(newTree,7)
newTree =newTree.insert(newTree,6)
print(newTree.value)
# newTree =newTree.insert(newTree,4)
# newTree.insert(newTree,1)
