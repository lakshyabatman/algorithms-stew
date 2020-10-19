# =========================
"""
    Inorder trvaersal of bst
    with "#" if node is none

"""
#==========================
from BST import *
def Inorder(root,result):
    if root is None:
        result.append("#")
        return
    result.append(root.value)
    Inorder(root.left,result)
    Inorder(root.right,result)

result= []
Inorder(root,result)
print(result)
