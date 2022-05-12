#include <bits/stdc++.h>

using namespace std;

int FindMaxSum(int arr[], int n)
{
    // Your code here
    int i, oddSum = 0, evenSum = 0;
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + arr[i];
        }
        else
        {
            oddSum = oddSum + arr[i];
        }
    }
    return max(oddSum, evenSum);
}

int main()
{
    int arr[] = {5, 5, 10, 100, 10, 5};
    cout << FindMaxSum(arr, 6);
}