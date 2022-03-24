#include <bits/stdc++.h>

using namespace std;

void pairSum(vector<int> arr, int target)
{
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = target - arr[i];
        if (s.find(element) != s.end())
        {
            cout << element << " " << arr[i] << endl;
        }
        else
        {
            s.insert(arr[i]);
        }
    }
    return;
}

int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    pairSum(arr, 7);
}