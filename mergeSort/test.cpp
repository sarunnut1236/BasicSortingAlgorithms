#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,3,5,6,8,8,34,2346,7,8,-3,4,3,67,-99};
    mergeSort(arr);
    cout << "Merge-sorted array in Ascending order:\n";
    for(int i = 0; i < (int)arr.size(); ++i){
        cout << arr[i] << " ";
    }

    mergeSort(arr, greater<int>());
    cout << "\nMerge-sorted array in Descending order:\n";
    for(int i = 0; i < (int)arr.size(); ++i){
        cout << arr[i] << " ";
    }
}