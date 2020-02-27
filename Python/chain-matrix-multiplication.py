import sys


def chain_matrix_multiplication(arr,i,j):
    if(i==j):
        return 0
    
    min_value=sys.maxsize

    for k in range(i,j):

        count= chain_matrix_multiplication(arr,i,k)+chain_matrix_multiplication(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]

        if(count<min_value):
            min_value=count

    return min_value

arr=[2,3,6,4,5]

best_combination=chain_matrix_multiplication(arr,1,len(arr)-1)
print(best_combination)
        