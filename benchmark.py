from random import randint
import time
from shellSort.shellSort import shellSort
from selectionSort.selectionSort import selectionSort
from radixSort.radixSort import radixSort
from quickSort.quickSort import quickSort
from mergeSort.mergeSort import mergeSort
from insertionSort.insertionSort import insertionSort
from heapSort.heapSort import heapSort
from countingSort.countingSort import countingSort
from bucketSort.bucketSort import bucketSort
from bubbleSort.bubbleSort import bubbleSort

sort_algorithms = [
    "bubbleSort",
    # "bucketSort",
    "countingSort",
    "heapSort",
    "insertionSort",
    "mergeSort",
    "quickSort",
    "radixSort",
    "selectionSort",
    "shellSort",
]

rounds = 5
n = [10, 100, 1000, 10000, 100000]

for algorithm in sort_algorithms:
    print(algorithm)
    for size in n:
        print(size)
        total_time = 0
        for i in range(rounds):
            data = [randint(1, 1e6) for i in range(size)]
            start = time.time()
            eval(f"{algorithm}(data)")
            end = time.time()
            total_time += end - start
        print(total_time / rounds)
        print("-------------------------------------------")
