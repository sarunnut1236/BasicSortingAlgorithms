#include <bits/stdc++.h>
using namespace std;

//Shell sort in C++

template <typename T,
            typename Comp = less<T> >

void shellSort(vector<T> &v, Comp mLess = Comp()){

    vector<int> magicNumber = {701, 301, 132, 57, 23, 10, 4, 1};

    for(int gapIdx = 0; gapIdx < magicNumber.size(); ++gapIdx){

        int gap = magicNumber[gapIdx];
        if(gap > v.size()) continue;

        for(int i = gap; i < v.size(); ++i){

            T temp = v[i];
            int j = i;

            for(j = i; (j >= gap) && mLess(temp, v[j -gap]); j -= gap){
                v[j] = v[j -gap];
            }
            v[j] = temp;
        }
    }
}