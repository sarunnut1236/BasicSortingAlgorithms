#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    return;
}
int main()
{
    vector<int> arr = {1, 12, 9, 5, 6, 10, 2343454, 46, 32, -235};
    heapSort(arr);
    cout << "Sorted array in ascending order\n";
    printArray(arr);

    heapSort(arr, std::greater<int>());
    cout << "Sorted array in descending order\n";
    printArray(arr);
}