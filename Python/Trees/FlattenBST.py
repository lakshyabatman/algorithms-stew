from BST import *
class Node1:
    def __init__(self,value):
        self.value = value
        self.next = None

def TurnIntoLinkedList(arr, i=0):
    if i == len(arr):
        return None
    node = Node1(arr[i])
    i+=1
    node.next = TurnIntoLinkedList(arr,i)
    return node


def DisplayLinkedList(startNode):
    print(startNode.value, end=" - > ")
    if startNode.next:
        DisplayLinkedList(startNode.next)


def FlattenBST(root):
    Stack = []
    result = []
    Stack.insert(0,root)
    while len(Stack)>0:
        print(Stack)
        node = Stack.pop(0)
        if node is None:
            continue
        result.append(node.value)
        Stack.insert(0,node.right)
        Stack.insert(0,node.left)
    linkedList = TurnIntoLinkedList(result)
    DisplayLinkedList(linkedList)

root = Node(4)
insert(root,3)
insert(root,5)
insert(root,6)
insert(root,1)
insert(root,10)
FlattenBST(root)