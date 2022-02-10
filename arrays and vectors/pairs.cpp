#include <bits/stdc++.h>

using namespace std;

int getIndex(vector<int> arr, int n)
{
    auto it = find(arr.begin(), arr.end(), n);
    if (it != arr.end())
    {
        int index = it - arr.begin();
        return index;
    }
    return -1;
}

vector<int> pairSum(vector<int> arr, int target)
{
    unordered_set<int> s;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = target - arr[i];

        if (s.find(x) != s.end())
        {
            if (getIndex(arr, x))
            {
                int index = getIndex(arr, x);
                result.push_back(index);
            }
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