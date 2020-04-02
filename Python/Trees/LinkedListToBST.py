from BST import *
class LinkedListNode:
    def __init__(self,value):
        self.value = value
        self.next = None

def addLikedListNode(head,value):
    if head.next == None:
        temp = LinkedListNode(value)
        head.next = temp
    else:
        addLikedListNode(head.next,value)

def getLength(head):
    temp = head
    length = 0
    while temp!= None:
        length+=1
        temp = temp.next
    return length

def BuildTree(head, start,end):
    if head == None or start>end:
        return
    temp = head
    mid = (start+end)//2
    root = None
    for i in range(mid):
        temp = temp.next
    root = Node(temp.value)
    root.left = BuildTree(head,start,mid-1)
    root.right = BuildTree(head,mid+1,end)
    return root


    

head = LinkedListNode(1)
addLikedListNode(head,2)
addLikedListNode(head,3)
addLikedListNode(head,4)
lenght = getLength(head)
# print(lenght)
root = BuildTree(head,0,lenght-1)
preorder(root)