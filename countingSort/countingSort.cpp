// Counting Sort in python
// Optimized for both positive and negative integers
// works only in Ascending order

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(vector<int> &arr){
    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(), arr.end());

    vector<int> temp(max -min +1);
    for(int i = 0; i < (int)temp.size(); ++i)   temp[i] = 0;
    for(int i = 0; i < (int)arr.size(); ++i)    ++temp[arr[i] -min];
    for(int i = 0, j = 0; i < (int)temp.size(); ++i){
        while(temp[i] > 0){
            arr[j] = i +min;
            ++j;
            --temp[i];
        }
    }
}