#include <bits/stdc++.h>

using namespace std;

int rotated_search(vector<int> nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[s] <= nums[mid])
        {
            // left side
            if (target >= nums[s] and target <= nums[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            // right side
            if (target <= nums[e] and target >= nums[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{7, 9, 10, 1, 2, 3, 4, 5, 6};
    int target = 4;
    int result = rotated_search(arr, target);
    cout << result << endl;
}