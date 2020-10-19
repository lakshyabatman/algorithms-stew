#We need to work more on it!
#It's okay, I'm still noob


from BST import *

def Recover (root):
    first = pre = second= None
    Inorder(root,first,pre,second)
    helpSwap(first,second)

def Inorder(root,first,pre,second):
    if root is None:
        return
    Inorder(root.left,first,pre,second)
    if pre is None:
        pre = root
    else:
        if(pre.value> root.value):
            if first == None:
                first = pre
            second = root
        pre = root
    Inorder(root.right,first,pre,second)
def helpSwap(first,second):
    first.value, second.value = second.value , first.value

