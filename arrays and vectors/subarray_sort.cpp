#include <bits/stdc++.h>

using namespace std;

bool outOfOrder(vector<int> nums, int i)
{
    int x = nums[i];

    if (i == 0)
    {
        return x > nums[i];
    }
    if (i == nums.size() - 1)
    {
        return x < nums[i - 1];
    }

    return x > nums[i + 1] or x < nums[i - 1];
}

pair<int, int> subnumsaySort(vector<int> nums)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        int x = nums[i];

        if (outOfOrder(nums, i))
        {
            smallest = min(smallest, x);
            largest = max(largest, x);
        }
    }
    if (smallest == INT_MAX)
    {
        return {-1, -1};
    }

    int left = 0;
    while (smallest >= nums[left])
    {
        left++;
    }
    int right = nums.size() - 1;
    while (largest <= nums[right])
    {
        right--;
    }
    cout << left << " " << right << endl;
    return {left, right};
}

int main()
{
    vector<int> nums{2, 1};

    pair<int, int> result = subnumsaySort(nums);
}