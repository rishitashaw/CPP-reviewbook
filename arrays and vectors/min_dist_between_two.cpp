#include <bits/stdc++.h>

using namespace std;

int minDist(int a[], int n, int x, int y)
{
    // code here
    int x_pos = INT_MIN;
    int y_pos = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            x_pos = i;
        }
        if (a[i] == y)
        {
            y_pos = i;
        }
    }

    if (x_pos != INT_MIN && y_pos != INT_MIN)
    {
        return abs(x_pos - y_pos);
    }
    return -1;
}
int main()
{
}