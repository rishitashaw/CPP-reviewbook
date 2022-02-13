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

    if (i <= mid)
    {
        temp.push_back(a[i++]);
    }
    if (j <= e)
    {
        temp.push_back(a[j++]);
    }

    int k = 0;
    for (int idx = 0; idx <= e; idx++)
    {
        a[idx] = temp[k++];
    }
    return;
}

void merge_sort(vector<int> &a, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);

    return merge(a, s, e);
}

int main()
{
    vector<int> a{10, 5, 2, 0, 7, 6, 4};
    merge_sort(a, a[0], a.size());

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}