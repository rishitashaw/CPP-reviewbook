#include <bits/stdc++.h>

using namespace std;

void rotatedArrays(vector<int> nums, int k)
{

    for (int i = 0; i < k; i++)
    {
        nums.insert(nums.begin(), nums[nums.size() - 1]);
        nums.pop_back();
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ",";
    }
    return;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotatedArrays(arr, k);
}