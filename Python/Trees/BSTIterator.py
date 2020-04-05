from BST import *
class BSTIterator:
    def __init__(self,treeNode):
        self.root = treeNode
        self.stack = list()
        while self.root!= None:
            self.stack.append(self.root)
            self.root = self.root.left

    def next(self):
        if len(self.stack)!=0:
            temp = self.stack.pop()
            if temp.right is not None:
                self.stack.append(temp.right)
            return temp.value
    def isNext(self):
        return not(len(self.stack)==0)

bstIterator = BSTIterator(root)
print(bstIterator.next())
print(bstIterator.next())
print(bstIterator.next())
print(bstIterator.next())
print(bstIterator.isNext())

