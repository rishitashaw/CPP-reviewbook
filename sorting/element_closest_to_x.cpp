#include <bits/stdc++.h>

using namespace std;

int nearestToX(vector<int> arr, int x)
{
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }

    auto it = s.lower_bound(x);

    if (it == s.begin())
    {
        return *it;
    }
    else if (it == s.end())
    {
        return *it;
    }
    else
    {
        int a = *it;
        it--;
        int b = *it;
        if (x - b < a - x)
            return b;
        else
            return a;
    }
}

int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    cout << nearestToX(arr, 6) << endl;
}