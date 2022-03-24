#include <bits/stdc++.h>

using namespace std;
vector<int> result;

vector<int> findDuplicateLeft(vector<int> &nums, int target)
{
    auto idx1 = find(nums.begin(), nums.end(), target);
    result.push_back(distance(nums.begin(), idx1));
    return result;
}

vector<int> findDuplicateRight(vector<int> &nums, int target)
{
    reverse(nums.begin(), nums.end());
    auto idx1 = find(nums.begin(), nums.end(), target);
    result.push_back(distance(nums.end(), idx1));
    return result;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    findDuplicateLeft(nums, target);
    findDuplicateRight(nums, target);

    if (result.size() == 0)
        return {-1, -1};
    return result;
}
int main()
{
    vector<int> nums{5, 7, 7, 8, 8, 10};
    vector<int> result = searchRange(nums, 8);
    for (auto i : result)
    {
        cout << result[i] << " ";
    }
}