from BST import *
def findMin(root):
    '''
        Iterates to left most node and returns it's value!
    '''
    if root is not None:
        tmp = root
        while(tmp.left!=None):
            tmp= tmp.left
        return tmp.value


def findMax(root):
    '''
        Iterates to right most node and returns it's value!
    '''
    if root is not None:
        tmp = root
        while(tmp.right!=None):
            tmp = tmp.right
        return tmp.value

def findHeight(root):
    '''
        The idea is to find iterate to last node recursively to each side and returns maximum value + 1
                A   height = max(0,0)+1 => 1
             /     \
            B       C  height = max(-1,-1)+1 => 0
    '''
    if root is None:
        return -1
    leftHeight = findHeight(root.left)
    rightHeight = findHeight(root.right)
    return max(leftHeight,rightHeight)+1

def findDepth(root,value,depth=0):
    '''
        Irritating to all levels with depth = 0 to the target and incrementing depth on each passed level , till we reach target and retun value of depth.
        Make point: We're irritating left or right based on current root's value and target value
        Target = D
                A   A> D ,depth = 0
            //     \
            B       C   B> D , depth = 1
        //       \   
        D       E   Fount D , depth =2
    '''
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
    '''
        BFS => Breath First Search, The concept is that it goes to each level and irritate all nodes on that level, QUEUE is used for that 
    '''
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
    '''
        DFS => Depth First Search, we irritate deep first till very end,STACK is used,=.
    '''
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