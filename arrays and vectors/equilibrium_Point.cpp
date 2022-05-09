#include <bits/stdc++.h>

using namespace std;

int equilibriumPoint(long long a[], int n)
{

    // Your code here
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    if (n == 1)
        return 1;

    if (n == 2)
        return -1;

    int ls = 0;
    int rs = 0;
    for (int i = 1; i < n - 1; i++)
    {
        ls = ls + a[i];
        rs = sum - ls - a[i + 1];
        if (ls == rs)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    long long a[] = {1, 3, 5, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);
    cout << equilibriumPoint(a, n) << endl;
}