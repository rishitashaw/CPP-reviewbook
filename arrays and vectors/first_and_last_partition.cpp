#include <bits/stdc++.h>

using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{

    int k = 0;
    int n = nums.size();
    int j = n - 1;
    vector<int> res;
    while (k < j)
    {
        int curr_front = nums[k];
        int curr_back = nums[j];
        if (curr_front == target and curr_back == target)
        {
            res.push_back(j);
            res.push_back(k);
        }
        else if (curr_front < target)
        {
            k++;
        }
        else if (curr_back > target)
        {
            j--;
        }
        else
        {
            k++;
            j--;
        }
    }
    if (count(nums.begin(), nums.end(), target) == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                res.push_back(i);
                res.push_back(i);
            }
        }
    }
    if (res.size() == 0)
    {
        res.push_back(-1);
        res.push_back(-1);
    }

    return res;
}

int main()
{
    vector<int> arr{1, 3};
    vector<int> res = searchRange(arr, 1);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}