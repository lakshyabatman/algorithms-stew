from BST import *

def BuildTree(arr,start,end):

    if start>end:
        return
    mid = (start+end)//2
    root = Node(arr[mid])
    root.left = BuildTree(arr,start,mid-1)
    root.right = BuildTree(arr,mid+1,end)
    return root

arr= [1,2,3,4,5,6,7]
preorder(BuildTree(arr,0,len(arr)-1))

