def subsetsUtil(A, subset, index):
    if index == len(A):
        return
    print(*subset)
    for i in range(index, len(A)):
        subset.append(A[i])
        subsetsUtil(A, subset, i + 1)         
        subset.pop(-1)
    return
 
def subsets(A):
    global res
    subset = []
    
    index = 0
    subsetsUtil(A, subset, index)
     


if __name__=='__main__':
    array = [1, 2, 3, 4, 5, 6, 7, 8]
    subsets(array)
