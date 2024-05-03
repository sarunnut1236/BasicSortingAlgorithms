#include <bits/stdc++.h>
#include "shellSort/shellSort.cpp"
#include "selectionSort/selectionSort.cpp"
#include "radixSort/radixSort.cpp"
#include "quickSort/quickSort.cpp"
#include "mergeSort/mergeSort.cpp"
#include "insertionSort/insertionSort.cpp"
#include "heapSort/heapSort.cpp"
#include "countingSort/countingSort.cpp"
#include "bucketSort/bucketSort.c"
#include "bubbleSort/bubbleSort.cpp"
#include "timSort/timSort.cpp"
#include "introSort/introSort.cpp"
using namespace std;

string sort_algorithms_all[] = {
    // "bubbleSort",
    // "bucketSort",
    // "countingSort",
    // "heapSort",
    // "insertionSort",
    // "mergeSort",
    // "quickSort",
    // "radixSort",
    // "selectionSort",
    // "shellSort",
    // "timSort",
    // "introSort",
    // "stdSort",
    // "stdStableSort",
};

string sort_algorithms[] = {
    "bubbleSort",
    "countingSort",
    "heapSort",
    "insertionSort",
    "mergeSort",
    "quickSort",
    "radixSort",
    "selectionSort",
    "shellSort",
    "timSort",
    "introSort",
};

int rounds = 5;
static int n[] = {10, 100, 1000, 10000, 100000};

int main()
{
    cout << "Benchmarking in C++...\n";
    for (auto algo : sort_algorithms)
    {
        cout << algo << "\n";
        for (auto size : n)
        {
            // cout << size << "\n";
            for (int i = 0; i < rounds; ++i)
            {
                srand(i);
                vector<int> data;
                for (int j = 0; j < size; ++j)
                {
                    data.push_back(rand());
                }
                int *data_arr = &data[0];
                auto start = chrono::high_resolution_clock::now();
                if (algo == "bubbleSort")
                    bubbleSort(data);
                else if (algo == "countingSort")
                    countingSort(data);
                else if (algo == "heapSort")
                    heapSort(data);
                else if (algo == "insertionSort")
                    insertionSort(data);
                else if (algo == "mergeSort")
                    mergeSort(data);
                else if (algo == "quickSort")
                    quickSort(data);
                else if (algo == "radixSort")
                    radixsort(data_arr, size);
                else if (algo == "selectionSort")
                    selectionSort(data);
                else if (algo == "shellSort")
                    shellSort(data);
                else if (algo == "timSort")
                    timSort(data);
                else if (algo == "introSort")
                    introSort(data_arr, data_arr, data_arr + size - 1);
                else if (algo == "bucketSort")
                    BucketSort(data_arr);
                else if (algo == "stdSort")
                    sort(data.begin(), data.end());
                else if (algo == "stdStableSort")
                    stable_sort(data.begin(), data.end());
                auto stop = chrono::high_resolution_clock::now();
                for (int i = 0; i < size - 1; i++)
                {
                    if (data[i] > data[i + 1])
                    {
                        cout << "(Sorting failed at index " << i << ")\t";
                        break;
                    }
                }
                auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
                cout << duration.count() << endl;
            }
        }
        cout << "Benchmarking " << algo << "... Done!\n";
    }
    return 0;
}