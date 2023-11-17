from mergeSort.mergeSort import mergeSort


array = [6, 5, 12, 10, 9, 1]
array = mergeSort(array)
print("Sorted array in Ascending order: ")
print(array)

array = mergeSort(array, lambda x, y : y < x)
print("Sorted array in Descending order: ")
print(array)