#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;

    vector<int> temp;

    while (i <= mid and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k++];
    }
    return;
}

void merge_sort(vector<int> &a, int s, int e)
{
    if (s >= e)
        return;

    int m = (s + e) / 2;

    merge_sort(a, s, m);
    merge_sort(a, m + 1, e);

    return merge(a, s, e);
}

int main()
{
    vector<int> a{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = a.size() - 1;
    merge_sort(a, s, e);

    for (int idx = 0; idx < a.size(); idx++)
    {
        cout << a[idx] << " ";
    }
}