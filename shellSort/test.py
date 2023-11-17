from shellSort.shellSort import shellSort


data = [9, 8, 3, 7, 5, 6, 4, 1]
shellSort(data)
print('Sorted Array in Ascending Order:')
print(data)

shellSort(data, lambda x, y : y < x)
print('Sorted Array in Descending Order:')
print(data)