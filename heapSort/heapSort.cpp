#include <bits/stdc++.h>
using namespace std;

//heap sort in C++

//heapify function
template <typename T,
            typename Comp = std::less<T> >
void heapify(std::vector<T> &arr, size_t mSize, size_t root, Comp mLess = Comp()){
    //find the largest element among root and children
    size_t largest = root;
    size_t left = 2*root +1;
    size_t right = 2*root +2;

    if(left < mSize && mLess(arr[largest], arr[left])) largest = left;
    if(right < mSize && mLess(arr[largest], arr[right])) largest = right;

    //swap and continue heapifying if root isn't the largest element
    if(largest != root){
        std::swap(arr[root], arr[largest]);
        heapify(arr, mSize, largest, mLess);
    }
    return;
}

//heap sort function
template <typename T,
            typename Comp = std::less<T> >
void heapSort(std::vector<T> &arr, Comp mLess = Comp()){
    //build max heap
    size_t n = (int) arr.size();

    for(int i = (n -1) /2; i >= 0; --i){
        heapify(arr, n, i, mLess);
    }

    //heap sort
    for(int j = n -1; j >= 0; --j){
        //swap
        std::swap(arr[0], arr[j]);
        //heapify the root element
        heapify(arr, j, 0, mLess);
    }
    return;
}