#include <bits/stdc++.h>

using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
    unordered_set<int> s;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = target - arr[i];
        if (s.find(x) != s.end())
        {
            result.push_back(x);
            result.push_back(i);
            return result;
        }

        s.insert(arr[i]);
    }
    return result;
}

int main()
{
    int target = 4;
    vector<int> arr{1, 0, 5, 2, 3, -6, 9, 10};

    auto p = pairSum(arr, target);
    if (p.size() == 0)
    {
        cout << "no solution" << endl;
    }
    else
    {
        cout << p[0] << " " << p[1] << endl;
    }
    return 0;
}