
def common_sub(str1,str2):

    if(len(str1)==1 or len(str2)==1):
        return 1
    
    if(str1[-1]==str2[-1]):
        count=common_sub(str1[:-1],str2[:-1])+1
    else:
        count=max(common_sub(str1[:-1],str2),common_sub(str1,str2[:-1]))
    return count

str1="abcdaf"
str2="acbcf"
com=common_sub(str1,str2)
print(com)