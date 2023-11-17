#Heapsort in python

#heapify function
#let i = root index
def heapify(array, mSize, root, mLess = lambda x, y : x < y):
	#find largest element among root and children
	largest = root
	left = 2*root +1
	right = 2*root +2

	if left < mSize and mLess(array[largest], array[left]):
		largest = left
	if right < mSize and mLess(array[largest], array[right]):
		largest = right

	#swap between largest element and root element if root isn't the largest element
	if(largest != root):
		array[root], array[largest] = array[largest], array[root]
		heapify(array, mSize, largest, mLess)

#heapSort function
def heapSort(array, mLess = lambda x, y : x < y):
	#build max heap
	n = len(array)
	for i in range(n //2, -1, -1):
		heapify(array, n , i, mLess)
	
	for i in range(n -1, 0, -1):
		#swap
		array[0], array[i] = array[i], array[0]
		#heapify root element
		heapify(array, i, 0, mLess)
	return