#sort without specific comparator
from selectionSort.selectionSort import selectionSort


data = [-3, 5, 77, 51, -2]
selectionSort(data)
print('Sorted Array in Ascending Order:')
print(data)

#sort with specific comparator
data = [6, 5, 3, 2, -1]
comp = lambda x, y : x > y
selectionSort(data, comp)
print('Sorted Array in Descending Order:')
print(data)