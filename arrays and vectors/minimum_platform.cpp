#include <bits/stdc++.h>

using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    // Your code here
    int i = 0;
    int cnt = 1;
    

    for (int j = 1; j < n; j++)
    {
        if (dep[i] <= arr[j])
        {
            cnt++;
            // cout << arr[j] << " " << dep[j] << endl;
            i = j;
        }
    }
    return cnt;
}

int main() {}