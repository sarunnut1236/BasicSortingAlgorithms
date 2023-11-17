#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
    for(int x : arr){
        cout << x << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> data = {9, 5, 1, 4, 3, 634};
    insertionSort(data);
    cout << "Sorted array in ascending order:\n";
    printArray(data);

    insertionSort(data, std::greater<int>());
    cout << "Sorted array in descending order:\n";
    printArray(data);
}