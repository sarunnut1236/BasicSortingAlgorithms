# Radix Sort in python

# using counting sort to sort the elements in the basis of significant places
def countingSort(array, place):
    size = len(array)
    result = [0] *size
    count = [0] *10
    
    # calculate count of elements
    for i in range(0, size):
        index = array[i] //place
        count[index %10] += 1
        
    # calculate cumulative count
    for i in range(1, 10):
        count[i] += count[i -1];
        
    # place the elements in sorted order
    i = size -1
    while i >= 0:
        index = array[i] //place
        result[count[index %10] -1] = array[i]
        count[index %10] -= 1
        i -= 1
        pass
    
    for i in range(0, size):
        array[i] = result[i]
    return

# main function to implement radix sort
def radixSort(array):
    max_element = max(array)
    
    place = 1
    while max_element //place > 0:
        countingSort(array, place)
        place *= 10
    return