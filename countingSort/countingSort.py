# Counting Sort in python
# Optimized for both positive and negative integers
# works only ascending order
def countingSort(array):
    min  = min(array)
    max = max(array)
    
    temp = {key : 0 for key in range(min, max)}
    for value in array:
        temp[value] += 1
    
    array = list()
    for key in range(min, max):
        while temp[key] > 0:
            array.append(key)
            temp[key] -= 1
    return