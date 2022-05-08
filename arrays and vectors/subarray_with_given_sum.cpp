#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
{
    // Your code here
    int i = 0;
    int j = 0;
    int cs = 0;
    vector<int> temp;
    bool oneans = false;
    while (j < n and oneans == false)
    {
        cs += arr[j];
        j++;

        while (cs > s and i < j)
        {
            cs = cs - arr[i];
            i++;
        }
        if (cs == s)
        {
            oneans = true;
            return {i + 1, j};
        }
    }
    return {-1, -1};
}

int main()
{
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> result = subarraySum(arr, 5, 12);
    for (auto i : result)
    {
        cout << result[i] << " ";
    }
}