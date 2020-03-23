def test(A):
        A.sort()
        ans = 0
        print(A)
        for i in range(len(A)-2):
            k = len(A)-1
            j = i+1
            sum = A[i]+A[j]-A[k]
            print("SUM", sum, "i",A[i],"j",A[j],"K",A[k])
            if sum > 2 :
                k-=1
            elif sum < 2 and sum > 1:
                ans+=1
                j+=1
        return ans
def solve(A):
    A = [float(i) for i in A]
    return test(A)
A = [0.6, 0.7, 0.8, 1.2, 0.4]
print(solve(A))