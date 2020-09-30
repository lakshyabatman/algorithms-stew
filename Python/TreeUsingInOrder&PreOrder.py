import queue
class BinaryTreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def buildTreePreOrder(preorder, inorder):
    if not inorder or not preorder:
        return None
    root_data=preorder[0]
    x=inorder.index(root_data)
    leftInOrder=inorder[:x]
    rightInOrder=inorder[x+1:]
    l=len(leftInOrder)
    leftPreOrder=preorder[1:l+1]
    rightPreOrder=preorder[l+1:]
    root=BinaryTreeNode(root_data)
    root.left=buildTreePreOrder(leftPreOrder,leftInOrder)
    root.right=buildTreePreOrder(rightPreOrder,rightInOrder)
    return root


def printLevelATNewLine(root):
    if root==None:
        return
    inputQ = queue.Queue()
    outputQ = queue.Queue()
    inputQ.put(root)
    while not inputQ.empty():
        while not inputQ.empty():
            curr = inputQ.get()
            print(curr.data, end=' ')
            if curr.left!=None:
                outputQ.put(curr.left)
            if curr.right!=None:
                outputQ.put(curr.right)
        print()
        inputQ, outputQ = outputQ, inputQ

# Main
n=int(input())
preorder = [int(i) for i in input().strip().split()]
inorder = [int(i) for i in input().strip().split()]
root = buildTreePreOrder(preorder, inorder)
printLevelATNewLine(root)
