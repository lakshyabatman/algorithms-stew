from BST import *
def BSTrightView(root):
    maxLevel = [0]
    BSTrightViewUtil(root,1,maxLevel)
def BSTrightViewUtil(root,level,maxLevel):
    if root is None:
        return 
    if level> maxLevel[0]:
        print(root.value)
        maxLevel[0] = level
    level+=1
    BSTrightViewUtil(root.right,level,maxLevel)
    BSTrightViewUtil(root.left,level,maxLevel)

   
BSTrightView(root)