# ============================
# Lowest Common Ancestor in Binary Tree
# ============================
from BST import *
def buildTreee(root, a,b):
    if root is None:
        return None
    if a == root.value or b == root.value:
        return root
    l = buildTreee(root.left, a, b)
    r = buildTreee(root.right,a,b)

    if l is not None and r is not None:
        return root
    elif l is None and r is None:
        return None
    else:
        # if l is not None:
        #     print("Sending value ", l.value)
        #     return l
        # else:
        #     print("Sending value ", r.value)
        #     return r
        return l if l is not None else r
print(buildTreee(root,1,6).value)
    