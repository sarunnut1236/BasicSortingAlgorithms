from heapSort.heapSort import heapSort


array = [1, 12, 9, 5, 6, 10]
heapSort(array)
print("Sorted array in ascending order")
print(array)

heapSort(array, lambda x, y : y < x)
print("Sorted array in descending order")
print(array)