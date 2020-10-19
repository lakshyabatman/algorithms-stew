import functools
def compareNumber(a,b):
    a = str(a)
    b = str(b)
    if int(a+b)<int(b+a):
        return -1
    else:
        return 1
def largestNumber(A):
    A = sorted(A, key =functools.cmp_to_key(compareNumber))
    A.reverse()
    result= ""
    for i in A:
        result+=str(i)
    return int(result)

A = [9,5,13,9]
print(largestNumber(A))