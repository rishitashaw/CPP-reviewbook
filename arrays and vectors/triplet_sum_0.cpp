#include <bits/stdc++.h>

using namespace std;

int findTriplets(int arr[], int n)
{
    // Your code here
    int target = 0;
    for (int i = 0; i < n - 3; i++)
    {
        int j = i + 1;
        int k = n - 1;
        int current_sum = 0;
        bool found = false;
        while (j < k and !found)
        {
            current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];

            if (current_sum == target)
            {
                found = true;
                return 1;
            }
            else if (current_sum > 0)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findTriplets(arr, n) << endl;
}