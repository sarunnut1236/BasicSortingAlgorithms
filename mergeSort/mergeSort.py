# Merge Sort in python

def merge(left, right, mLess = lambda x, y : x < y):
    result = []
    i, j = 0, 0
    while i < len(left) and j < len(right):
        if mLess(left[i], right[j]):
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    return result + left[i:] + right[j:]

def mergeSort(array, mLess = lambda x, y : x < y):
    if len(array) < 2:
        return array
    
    else:
        mid = int(len(array) /2)
        left = mergeSort(array[:mid], mLess)
        right = mergeSort(array[mid:], mLess)
        return merge(left, right, mLess)