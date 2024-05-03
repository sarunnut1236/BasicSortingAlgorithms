#include <bits/stdc++.h>
using namespace std;

// Optimized Merge Sort in C++
// Consists of 3 functions 1)merge, 2)mergeSortAux, 3)mergeSort

template <typename T,
          typename Comp = less<T>>
void merge(vector<T> &v, int start, int mid, int stop,
           vector<T> &temp, Comp mLess = Comp())
{
    int idxA = start;
    int idxB = mid;
    int idxTemp = 0;

    while ((idxA < mid) && (idxB < stop))
    {
        if (mLess(v[idxB], v[idxA]))
        {
            temp[idxTemp] = v[idxB];
            ++idxTemp;
            ++idxB;
        }
        else
        {
            temp[idxTemp] = v[idxA];
            ++idxTemp;
            ++idxA;
        }
    }
    while (idxA < mid)
    {
        temp[idxTemp] = v[idxA];
        ++idxTemp;
        ++idxA;
    }
    while (idxB < stop)
    {
        temp[idxTemp] = v[idxB];
        ++idxTemp;
        ++idxB;
    }

    for (int i = 0; i < stop - start; ++i)
    {
        v[start + i] = temp[i];
    }
}

template <typename T,
          typename Comp = less<T>>
void mergeSortAux(vector<T> &v, int start, int stop,
                  vector<T> &temp, Comp mLess = Comp())
{
    if (start < stop - 1)
    {
        int mid = (start + stop) >> 1;
        mergeSortAux(v, start, mid, temp, mLess);
        mergeSortAux(v, mid, stop, temp, mLess);
        merge(v, start, mid, stop, temp, mLess);
    }
}

template <typename T,
          typename Comp = less<T>>
void mergeSort(vector<T> &v, Comp mLess = Comp())
{
    vector<T> temp(v.size());
    mergeSortAux(v, 0, v.size(), temp, mLess);
}