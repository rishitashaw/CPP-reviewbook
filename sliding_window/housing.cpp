#include <bits/stdc++.h>

using namespace std;

void housing(int *arr, int n, int k)
{
    int i = 0;
    int j = 0;
    int cs = 0;

    while (j < n)
    {
        cs += arr[j];
        j++;

        while (cs > k and i < j)
        {
            cs = cs - arr[i];
            i++;
        }
        if (cs == k)
        {
            cout << i << "-" << j - 1 << endl;
        }
    }
    return;
}

int main()
{
    int k = 8;
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    housing(arr, n, k);
}