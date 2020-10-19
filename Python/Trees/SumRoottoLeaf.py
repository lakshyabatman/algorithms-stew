from BST import *
def SumtoLeaf(root):

    if root is None:
        return 0
    result = []
    SumtoLeafUtil(root,result,"")
    result = [int(i) for i in result]
    return sum(result)

def SumtoLeafUtil(root,resultArray, concatString):
    concatString+=str(root.value)
    if root.left is not None:
        SumtoLeafUtil(root.left,resultArray,concatString)
    if root.right is not None:
        SumtoLeafUtil(root.right,resultArray,concatString)
    if root.left is None and root.right is None:
        resultArray.append(concatString)

result = SumtoLeaf(root)
print(result)