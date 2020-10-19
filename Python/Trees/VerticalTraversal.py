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

def VerticalOrder(root):
    Stack = []
    result = []
    Stack.append(root)
    while len(Stack)>0:
        node = Stack.pop()
        if node.right:
            Stack.append(node.right)
        if node.left:
            Stack.append(node.left)
        result.append(node.value)
    return result

def getVertivalOrder(root,hd,TreeMap):
    if root is None:
        return
    try:
        TreeMap[hd].append(root.value)
    except:
        TreeMap[hd]= [root.value]

    getVertivalOrder(root.left,hd-1,TreeMap)
    getVertivalOrder(root.right,hd+1,TreeMap)


def VerticalOrder2 (root):
    TreeMap = dict()
    hd =0
    getVertivalOrder(root,hd,TreeMap)
    for i in sorted(TreeMap):
        print(i ,":",TreeMap[i])

root = Node(3)
insert(root,1)
insert(root,5)
insert(root,6)
insert(root,15)
insert(root,7)
insert(root,9)
insert(root,20)
insert(root,2)

print(VerticalOrder(root))
print(VerticalOrder2(root))