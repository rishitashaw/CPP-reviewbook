#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &a, int s, int e)
{
    int pivot = a[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
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

int quickSelect(vector<int> &arr, int s, int e, int k)
{
    int p = partition(arr, s, e);

    if (p == k)
    {
        return arr[p];
    }
    else if (k < p)
    {
        return quickSelect(arr, s, p - 1, k);
    }
    else
    {
        return quickSelect(arr, p + 1, e, k);
    }
}

int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size();
    int k = 1;

    int result = quickSelect(arr, s, e, k);
    cout << result << endl;
}