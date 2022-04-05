#include <bits/stdc++.h>

using namespace std;

int max_subarray_worst(vector<int> arr)
{
    int best = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            best = max(best, sum);
        }
    }
    return best;
}

int max_subarray_best(vector<int> arr)
{
    int best = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    return best;
}

int main()
{
    vector<int> arr{-1, 2, 4, -3, 5, 2, -5, 2};
    cout << max_subarray_worst(arr) << endl;
    cout << max_subarray_best(arr) << endl;
}