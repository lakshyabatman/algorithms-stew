def isBalanced(par):
    HashMap = {
        "{":"}",
        "[":"]",
        "(":")"
    }
    stack=[]
    for i in [p for p in par]:
        if i in HashMap.keys():
            # For opening parenthese
            stack.append(i)
        else:
            # For closing parenthese
            tmp= stack.pop(-1)
            if(HashMap[tmp]==i):
                continue
            else:
                return "Unbalanced"
    return "Balanced"


par = "(){}[]"
print(isBalanced(par))