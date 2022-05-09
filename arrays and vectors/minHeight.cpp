#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    // code here

    int min_ele = arr[0];
    int max_ele = arr[n - 1];
    int result = max_ele - min_ele;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= k)
        {
            min_ele = min(arr[i] - k, arr[0] + k);
            max_ele = max(arr[i] + k, arr[n - 1] - k);
            result = min(result, max_ele - min_ele);
        }
        else
        {
            continue;
        }
    }
    return result;
}

int main()
{
    int arr[] = {3, 9, 12, 16, 20};
    cout << getMinDiff(arr, 5, 3) << endl;
}