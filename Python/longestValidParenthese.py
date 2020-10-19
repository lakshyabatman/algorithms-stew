def findLongestVPar(st):
    count=0
    results=[]
    HashMap = {
        "{":"}",
        "[":"]",
        "(":")"
    }
    stack=[]
    for i in [j for j in st]:
        if i in HashMap.keys():
            # For opening parenthese
            if(len(stack)>0):
                if(stack[-1]==i):
                    results.append(count)
                    count=0
            stack.append(i)  
        else:
            # For closing parenthese
            tmp= stack.pop(-1)
            if(HashMap[tmp]==i):
                # Valid match
                count+=2
                # print(tmp,i)
                continue
            else:
                # Not valid match
                print("Hi")
                results.append(count)
                count=0
    results.append(count)
    return max(results)



myStr="{[]()[]}(()"

print(findLongestVPar(myStr))