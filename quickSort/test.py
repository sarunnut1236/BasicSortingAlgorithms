from quickSort.quickSort import quickSort


array = [9, 1, 8, 2, 7, 3, 6, 4, 5, 324, 232, -324, 334, -34, 44]
quickSort(array)
print("Sorted array in Ascending order:")
print(array)
quickSort(array, lambda x, y : x >= y)
print("Sorted array in Descending order:")
print(array)