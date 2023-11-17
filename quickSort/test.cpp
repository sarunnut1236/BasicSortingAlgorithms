#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3,4,6,2,1,7,8,2,9,3,1,12,-4,0,0,33,5};
    quickSort(arr);
    cout << "Sorted array in Ascending order:\n";
    for(int i = 0; i < (int)arr.size(); ++i){
        cout << arr[i] << " ";
    }
    quickSort(arr, greater<int>());
    cout << "\nSorted array in Descending order:\n";
    for(int i = 0; i < (int)arr.size(); ++i){
        cout << arr[i] << " ";
    }
}