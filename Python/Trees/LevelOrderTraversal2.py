from BST import *

def LevelOrder(root):
    inverseQueue=[]
    result=[]
    height=1
    inverseQueue.insert(0,root)
    while len(inverseQueue)>0:
        temp=[]
        for i in range(1,2**(height-1)+1):
            if len(inverseQueue)>0:
                node = inverseQueue.pop()
                temp.append(node.value)
                if node.left:
                    inverseQueue.insert(0,node.left)
                if node.right:
                    inverseQueue.insert(0,node.right)
        height+=1
        result.insert(0,temp)
    return result

root = Node(3)
insert(root,1)
insert(root,5)
insert(root,6)
insert(root,15)
insert(root,7)
insert(root,9)
insert(root,20)
insert(root,2)

print(LevelOrder(root))




