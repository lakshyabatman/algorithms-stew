
def string_editing(source_str,dist_str):
    if(len(source_str)<1 or len(dist_str)<1):
        return max(len(source_str),len(dist_str))
    
    
    if(source_str[-1]==dist_str[-1]):
        count=string_editing(source_str[:-1],dist_str[:-1])
    else:
        count=min(string_editing(source_str,dist_str[:-1]),string_editing(source_str[:-1],dist_str),string_editing(source_str[:-1],dist_str[:-1]))+1
    
    return count


str1="abcdef"
str2="azced"
count=string_editing(source_str=str1,dist_str=str2)
print(count)