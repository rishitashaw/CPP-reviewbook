#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int cnt = count(nums.begin(), nums.end(), 0);
    remove(nums.begin(), nums.end(), 0);

    for (int i = 0; i < cnt; i++)
    {
        nums.push_back(0);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ",";
    }
}

int main()
{
    vector<int> arr{0, 1, 0, 3, 12};
    moveZeroes(arr);
}