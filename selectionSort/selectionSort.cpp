#include <bits/stdc++.h>
using namespace std;

template <typename T,
           typename Comp = std::less<T> >

//Selecion sort in C++
void selectionSort(std::vector<T> &v, Comp mLess = Comp()){

    //loop through elements in the array
    for(size_t step = 0; step < v.size() -1; ++step){
        size_t min_idx = step;

        //loop through unsorted elements onwards
        for(size_t i = step +1; i < v.size(); ++i){

            //compare two elements using mLess comparator
            if(mLess(v[i], v[min_idx])){
                min_idx = i;
            }
        }

        //put min element to the correct position
        std::swap(v[min_idx], v[step]);
    }
}

void printArray(vector<int> arr){
    for(size_t i = 0; i < arr.size(); ++i) cout << arr[i] << " ";
    cout << "\n";
}