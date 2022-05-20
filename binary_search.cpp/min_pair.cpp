#include <bits/stdc++.h>

using namespace std;

void min_pairs(vector<int> a, vector<int> b)
{

    sort(b.begin(), b.end());
    int p1, p2, diff = INT_MAX;

    for (auto x : a)
    {
        int lb = lower_bound(b.begin(), b.end(), x) - b.begin();

        if (lb >= 1 and x - b[lb - 1] < diff)
        {
            diff = x - b[lb - 1];
            p2 = x;
            p1 = b[lb - 1];
        }
        if (lb != b.size() and b[lb - 1] - x < diff)
        {
            diff = b[lb - 1] - x;
            p1 = x;
            p2 = b[lb];
        }
    }
    cout << p1 << " " << p2 << endl;
    return;
}

int main()
{
    vector<int> a{-1, 5, 10, 20, 3};
    vector<int> b{26, 134, 135, 15, 17};
    min_pairs(a, b);
}