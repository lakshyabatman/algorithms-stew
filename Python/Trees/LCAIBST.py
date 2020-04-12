# ============================
# Lowest Common Ancestor in BST
# ============================
from BST import *

def findResult (root,a,b):
    if root.value > a and root.value < b:
        return root
    elif root.value <a and root.value < b:
        findResult(root.right,a,b)
    elif root.value >a and root.value > b:
        findResult(root.left,a,b)
    else:
        return None
print(findResult(root,1,6).value)