#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
    for(int i = 0; i < arr.size(); ++i) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    vector<int> data = {9, 8, 3, 7, 5, 6, 4, 1};
    shellSort(data);
    cout << "Sorted array in Ascending order:\n";
    printArray(data);
    shellSort(data, greater<int>());
    cout << "Sorted array in Descending order:\n";
    printArray(data);