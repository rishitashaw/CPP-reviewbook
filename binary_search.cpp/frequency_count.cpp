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
            ans = mid;
            e = mid - 1;
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
            ans = mid;
            s = mid + 1;
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
    vector<int> a{0, 1, 1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 10};
    int key = 1;
    int result = upper_bound(a, key) - lower_bound(a, key) + 1;
    cout << result << endl;
}