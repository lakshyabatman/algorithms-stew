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

def inorder(root):
    if root is not None:
        print(root.value)
        inorder(root.left)
        inorder(root.right)

def findMin(root):
    if root is not None:
        tmp = root
        while(tmp.left!=None):
            tmp= tmp.left
        return tmp.value


def findMax(root):
    if root is not None:
        tmp = root
        while(tmp.right!=None):
            tmp = tmp.right
        return tmp.value

def findHeight(root):
    if root is None:
        return -1
    leftHeight = findHeight(root.left)
    rightHeight = findHeight(root.right)
    return max(leftHeight,rightHeight)+1

def findDepth(root,value,depth=0):
    tmp=depth
    if root is  None:
        print("Value not found")
    if root.value == value:
        print("Depth is",tmp)
    elif root.value > value:
        tmp+=1
        findDepth(root.left,value,depth=tmp)
    else:
        tmp+=1
        findDepth(root.right,value,depth=tmp)

def BFS(root):
    queue = []
    queue.append(root)
    while len(queue)!=0:
        tmp1 = queue.pop(0)
        print(tmp1.value ,end = " ")
        if tmp1.left is not None:
            queue.append(tmp1.left)
        if tmp1.right is not None:
            queue.append(tmp1.right)
        
def DFS(root):
    stack = []
    stack.append(root)
    while len(stack)!=0:
        tmp1 = stack.pop()
        print(tmp1.value, end= " ")
        if tmp1.right is not None:
            stack.append(tmp1.right) 
        if tmp1.left is not None:
            stack.append(tmp1.left)
        
def isBinarySearchTree(root):
    flag = True
    if root is not None:
        if root.left is not None:
            flag = isBinarySearchTree(root.left) if(root.value > root.left.value) else False
        if root.right is not None:
            flag = isBinarySearchTree(root.left) if (root.value < root.right.value) else False
    return flag


def DeleteNode(root, value): 
    if root is None: 
        return root  
    if value < root.value: 
        root.left = DeleteNode(root.left, value) 
    elif(value > root.value): 
        root.right = DeleteNode(root.right, value) 
    else: 
        if root.left is None : 
            temp = root.right  
            root = None 
            return temp  
              
        elif root.right is None : 
            temp = root.left  
            root = None
            return temp 
        temp = findMin(root.right) 
        root.value = temp.value 
        root.right = DeleteNode(root.right , temp.value)   
    return root



root = Node(4)
insert(root,3)
insert(root,5)
insert(root,6)
insert(root,1)
insert(root,10)
root =  DeleteNode(root,10)
inorder(root)
# print(findMin(root))
# print(findMax(root))
# print(findHeight(root))
# findDepth(root=root,value=3)
# DFS(root)
# print(isBinarySearchTree(root))