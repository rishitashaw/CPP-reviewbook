#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> triplet(vector<int> nums)
{
    vector<vector<int>> result;

    int target = 0;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int current_sum = nums[i];
            current_sum += nums[j];
            current_sum += nums[k];

            if (current_sum == target)
            {
                result.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            if (current_sum > target)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
        if (result.size() == 0)
        {
            return 0;
        }
        return result;
    }
}

int main()
{
    vector<int> nums{-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = triplet(nums);
    for (auto triplet : result)
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << "\n";
    return 0;
}