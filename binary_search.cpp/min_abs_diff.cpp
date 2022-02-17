#include <bits/stdc++.h>

using namespace std;

int minAbsDiff(vector<int> a, vector<int> b)
{
    int diff = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            if (a[i] - b[i] < diff)
            {
                diff = a[i] - b[i];
            }
        }
        else
        {
            if (b[i] - a[i] < diff)
            {
                diff = b[i] - a[i];
            }
        }
    }
    return diff;
}

int main()
{
    vector<int> a{1, 7, 5};
    vector<int> b{2, 3, 5};

    int result = minAbsDiff(a, b);
    cout << result << endl;
}