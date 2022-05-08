#include <bits/stdc++.h>

using namespace std;

int transitionPoint(int arr[], int n)
{
    // code here
    int i = 0;
    bool one = false;
    while (!one)
    {
        if (arr[i] == 1)
        {
            one = true;
            return i;
        }
        else
        {
            i++;
        }
    }
    if (one == false)
        return -1;
}