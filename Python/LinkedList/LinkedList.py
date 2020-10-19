class LinkedListNode:
    def __init__(self,value):
        self.value = value
        self.next = None
    
def insert(root,value):
    tmp = LinkedListNode(value)
    tmp.next = root
    return tmp
    
root = LinkedListNode(2)
root = insert(root,3)
root = insert(root,5)
root = insert(root,7)
