#include <bits/stdc++.h>

using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    // code here
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cnt++;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 5, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getPairsCount(arr, n, 6);
    return 0;
}