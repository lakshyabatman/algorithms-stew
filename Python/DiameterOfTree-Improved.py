# this solution takes O(n) time in all cases


import queue
from sys import stdin,setrecursionlimit

class Node:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None
    

def levelOrderInput():
    tlist=list(map(int, stdin.readline().strip().split(" ")))
    start=0
    # l=len(tlist)
    data=tlist[start]
    start+=1
    if data!=-1:
        root=Node(data)
    else:
        return None
    q=queue.Queue()
    q.put(root)
    while not q.empty():
        current=q.get()
        data=tlist[start]
        start+=1
        if data!=-1:
            leftChild=Node(data)
            current.left=leftChild
            q.put(leftChild)
        data=tlist[start]
        start+=1
        if data!=-1:
            rightChild=Node(data)
            current.right=rightChild
            q.put(rightChild)
    return root

def heightDiameter(root):
    if root is None:
        return 0,0
    lh,ld=heightDiameter(root.left)
    rh,rd=heightDiameter(root.right)
    h=1 + max(lh,rh)
    d=lh+rh
    b=max(d,max(ld,rd))
    return h,b

# main
setrecursionlimit(10**6)
root=levelOrderInput()
h,d=heightDiameter(root)
print(d+1)