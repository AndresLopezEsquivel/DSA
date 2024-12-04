# Steps to implement the quick sort algorithm
# 1. An array with values to sort
# 2. A quickSort method that calls itself (recursion) if the sub-array has a size larger than 1.
# 3. A partition method that receives a sub-array, moves values around, swaps the pivot element into the sub-array and returns the index where the next split in sub-arrays happens.

def partition(array, low, high):
    pivot = array[high] # the last value in the array is the pivot element
    i = low - 1

    for j in range(low, high):
        if array[j] <= pivot:
            i += 1
            array[i], array[j] = array[j], array[i]
    array[i+1], array[high] = array[high], array[i+1]
    return i+1

def quicksort(array, low=0, high=None):
    if high is None:
        high = len(array) - 1
    if low < high:
        pivot_idx = partition(array, low, high)
        quicksort(array, low, pivot_idx-1)
        quicksort(array, pivot_idx+1, high)
