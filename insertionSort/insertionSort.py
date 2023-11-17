#insertion sort in python
def insertionSort(array, mLess = lambda x, y : x < y):

	for step in range(1, len(array)):
		value = array[step]
		j = step -1

		#compare value with each element on the left of it until it is less than an element
		while j >= 0 and mLess(value, array[j]):
			array[j +1] = array[j]
			j -= 1
		
		#place the value after the element just less than it
		array[j +1] = value
	return