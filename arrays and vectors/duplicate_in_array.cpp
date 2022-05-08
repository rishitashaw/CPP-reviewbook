#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n)
{
    // code here
    vector<int> result;
    unordered_set<int> s;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) != s.end())
        {
            s.insert(arr[i]);
        }
        else
        {
            result.push_back(arr[i]);
        }
    }
    if (result.size() == 0)
    {
        return {-1};
    }
    return result;
}

int main()
{
    26;
    13 9 25 1 1 0 22 13 22 20 3 8 11 25 10 3 15 11 19 20 2 4 25 14 23 14;
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> result = duplicates(arr, n);
    for (auto i : result)
    {
        cout << result[i] << " ";
    }
}