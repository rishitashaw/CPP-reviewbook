#include <bits/stdc++.h>

using namespace std;

int missingNumber(int arr[], int n)
{
    // Your code here
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (arr[i] != 1)
            {
                return 1;
            }
            else
            {
                if (arr[i] + 1 == arr[i + 1])
                {
                    continue;
                }
                else
                {
                    return arr[i] + 1;
                }
            }
        }
        else
        {
            continue;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << missingNumber(arr, 10) << endl;
}