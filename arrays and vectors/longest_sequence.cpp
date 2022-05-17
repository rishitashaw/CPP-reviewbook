#include <bits/stdc++.h>

using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
    // Your code here
    sort(arr, arr + N);
    unordered_set<int> set;
    for (int i = 0; i < N; i++)
    {
        if (set.find(arr[i]) == set.end())
        {
            set.insert(arr[i]);
        }
    }
    int longest_band = 0;
    for (int i = 0; i < N; i++)
    {
        int parent = arr[i] - 1;
        if (set.find(parent) == set.end())
        {
            int next = arr[i] + 1;
            int cnt = 1;
            while (set.find(next) != set.end())
            {
                cnt++;
                next++;
            }
            if (cnt > longest_band)
            {
                longest_band = cnt;
            }
        }
    }
    return longest_band;
}

int main()
{
    int a[] = {2,
               6,
               1,
               9,
               4,
               5,
               3};
    cout << findLongestConseqSubseq(a, 7) << endl;
}