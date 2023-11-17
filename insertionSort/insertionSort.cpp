#include <bits/stdc++.h>
using namespace std;

//insertion sort in C++
template <typename T,
            typename Comp = std::less<T> >
void insertionSort(vector<T> &arr, Comp mLess = Comp()){
    for(int step = 1; step < (int)arr.size(); ++step){
        T value = arr[step];
        int j = step -1;

        //Compare each value with comparator
        //Compare to each element on the left until an element is less than the value
        while(j >= 0 && mLess(value, arr[j])){
            arr[j +1] = arr[j];
            --j;
        }
        arr[j +1] = value;
    }
    return;
}