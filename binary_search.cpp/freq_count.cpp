#include <bits/stdc++.h>

using namespace std;

int lower_bound(vector<int> a, int key)
{
    int s = 0;
    int e = a.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            e = mid - 1;
            ans = mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int upper_bound(vector<int> a, int key)
{
    int s = 0;
    int e = a.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            s = mid + 1;
            ans = mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v{0, 1, 1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 10};
    cout << upper_bound(v, 1) - lower_bound(v, 1) + 1 << endl;
}