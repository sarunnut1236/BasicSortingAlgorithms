// https://www.geeksforgeeks.org/timsort/
#include <bits/stdc++.h>
using namespace std;

const int MIN_MERGE = 32;

int MIN_MERGELength(int n)
{
    int r = 0;
    while (n >= MIN_MERGE)
    {
        r |= (n & 1);
        n >>= 1;
    }
    return n + r;
}

void insertionSort(vector<int> &arr, int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void merge(vector<int> &arr, int l, int m, int r)
{
    int len1 = m - l + 1, len2 = r - m;
    vector<int> left(len1), right(len2);
    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < len2; j++)
        right[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < len1)
        arr[k++] = left[i++];
    while (j < len2)
        arr[k++] = right[j++];
}

void timSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i += MIN_MERGE)
        insertionSort(arr, i, min((i + MIN_MERGE - 1), (n - 1)));

    for (int size = MIN_MERGE; size < n; size = 2 * size)
    {
        for (int left = 0; left < n; left += 2 * size)
        {
            int right = min((left + 2 * size - 1), (n - 1));
            int mid = min(left + size - 1, (n - 1));
            // if (n == 10000)
            //     cout << left << " " << mid << " " << right << endl;
            merge(arr, left, mid, right);
        }
    }
}