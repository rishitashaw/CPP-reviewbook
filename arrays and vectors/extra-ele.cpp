#include <bits/stdc++.h>
using namespace std;

int findExtra(int a[], int b[], int n)
{
    // add code here.
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return i;
        }
    }
}