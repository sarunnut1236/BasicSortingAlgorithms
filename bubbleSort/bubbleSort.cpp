#include <bits/stdc++.h>
using namespace std;

template <typename T,
           typename Comp = std::less<T> >

//Optimized Bubble sort in C++
void bubbleSort(std::vector<T> &v, Comp mLess = Comp()){

	//loop to access each array element
	for(size_t i = 0; i < v.size() -1; ++i){

		//check if swapping occurs
		bool swapped = false;

		//loop to compare two elements
		for(size_t j = 0; j < v.size() -i -1; ++j){
			//compare two adjacent elements using mLess comparator

			if(mLess(v[j +1], v[j])){

				//swapping element occurs if elements aren't in intended order
				std::swap(v[j], v[j +1]);
				swapped = true;
			}
		}

		//check if an array is sorted
		if(!swapped){
			break;
		}
	}
}