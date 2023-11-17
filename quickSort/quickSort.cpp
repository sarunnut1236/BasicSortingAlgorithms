// Quick Sort in C++
// using Median of Three method to find suitable pivot for partitioning

#include <iostream>
#include <vector>
using namespace std;

template < typename T,
            typename Comp = less<T> >
T median_of_three(T first, T second, T third, Comp mLess = Comp()){
    vector<T> temp = {first, second, third};

    // insertion sort in this function
    for(int step = 1; step < (int)temp.size(); ++step){
        T value = temp[step];
        int j = step -1;
        while(j >= 0 && mLess(value, temp[j])){
            temp[j +1] = temp[j];
            --j;
        }
        temp[j +1] = value;
    }
    // end insertion sort

    return temp[1];
}

template <typename T,
            typename Comp = less<T> >
int partition(vector<T> &arr, int start, int stop, Comp mLess = Comp()){
    int mid = (start + stop) >> 2;
    T pivot = median_of_three(arr[start], arr[mid], arr[stop]);

    int left = --start;
    int right = ++stop;

    while(left < right){

        do{
            ++left;
        }
        while(mLess(arr[left], pivot));

        do{
            --right;
        }
        while(mLess(pivot, arr[right]));

        if(left < right) swap(arr[left], arr[right]);
        else             return right;
    }
    return right;
}

template <typename T,
            typename Comp = less<T> >
void quickSortAux(vector<T> &arr, int start, int stop, Comp mLess = Comp()){
    if(start < stop){
        int pivot = partition(arr, start, stop, mLess);
        quickSortAux(arr, start, pivot, mLess);
        quickSortAux(arr, pivot +1, stop, mLess);
    }
}

template <typename T,
            typename Comp = less<T> >
void quickSort(vector<T> &arr, Comp mLess = Comp()){
    quickSortAux(arr, 0, (int)arr.size() -1, mLess);
}