#include <bits/stdc++.h>

using namespace std;

int equilibriumPoint(long long a[], int n)
{

    // Your code here
    int equilibriumPoint = n / 2;
    if (n < 2)
    {
        return 0;
    }
    int is1 = 0;
    int is2 = 0;

    int left = accumulate(a, a + equilibriumPoint - 1, is1);
    int right = accumulate(a + equilibriumPoint + 1, a + n, is2);

    while (left != right)
    {
        if (left > right)
        {
            equilibriumPoint = equilibriumPoint - 1;
            left = accumulate(a, a + equilibriumPoint - 1, is1);
            right = accumulate(a + equilibriumPoint + 1, a + n, is2);
        }
        else
        {
            equilibriumPoint = equilibriumPoint + 1;
            left = accumulate(a, a + equilibriumPoint - 1, is1);
            right = accumulate(a + equilibriumPoint + 1, a + n, is2);
        }
    }
    return equilibriumPoint;
}

int main()
{
    long long a[] = {1, 3, 5, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);
    cout << equilibriumPoint(a, n) << endl;
}