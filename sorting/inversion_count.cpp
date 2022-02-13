#include <bits/stdc++.h>

using namespace std;

int inversion(vector<int> &array, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;
    int cnt = 0;

    while (i <= m and j <= e)
    {
        if (array[i] < array[j])
        {
            temp.push_back(array[i]);
            i++;
        }
        else
        {
            cnt += (m - i + 1);
            temp.push_back(array[j]);
            j++;
        }
        if (i <= m)
        {
            temp.push_back(array[i++]);
        }
        if (j <= e)
        {
            temp.push_back(array[j++]);
        }
    }

    int k = 0;
    for (int idx = 0; idx <= e; idx++)
    {
        array[idx] = temp[k++];
    }
    return cnt;
}

int inversion_count(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return 0;
    }
    int mid = (s + e) / 2;
    int c1 = inversion_count(arr, s, mid);
    int c2 = inversion_count(arr, mid + 1, e);
    int c3 = inversion(arr, s, e);

    return c1 + c2 + c3;
}

int main()
{
    vector<int> arr{0, 5, 2, 3, 1};
    int s = 0;
    int e = arr.size() - 1;
    int result = inversion_count(arr, s, e);
    cout << result << endl;
}