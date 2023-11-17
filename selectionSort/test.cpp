#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
    for(size_t i = 0; i < arr.size(); ++i) cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    vector<int> data = {20, 12, 10, 15, 2};
    selectionSort(data);
    cout << "Sorted array in Ascending Order:\n";
    printArray(data);

    selectionSort(data, std::greater<int>());
    cout << "Sorted array in Descending Order: \n";
    printArray(data);
}