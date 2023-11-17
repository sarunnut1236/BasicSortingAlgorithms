#Selection sort in Python

def selectionSort(array, mLess = lambda x, y : x < y):
    
    #iterating elements in the array
    for step in range(len(array)):
        min_idx = step
        
        #iterating only the first unsorted element onwards
        for i in range(step +1, len(array)):
            
            #compare two elements using mLess comparator
            #set new minimum index
            if mLess(array[i], array[min_idx]):
                min_idx = i
           
        #put min at the correct position
        array[step], array[min_idx] = array[min_idx], array[step]