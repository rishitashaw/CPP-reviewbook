#include <bits/stdc++.h>

using namespace std;

int peakElement(int arr[], int n)
{
    // Your code here
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
        {
            return i;
        }
        else if (arr[0] > arr[1])
        {
            return 0;
        }
        else if (arr[n - 1] > arr[n - 2])
        {
            return n;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << peakElement(arr, n) << endl;
}