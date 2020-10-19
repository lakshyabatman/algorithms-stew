from LinkedList import *

def ReverseLinkedList(root):
    NEXT = root.next.next
    CURR = root.next
    PREV = root
    PREV.next = None
    while CURR is not None:
        CURR.next = PREV
        PREV = CURR
        CURR = NEXT
        if NEXT is not None:
            NEXT = NEXT.next
    return PREV
    

root = ReverseLinkedList(root)
print(root.next.value)
