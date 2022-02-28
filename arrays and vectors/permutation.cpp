#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int> &nums)
{
    vector<int> temp;
    vector<vector<int>> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    do
    {
        for (int i = 0; i < n; i++)
        {
            temp.push_back(nums[i]);
        }
        res.push_back(temp);
        temp.clear();

    } while (next_permutation(nums.begin(), nums.end()));

    return res;
}

int main()
{
}