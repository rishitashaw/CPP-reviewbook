#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{

    // Your code here
    int cs = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cs += arr[i];
        if (ans < cs)
        {
            ans = cs;
        }
        if (cs < 0)
        {
            cs = 0;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    cout << maxSubarraySum(arr, 5) << endl;
}