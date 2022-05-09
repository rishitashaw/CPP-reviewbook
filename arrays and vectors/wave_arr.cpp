#include <bits/stdc++.h>

using namespace std;

void convertToWave(int n, vector<int> &arr)
{

    // Your code here
    sort(arr.begin(), arr.end());

    if (n % 2 == 0)
    {
        for (int i = 0; i < n;)
        {
            swap(arr[i], arr[i + 1]);
            i = i + 2;
        }
    }
    else
    {
        int temp = arr[n - 1];
        for (int i = 0; i < n - 1;)
        {
            swap(arr[i], arr[i + 1]);
            i = i + 2;
        }
        arr[n - 1] = temp;
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int n = arr.size();
    convertToWave(n, arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}