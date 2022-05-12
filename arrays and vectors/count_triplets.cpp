#include <bits/stdc++.h>

using namespace std;

int countTriplet(int arr[], int n)
{
    // Your code goes here
    sort(arr, arr + n);
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
        {
            s.insert(arr[i]);
        }
    }

    int i = 0;
    int j = i + 1;
    int cs = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cs = arr[i] + arr[j];
            if (s.find(cs) != s.end())
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int arr[] = {1, 5, 3, 2};
    cout << countTriplet(arr, 4);
}