from insertionSort.insertionSort import insertionSort


data = [9, 5, 1, 4, 3]
insertionSort(data)
print('Sorted Array in Ascending Order:')
print(data)

insertionSort(data, lambda x, y : y < x)
print("Sorted Array in Descending Order: ")
print(data)