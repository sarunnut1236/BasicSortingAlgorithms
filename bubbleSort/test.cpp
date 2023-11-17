#include <bits/stdc++.h>
using namespace std;

// print an array
void printArray(vector<int> v) {
    int size = v.size();
  for (int i = 0; i < size; ++i) {
    cout << "  " << v[i];
  }
  cout << "\n";
}

int main()
{
    vector<int> data = {-2, 45, 0, 11, -9};

		//sort without specific comparator
    bubbleSort(data);
    cout << "Sorted Array in Ascending Order:\n";
    printArray(data);

		//sort with specific comparator
    bubbleSort(data, std::greater<int>());
    cout << "Sorted Array in Descending Order:\n";
    printArray(data);
}