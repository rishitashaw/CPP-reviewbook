#include <bits/stdc++.h>

using namespace std;
int findDuplicate(vector<int> &nums)
{
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        if (s.find(nums[i]) != s.end())
        {
            return nums[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 3, 4, 2, 2};
    cout << findDuplicate(arr) << endl;
}