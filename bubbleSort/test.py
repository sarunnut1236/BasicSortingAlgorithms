#sort without specific comparator
from bubbleSort import bubbleSort


data = [-2, 45, 0, 11, -9]
bubbleSort(data)
print('Sorted Array in Ascending Order:')
print(data)

#sort with specific comparator
data = [-2, 45, 0, 11, -9]
comp = lambda x, y : x > y
bubbleSort(data, comp)
print('Sorted Array in Descending Order:')
print(data)