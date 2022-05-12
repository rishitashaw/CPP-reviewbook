#include <bits/stdc++.h>

using namespace std;

void frequencyCount(vector<int> &arr, int N, int P)
{
    // code here
    unordered_map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        m[arr[i]]++;
    }

    for (int i = 0; i < P; i++)
    {
        for (auto it : m)
        {
            if (it.first == i + 1)
            {
                arr[i] = it.second;
            }
            else
            {
                arr[i] = 0;
            }
        }
    }
    return;
}

int main()
{
    vector<int> arr{};
}