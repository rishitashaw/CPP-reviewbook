#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &a, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid and j <= e)
    {
        if (a[i] < a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(a[i++]);
    }
    while (j <= e)
    {
        temp.push_back(a[j++]);
    }
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        a[idx] = temp[k++];
    }
    return;
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    return merge(arr, s, e);
}

int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}