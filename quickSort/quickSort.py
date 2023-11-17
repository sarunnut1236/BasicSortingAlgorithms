# Quick Sort in python
from statistics import median

def quickSort(array, mLess = lambda x, y : x < y):
    quickSortAux(array, 0, len(array) -1, mLess)
    return

def quickSortAux(array, start, stop, mLess = lambda x, y : x < y):
    if start < stop:
        pivot = partition(array, start, stop, mLess)
        quickSortAux(array, start, pivot, mLess)
        quickSortAux(array, pivot +1, stop, mLess)
    return

def partition(array, start, stop, mLess = lambda x, y : x < y):
    mid = (start + stop) //2
    pivot = median([array[start], array[mid], array[stop -1]])
    
    left = start -1
    right = stop +1

    while(left < right):
        while 1:
            left += 1
            if(not mLess(array[left], pivot)):
                break
        while 1:
            right -= 1
            if(mLess(array[right], pivot) or (array[right] == pivot)):
                break
        if(left < right):
            array[left], array[right] = array[right], array[left]
        else:
            return right
    return right