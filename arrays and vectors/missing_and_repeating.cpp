#include <bits/stdc++.h>

using namespace std;

vector<int> findTwoElement(int arr[], int n)
{
    // code here
    vector<int> result;
    unordered_set<int> s;

    for (int i = 1; i <= n; i++)
    {
        if (i == arr[i - 1])
        {
            continue;
        }
        else
        {
            result.push_back(i);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
        {
            s.insert(arr[i])
        }
        else
        {
            result.push_back(arr[i]);
        }
    }
}

int main()
{
}