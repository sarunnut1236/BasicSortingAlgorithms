#Optimized Bubble sort in python
def bubbleSort(array, mLess = lambda x, y : x < y):

    #loop to access each array element
    for i in range(len(array)):
        
        #keep track of swapping
        swapped = False
        
        #loop to compare elements
        for j in range(len(array) -i -1):

            #compare two adjacent elements using mLess comparator
            if mLess(array[j +1], array[j]):

                #swapping elements occurred
                temp = array[j]
                array[j] = array[j +1]
                array[j +1] = temp
                swapped = True
                    
            #check if the array is already sorted
            if not swapped:
                break