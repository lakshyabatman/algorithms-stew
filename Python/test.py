import math
 
def primesum(A):
            if A == 4:
                return [2,2]
            odds = []
            # We need to build odd prime numbers from 3 to A-1
            for i in range(3,A,2):
                odds.append(i)
            m =  math.ceil(math.sqrt(A))
            index = 0
            for i in range(len(odds)):
                if odds[i] == m:
                    index = i
            k = 0
            while k <=index:
                for j in range(k+1,len(odds)):
                    if odds[k]!=0:
                        if odds[j]%odds[k]==0:
                            odds[j] = 0
                k+=1
            del index
            del k
            odds = list(set(odds))
            odds.pop(0)
            i = 0
            while i<=len(odds)//2:
                j = len(odds)//2
                while j <len(odds):
                    if odds[i]+odds[j] == A:
                        return [odds[i],odds[j]]
                    j+=1
                i+=1
print(primesum(116))