#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &a, int s, int e)
{
    int pivot = a[e];
    int i = s - 1;

    for (int j = s; j <= e; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}

void quickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p, e);
}

int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;

    quickSort(arr, s, e);
    for (int idx = 0; idx < arr.size(); idx++)
    {
        cout << arr[idx] << " ";
    }
}