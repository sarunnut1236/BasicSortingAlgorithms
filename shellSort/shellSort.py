#Shell sort in python

def shellSort(array, mLess = lambda x, y : x < y):
    
    magicNo = [701, 301, 132, 57, 23, 10, 4, 1]
    
    #Rearrange elements at each intervals
    for interval in magicNo:
        if interval > len(array):
            continue
        for i in range(interval, len(array)):
            temp = array[i]
            j = i
            while j >= interval and mLess(temp, array[j -interval]):
                array[j] = array[j -interval]
                j -= interval
            array[j] = temp
    return