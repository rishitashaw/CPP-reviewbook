#include <bits/stdc++.h>

using namespace std;

bool subarraySum(vector<int> &nums, int k)
{
    int i = 0;
    int j = 0;
    int cs = 0;
    int cnt = 0;
    int n = nums.size();

    while (j < n)
    {
        cs += nums[j];
        j++;

        while (cs > k and i < j)
        {
            cs = cs - nums[i];
            i++;

            if (cs == k)
            {
                cnt++;
            }
        }
    }
    if (cnt >= 1)
    {
        return true;
    }

    return false;
}
int main()
{
    int k = 6;
    vector<int> arr{23, 2, 4, 6, 7};

    int result = subarraySum(arr, k);
    cout << result << endl;
}