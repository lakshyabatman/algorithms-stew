def stringToInt(st):
    st = st.replace(" ","")
    nums=[]
    op=""
    for i in st:
        if(i=="-" or i =="+"):
            op=i
        else:
            if(op=="-"):
                tmp = -int(i)
            elif(op=="+"):
                tmp=int(i)
            else:
                tmp=int(str(nums.pop(-1))+i)
            nums.append(tmp)
    return sum(nums)
        
myString="-1  +2 + 3 -0  "
print(stringToInt(myString))